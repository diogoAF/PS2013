#define PPRODUTO_SERV
#include "SPProduto.h"

 int inserirProduto(FILE *arquivo, TipoProduto *produto){

    char espacoVago[TAMANHO_POSICAO + 1];//+1: espaço para armazenar o caracter NULL
    espacoVago[TAMANHO_POSICAO] = NULL;
    fread(espacoVago, sizeof(char), TAMANHO_POSICAO, arquivo);
    long int posicaoVaga = strtol(espacoVago, NULL, HEXA);

    /*ajusta as strings para ficarem com formato exato para serem escritas em arquivo*/
    ajustaString(produto->nome, VET_NOME);
    ajustaString(produto->codigo, VET_CODIGO);
    ajustaString(produto->versao, VET_VERSAO);
    ajustaString(produto->emailLider, VET_EMAIL);

    if(posicaoVaga == FALSE){
        //os "-1" são para evitar escrever o caractere "NULL" no arquivo
        fseek(arquivo, 0, SEEK_END);

        fwrite(produto->codigo, sizeof(char), VET_CODIGO - 1, arquivo);
        fprintf(arquivo, " ");

        fwrite(produto->nome, sizeof(char), VET_NOME - 1, arquivo);
        fprintf(arquivo, " ");

        fwrite(produto->versao, sizeof(char), VET_VERSAO - 1, arquivo);
        fprintf(arquivo, " ");

        fwrite(produto->emailLider, sizeof(char), VET_EMAIL - 1, arquivo);
        fprintf(arquivo, "\n");
    }else{
        //printf("posicaoVaga: %d\n", posicaoVaga);
        fseek(arquivo, posicaoVaga + 1, SEEK_SET);//+1:ignora o * indicador de espaço vago
        fread(espacoVago, sizeof(char), TAMANHO_POSICAO, arquivo);//leitura do posicionamento do proximo espaço vago

        fseek(arquivo, posicaoVaga, SEEK_SET);//volta o carro para o inicio do registro

        fwrite(produto->codigo, sizeof(char), VET_CODIGO - 1, arquivo);
        fprintf(arquivo, " ");

        fwrite(produto->nome, sizeof(char), VET_NOME - 1, arquivo);
        fprintf(arquivo, " ");

        fwrite(produto->versao, sizeof(char), VET_VERSAO - 1, arquivo);
        fprintf(arquivo, " ");

        fwrite(produto->emailLider, sizeof(char), VET_EMAIL - 1, arquivo);
        fprintf(arquivo, "\n");

        fseek(arquivo, 0, SEEK_SET);
        fwrite(espacoVago, sizeof(char), TAMANHO_POSICAO, arquivo);
    }
 }

 int deletarProduto(FILE * arquivo, TipoProduto * registro, long int posicao){
    //verifica o topo da pilha de espacos vazios
    char disponivel[TAMANHO_POSICAO + 1];
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

int existeProduto(FILE *arquivo, char *chavePrimaria, long int *posicao){
    ajustaString(chavePrimaria, VET_CODIGO);
    char buffer[VET_CODIGO];
    char lixo[TAM_TOTAL_REG_PRODUTO - VET_CODIGO + 1];
    fseek(arquivo, TAMANHO_POSICAO + 2, SEEK_SET);
    do{
        fread(buffer, sizeof(char), VET_CODIGO - 1, arquivo);
        buffer[VET_CODIGO - 1] = NULL;
        printf("-%s- == -%s- \n", buffer, chavePrimaria);

        if( !strcmp(buffer, chavePrimaria) ){
            *posicao = ftell(arquivo) - VET_CODIGO + 1;
            return TRUE;
        }
        fread(lixo, sizeof(char), TAM_TOTAL_REG_PRODUTO - VET_CODIGO, arquivo);
        lixo[TAM_TOTAL_REG_PRODUTO - VET_CODIGO-1] = NULL;
    }while( !feof(arquivo) );
    *posicao = NULL;
    return FALSE;
}

int editarProduto(FILE *arquivo, TipoProduto *produto, long int posicao){
        fseek(arquivo, posicao, SEEK_SET);

        ajustaString(produto->codigo, VET_CODIGO);
        fwrite(produto->codigo, sizeof(char), VET_CODIGO - 1, arquivo);
        fprintf(arquivo, " ");

        ajustaString(produto->nome, VET_NOME);
        fwrite(produto->nome, sizeof(char), VET_NOME - 1, arquivo);
        fprintf(arquivo, " ");

        ajustaString(produto->versao, VET_VERSAO);
        fwrite(produto->versao, sizeof(char), VET_VERSAO - 1, arquivo);
        fprintf(arquivo, " ");

        ajustaString(produto->emailLider, VET_EMAIL);
        fwrite(produto->emailLider, sizeof(char), VET_EMAIL - 1, arquivo);
        fprintf(arquivo, "\n");
}

int editarProdutoCodigo(FILE *arquivo, char *codigo, long int posicao){
    fseek(arquivo, posicao, SEEK_SET);
    ajustaString(codigo, VET_CODIGO);
    fwrite(codigo, sizeof(char), VET_CODIGO-1, arquivo);
}

int editarProdutoNome(FILE *arquivo, char *nome, long int posicao){
    fseek(arquivo, posicao + VET_CODIGO, SEEK_SET);
    ajustaString(nome, VET_NOME);
    fwrite(nome, sizeof(char), VET_NOME-1, arquivo);
}

int editarProdutoVersao(FILE *arquivo, char *versao, long int posicao){
    fseek(arquivo, posicao + VET_CODIGO + VET_NOME, SEEK_SET);
    ajustaString(versao, VET_VERSAO);
    fwrite(versao, sizeof(char), VET_VERSAO-1, arquivo);
}

int editarProdutoLider(FILE *arquivo, char *novoLider, long int posicao){
    fseek(arquivo, posicao + VET_CODIGO + VET_NOME + VET_VERSAO, SEEK_SET);
    ajustaString(novoLider, VET_EMAIL);
    fwrite(novoLider, sizeof(char), VET_EMAIL-1, arquivo);
}
