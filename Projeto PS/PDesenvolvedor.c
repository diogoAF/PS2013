#define SPDESENVOLVEDOR_SERV
#include "SPDesenvolvedor.h"

#define TAMANHO_POSICAO 10 //esse é o tamanho da string que guarda a posicao do topo da pilha de reaproveitamento de espaco
#define HEXA 16 //guarda o numero de digitos em hexadecimal
#define TAM_TOTAL (VET_EMAIL-1 + VET_NOME-1 + VET_SENHA-1 + 3 + 1 + 1 + 1 )
//+3: espaços separadores no registro //+1: nova linha //+1: o tamanho do categoria
//+1: creio que esse seja o caractere de retorno de carro
//os -1: cada macro foi feita pensando na extensao do vetor, que carrega um caractere NULL.
//esse caractere deve ser ignorado ao contar quantos elementos um vetor tem efetivamente
 int cadastrarUsuario(FILE *arquivo, TipoDesenvolvedor *desenvolvedor){
    /*ajusta as strings para ficarem com formato exato para serem escritas em arquivo*/
    ajustaString(desenvolvedor->email, VET_EMAIL);
    ajustaString(desenvolvedor->nome, VET_NOME);
    ajustaString(desenvolvedor->senha, VET_SENHA);

    char espacoVago[TAMANHO_POSICAO + 1];//+1: espaço para armazenar o caracter NULL
    espacoVago[TAMANHO_POSICAO] = NULL;
    fread(espacoVago, sizeof(char), TAMANHO_POSICAO, arquivo);
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
        fread(espacoVago, sizeof(char), TAMANHO_POSICAO, arquivo);//leitura do posicionamento do proximo espaço vago

        fseek(arquivo, posicaoVaga, SEEK_SET);//volta o carro para o inicio do registro
        fwrite(desenvolvedor->email, sizeof(char), VET_EMAIL - 1, arquivo);
        fprintf(arquivo, " ");
        fwrite(desenvolvedor->nome, sizeof(char), VET_NOME - 1, arquivo);
        fprintf(arquivo, " ");
        fwrite(desenvolvedor->senha, sizeof(char), VET_SENHA - 1, arquivo);
        fprintf(arquivo, " ");
        fprintf(arquivo, "%d\n", desenvolvedor->categoria);
        fseek(arquivo, 0, SEEK_SET);
        fwrite(espacoVago, sizeof(char), TAMANHO_POSICAO, arquivo);
    }
 }

 int deletarUsuario(FILE * arquivo, TipoDesenvolvedor * registro, long int posicao){
    /*
        pula o indicador de espaço vazio;
        Busca o registro no arquivo;
        coloca seu endereço na lista de espaços disponíveis;
        coloca um * no inicio do registro;
    */

    //pula o indicador de espaço livre
    char disponivel[TAMANHO_POSICAO+1];
    fseek(arquivo, SEEK_SET, SEEK_SET);
    fread(disponivel, sizeof(char), TAMANHO_POSICAO, arquivo);
    disponivel[ TAMANHO_POSICAO ] = NULL;
    fseek(arquivo, TAMANHO_POSICAO + 2, SEEK_SET);
    //+1: ignora o "\n" existente ao final da linha

    fseek(arquivo, 0, SEEK_SET);
    fprintf(arquivo, "%0*x",TAMANHO_POSICAO, posicao);
    //a posição é salva em hexadecimal para aumentar o alcance do indice num numero menor de caracteres
    fseek(arquivo, posicao, SEEK_SET);
    fprintf(arquivo, "*%s", disponivel);
 }

int existeUsuario(FILE *arquivo, char *chavePrimaria, long int *posicao){
    ajustaString(chavePrimaria, VET_EMAIL);
    char buffer[VET_EMAIL];
    char lixo[TAM_TOTAL - VET_EMAIL + 1];
    fseek(arquivo, TAMANHO_POSICAO + 2, SEEK_SET);
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

int editarUsuario(FILE *arquivo, TipoDesenvolvedor *usuario, long int posicao){
    fseek(arquivo, posicao, SEEK_SET);

    ajustaString(usuario->email, VET_EMAIL);
    fwrite(usuario->email, sizeof(char), VET_EMAIL-1, arquivo);
    fprintf(arquivo, " ");

    ajustaString(usuario->email, VET_EMAIL);
    fwrite(usuario->nome, sizeof(char), VET_NOME-1, arquivo);
    fprintf(arquivo, " ");

    ajustaString(usuario->email, VET_EMAIL);
    fwrite(usuario->senha, sizeof(char), VET_SENHA-1, arquivo);
    fprintf(arquivo, " ");

    fprintf(arquivo, "%0*d\n", DGTS_CATEGORIA, usuario->categoria);
}

int editarUsuarioEmail(FILE *arquivo, char *email, long int posicao){
    fseek(arquivo, posicao, SEEK_SET);
    ajustaString(email, VET_EMAIL);
    fwrite(email, sizeof(char), VET_EMAIL-1, arquivo);
}

int editarUsuarioNome(FILE *arquivo, char *nome, long int posicao){
    fseek(arquivo, posicao + VET_EMAIL, SEEK_SET);
    ajustaString(nome, VET_NOME);
    fwrite(nome, sizeof(char), VET_NOME-1, arquivo);
}

int editarUsuarioSenha(FILE *arquivo, char *senha, long int posicao){
    fseek(arquivo, posicao + VET_EMAIL + VET_NOME, SEEK_SET);
    ajustaString(senha, VET_SENHA);
    fwrite(senha, sizeof(char), VET_SENHA-1, arquivo);
}

int editarUsuarioCategoria(FILE *arquivo, int categoria, long int posicao){
    fseek(arquivo, posicao + VET_EMAIL + VET_NOME + VET_SENHA, SEEK_SET);
    fprintf(arquivo, "%0*d", DGTS_CATEGORIA, categoria);
}
