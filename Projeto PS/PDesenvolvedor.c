#define SPDESENVOLVEDOR_SERV
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "SPDesenvolvedor.h"

#define TAMANHO_POSICAO 10 //esse � o tamanho da string que guarda a posicao do topo da pilha de reaproveitamento de espaco
#define HEXA 16 //guarda o numero de digitos em hexadecimal
#define TAM_TOTAL (VET_EMAIL-1 + VET_NOME-1 + VET_SENHA-1 + 3 + 1 + 1 + 1 )
//+3: espa�os separadores no registro //+1: nova linha //+1: o tamanho do categoria
//+1: creio que esse seja o caractere de retorno de carro
//os -1: cada macro foi feita pensando na extensao do vetor, que carrega um caractere NULL.
//esse caractere deve ser ignorado ao contar quantos elementos um vetor tem efetivamente
 int cadastrarUsuario(FILE *arquivo, TipoDesenvolvedor *desenvolvedor){
    /*
        Se(Nao existe espaco vago){
            cadastraNoFinalDoArquivo();
        }else{
            cadastraNoEspa�oVago();
            atualizaPilhaDeEspacoVago();
        }
    */
    /*
        Bloco que verifica se h� espa�o vago
    */

    /*ajusta as strings para ficarem com formato exato para serem escritas em arquivo*/
    ajustaString(desenvolvedor->email, VET_EMAIL);
    ajustaString(desenvolvedor->nome, VET_NOME);
    ajustaString(desenvolvedor->senha, VET_SENHA);

    char espacoVago[TAMANHO_POSICAO + 1];//+1: espa�o para armazenar o caracter NULL
    espacoVago[TAMANHO_POSICAO] = NULL;
    fread(espacoVago, sizeof(char), TAMANHO_POSICAO, arquivo);
    long int posicaoVaga = strtol(espacoVago, NULL, HEXA);

    if(posicaoVaga == FALSE){
        //os "-1" s�o para evitar escrever o caractere "NULL" no arquivo
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
        fseek(arquivo, posicaoVaga + 1, SEEK_SET);//+1:ignora o * indicador de espa�o vago
        fread(espacoVago, sizeof(char), TAMANHO_POSICAO, arquivo);//leitura do posicionamento do proximo espa�o vago

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

 int deletarUsuario(FILE * arquivo, TipoDesenvolvedor * registro){
    /*
        pula o indicador de espa�o vazio;
        Busca o registro no arquivo;
        coloca seu endere�o na lista de espa�os dispon�veis;
        coloca um * no inicio do registro;
    */

    //pula o indicador de espa�o livre
    char disponivel[TAMANHO_POSICAO+1];
    fseek(arquivo, SEEK_SET, SEEK_SET);
    fread(disponivel, sizeof(char), TAMANHO_POSICAO, arquivo);
    disponivel[ TAMANHO_POSICAO ] = NULL;
    fseek(arquivo, TAMANHO_POSICAO + 2, SEEK_SET);
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
    fprintf(arquivo, "%0*x",TAMANHO_POSICAO, posicao);
    //a posi��o � salva em hexadecimal para aumentar o alcance do indice num numero menor de caracteres
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
    printf("email: -%s-\n", usuario->email);
    printf("nome: -%s-\n", usuario->nome);
    printf("senha: -%s-\n", usuario->senha);
    printf("categoria: -%d-\n", usuario->categoria);
    fwrite(usuario->email, sizeof(char), VET_EMAIL-1, arquivo);
    fprintf(arquivo, " ");
    fwrite(usuario->nome, sizeof(char), VET_NOME-1, arquivo);
    fprintf(arquivo, " ");
    fwrite(usuario->senha, sizeof(char), VET_SENHA-1, arquivo);
    fprintf(arquivo, " ");
    fprintf(arquivo, "%d\n", usuario->categoria);
}

int editarUsuarioEmail(FILE *arquivo, char *email, long int posicao){
    fseek(arquivo, posicao, SEEK_SET);
    fwrite(email, sizeof(char), VET_EMAIL-1, arquivo);
}

int editarUsuarioNome(FILE *arquivo, char *nome, long int posicao){
    fseek(arquivo, posicao + VET_EMAIL, SEEK_SET);
    fwrite(nome, sizeof(char), VET_NOME-1, arquivo);
}

int editarUsuarioSenha(FILE *arquivo, char *senha, long int posicao){
    fseek(arquivo, posicao + VET_EMAIL + VET_NOME, SEEK_SET);
    fwrite(senha, sizeof(char), VET_SENHA-1, arquivo);
}

int editarUsuarioCategoria(FILE *arquivo, int categoria, long int posicao){
    fseek(arquivo, posicao + VET_EMAIL + VET_NOME + VET_SENHA, SEEK_SET);
    fprintf(arquivo, "%d", categoria);
}

