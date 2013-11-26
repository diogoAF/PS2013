#include <"SPDesenvolvedor.h">

#define Tamanho 10 //esse é o tamanho da string que guarda a posicao do topo da pilha de reaproveitamento de espaco
#define HEXA 16 //guarda o numero de digitos em hexadecimal
#define TAM_TOTAL (VET_EMAIL-1 + VET_NOME-1 + VET_SENHA-1 + 3 + 1 + 1 + 1 )
//+3: espaços separadores no registro //+1: nova linha //+1: o tamanho do categoria
//+1: creio que esse seja o caractere de retorno de carro
//os -1: cada macro foi feita pensando na extensao do vetor, que carrega um caractere NULL.
//esse caractere deve ser ignorado ao contar quantos elementos um vetor tem efetivamente
 int cadastrar(FILE *arquivo, TipoDesenvolvedor *desenvolvedor){
    /*
        Se(Nao existe espaco vago){
            cadastraNoFinalDoArquivo();
        }else{
            cadastraNoEspaçoVago();
            atualizaPilhaDeEspacoVago();
        }
    */
    /*
        Bloco que verifica se há espaço vago
    */

    /*ajusta as strings para ficarem com formato exato para serem escritas em arquivo*/
    ajustaString(desenvolvedor->email, VET_EMAIL);
    ajustaString(desenvolvedor->nome, VET_NOME);
    ajustaString(desenvolvedor->senha, VET_SENHA);

    char espacoVago[Tamanho + 1];//+1: espaço para armazenar o caracter NULL
    espacoVago[Tamanho] = NULL;
    fread(espacoVago, sizeof(char), Tamanho, arquivo);
    long int posicaoVaga = strtol(espacoVago, NULL, HEXA);

    if(posicaoVaga == FALSE){
        //os "-1" são para evitar escrever o caractere "NULL" no arquivo
        fseek(arquivo, 0, SEEK_END);

        fwrite(desenvolvedor->email, sizeof(char), VET_EMAIL - 1, arquivo);
        fprintf(arquivo, " ");

        fwrite(desenvolvedor->nome, sizeof(char), VET_NOME - 1, arquivo);
        fprintf(arquivo, " ");

        fwrite(desenvolvedor->senha, sizeof(char), VET_SENHA - 1, arquivo);
        fprintf(arquivo, " ");

        fprintf(arquivo, "%d\n", desenvolvedor->categoria);
        fflush(arquivo);
    }else{
        //printf("posicaoVaga: %d\n", posicaoVaga);
        fseek(arquivo, posicaoVaga + 1, SEEK_SET);//+1:ignora o * indicador de espaço vago
        fread(espacoVago, sizeof(char), Tamanho, arquivo);//leitura do posicionamento do proximo espaço vago

        fseek(arquivo, posicaoVaga, SEEK_SET);//volta o carro para o inicio do registro
        fwrite(desenvolvedor->email, sizeof(char), VET_EMAIL - 1, arquivo);
        fprintf(arquivo, " ");
        fwrite(desenvolvedor->nome, sizeof(char), VET_NOME - 1, arquivo);
        fprintf(arquivo, " ");
        fwrite(desenvolvedor->senha, sizeof(char), VET_SENHA - 1, arquivo);
        fprintf(arquivo, " ");
        fprintf(arquivo, "%d\n", desenvolvedor->categoria);
        fseek(arquivo, 0, SEEK_SET);
        fwrite(espacoVago, sizeof(char), Tamanho, arquivo);
    }
 }

 int deletar(FILE * arquivo, TipoDesenvolvedor * registro){
    /*
        pula o indicador de espaço vazio;
        Busca o registro no arquivo;
        coloca seu endereço na lista de espaços disponíveis;
        coloca um * no inicio do registro;
    */

    //pula o indicador de espaço livre
    char disponivel[Tamanho+1];
    fseek(arquivo, SEEK_SET, SEEK_SET);
    fread(disponivel, sizeof(char), Tamanho, arquivo);
    disponivel[ Tamanho ] = NULL;
    fseek(arquivo, Tamanho + 2, SEEK_SET);
    //+1: ignora o "\n" existente ao final da linha

    //busca o registro no arquivo
    char buffer[VET_EMAIL];
    char lixo[TAM_TOTAL];
    long int posicao;
    do{
        posicao = ftell(arquivo);
        fread(buffer, sizeof(char), VET_EMAIL - 1, arquivo);
        buffer[VET_EMAIL - 1] = NULL;
        fread(lixo, sizeof(char), TAM_TOTAL - VET_EMAIL, arquivo);
        lixo[TAM_TOTAL - VET_EMAIL] = NULL;
    }while( strcmp(buffer, registro->email) );

    fseek(arquivo, 0, SEEK_SET);
    fprintf(arquivo, "%0*x",Tamanho, posicao);
    //a posição é salva em hexadecimal para aumentar o alcance do indice num numero menor de caracteres
    fseek(arquivo, posicao, SEEK_SET);
    fprintf(arquivo, "*%s", disponivel);
 }

 int ajustaString(char *buffer, int tamanho){
    buffer[ tamanho - 1 ] = NULL;
    int cont = strlen(buffer);
    if(cont < tamanho){
        int i;
        for(i = 0; i < ( tamanho - cont - 1); i++){
            buffer[cont + i] = ' ';
        }
    }

 }

int existeDesenvolvedor(FILE *arquivo, char *chavePrimaria, long int *posicao){
    ajustaString(chavePrimaria, VET_EMAIL);
    char buffer[VET_EMAIL];
    char lixo[TAM_TOTAL - VET_EMAIL + 1];
    fseek(arquivo, Tamanho + 2, SEEK_SET);
    do{
        fread(buffer, sizeof(char), VET_EMAIL - 1, arquivo);
        buffer[VET_EMAIL - 1] = NULL;
        if( !strcmp(buffer, chavePrimaria) ){
            *posicao = ftell(arquivo) - VET_EMAIL;
            return TRUE;
        }
        fread(lixo, sizeof(char), TAM_TOTAL - VET_EMAIL, arquivo);
        lixo[TAM_TOTAL - VET_EMAIL] = NULL;
    }while( !feof(arquivo) );
    *posicao = NULL;
    return FALSE;
}
