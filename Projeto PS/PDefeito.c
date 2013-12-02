#define SPDEFEITO_SERV

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "SPDefeito.h"
#include "PacoteDeStructs.h"

 int inserirDefeito(FILE *arquivo, TipoDefeito *defeito){

    char espacoVago[TAMANHO_POSICAO + 1];//+1: espaço para armazenar o caracter NULL
    espacoVago[TAMANHO_POSICAO] = NULL;
    fread(espacoVago, sizeof(char), TAMANHO_POSICAO, arquivo);
    long int posicaoVaga = strtol(espacoVago, NULL, HEXA);

    /*ajusta as strings para ficarem com formato exato para serem escritas em arquivo*/
    ajustaString(defeito->codigo, VET_CODIGO);
    ajustaString(defeito->descricao, VET_DESCRICAO);
    ajustaString(defeito->codigoProduto, VET_CODIGO);

    if(posicaoVaga == FALSE){
        //os "-1" são para evitar escrever o caractere "NULL" no arquivo
        fseek(arquivo, 0, SEEK_END);

        fwrite(defeito->codigo, sizeof(char), VET_CODIGO - 1, arquivo);
        fprintf(arquivo, " ");

        fwrite(defeito->codigoProduto, sizeof(char), VET_CODIGO - 1, arquivo);
        fprintf(arquivo, " ");

        fprintf(arquivo, "%d", defeito->estado);
        fprintf(arquivo, " ");

        fprintf(arquivo, "%0*d", DGTS_VOTO, defeito->votos);
        fprintf(arquivo, " ");

        fprintf(arquivo, "%0*d", DGTS_DIA, defeito->dataAbertura.dia);
        fprintf(arquivo, "-");

        fprintf(arquivo, "%0*d", DGTS_MES, defeito->dataAbertura.mes);
        fprintf(arquivo, "-");

        fprintf(arquivo, "%0*d", DGTS_ANO, defeito->dataAbertura.ano);
        fprintf(arquivo, " ");

        fprintf(arquivo, "%0*d", DGTS_DIA, defeito->dataEncerramento.dia);
        fprintf(arquivo, "-");

        fprintf(arquivo, "%0*d", DGTS_MES, defeito->dataEncerramento.mes);
        fprintf(arquivo, "-");

        fprintf(arquivo, "%0*d", DGTS_ANO, defeito->dataEncerramento.ano);
        fprintf(arquivo, " ");

        fwrite(defeito->descricao, sizeof(char), VET_DESCRICAO - 1, arquivo);
        fprintf(arquivo, "\n");

    }else{
        //printf("posicaoVaga: %d\n", posicaoVaga);
        fseek(arquivo, posicaoVaga + 1, SEEK_SET);//+1:ignora o * indicador de espaço vago
        fread(espacoVago, sizeof(char), TAMANHO_POSICAO, arquivo);//leitura do posicionamento do proximo espaço vago

        fseek(arquivo, posicaoVaga, SEEK_SET);//volta o carro para o inicio do registro
        fwrite(defeito->codigo, sizeof(char), VET_CODIGO - 1, arquivo);
        fprintf(arquivo, " ");

        fwrite(defeito->codigoProduto, sizeof(char), VET_CODIGO - 1, arquivo);
        fprintf(arquivo, " ");

        fprintf(arquivo, "%d", defeito->estado);
        fprintf(arquivo, " ");

        fprintf(arquivo, "%0*d",DGTS_VOTO, defeito->votos);
        fprintf(arquivo, " ");


        fprintf(arquivo, "%0*d", DGTS_DIA, defeito->dataAbertura.dia);
        fprintf(arquivo, "-");

        fprintf(arquivo, "%0*d", DGTS_MES, defeito->dataAbertura.mes);
        fprintf(arquivo, "-");

        fprintf(arquivo, "%0*d", DGTS_ANO, defeito->dataAbertura.ano);
        fprintf(arquivo, " ");

        fprintf(arquivo, "%0*d", DGTS_DIA, defeito->dataEncerramento.dia);
        fprintf(arquivo, "-");

        fprintf(arquivo, "%0*d", DGTS_MES, defeito->dataEncerramento.mes);
        fprintf(arquivo, "-");

        fprintf(arquivo, "%0*d", DGTS_ANO, defeito->dataEncerramento.ano);
        fprintf(arquivo, " ");

        fwrite(defeito->descricao, sizeof(char), VET_DESCRICAO - 1, arquivo);
        fprintf(arquivo, "\n");

        fseek(arquivo, 0, SEEK_SET);
        fwrite(espacoVago, sizeof(char), TAMANHO_POSICAO, arquivo);
    }
 }

 int deletarDefeito(FILE * arquivo, TipoDefeito * registro){
    //verifica o topo da pilha de espacos vazios
    char disponivel[TAMANHO_POSICAO + 1];
    fseek(arquivo, SEEK_SET, SEEK_SET);
    fread(disponivel, sizeof(char), TAMANHO_POSICAO, arquivo);
    disponivel[ TAMANHO_POSICAO ] = NULL;
    fseek(arquivo, TAMANHO_POSICAO + 2, SEEK_SET);
    //+1: ignora o "\n" existente ao final da linha

    //busca o registro no arquivo
    char buffer[VET_CODIGO];//chave primaria
    char lixo[TAM_TOTAL_REG_DEFEITO - VET_CODIGO];
    long int posicao;
    do{
        posicao = ftell(arquivo);
        fread(buffer, sizeof(char), VET_CODIGO - 1, arquivo);
        buffer[VET_CODIGO - 1] = NULL;
        fread(lixo, sizeof(char), TAM_TOTAL_REG_DEFEITO - VET_CODIGO-1, arquivo);
        lixo[TAM_TOTAL_REG_DEFEITO - VET_CODIGO-1] = NULL;
    }while( strcmp(buffer, registro->codigo) );

    fseek(arquivo, 0, SEEK_SET);
    fprintf(arquivo, "%0*x",TAMANHO_POSICAO, posicao);
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

int existeDefeito(FILE *arquivo, char *chavePrimaria, long int *posicao){
    ajustaString(chavePrimaria, VET_CODIGO);
    char buffer[VET_CODIGO];
    char lixo[TAM_TOTAL_REG_DEFEITO - VET_CODIGO + 1];
    fseek(arquivo, TAMANHO_POSICAO + 2, SEEK_SET);
    do{
        fread(buffer, sizeof(char), VET_CODIGO - 1, arquivo);
        buffer[VET_CODIGO - 1] = NULL;
        if( !strcmp(buffer, chavePrimaria) ){
            *posicao = ftell(arquivo) - VET_CODIGO + 1;
            return TRUE;
        }
        fread(lixo, sizeof(char), TAM_TOTAL_REG_DEFEITO - VET_CODIGO-1, arquivo);
        lixo[TAM_TOTAL_REG_DEFEITO - VET_CODIGO-1] = NULL;
    }while( !feof(arquivo) );
    *posicao = NULL;
    return FALSE;
}

int editarDefeito(FILE *arquivo, TipoDefeito *defeito, long int posicao){
    fseek(arquivo, posicao, SEEK_SET);
    fwrite(defeito->codigo, sizeof(char), VET_CODIGO - 1, arquivo);
        fprintf(arquivo, " ");

        fwrite(defeito->codigoProduto, sizeof(char), VET_CODIGO - 1, arquivo);
        fprintf(arquivo, " ");

        fprintf(arquivo, "%d", defeito->estado);
        fprintf(arquivo, " ");

        fprintf(arquivo, "%0*d", DGTS_VOTO, defeito->votos);
        fprintf(arquivo, " ");

        fprintf(arquivo, "%0*d", DGTS_DIA, defeito->dataAbertura.dia);
        fprintf(arquivo, "-");

        fprintf(arquivo, "%0*d", DGTS_MES, defeito->dataAbertura.mes);
        fprintf(arquivo, "-");

        fprintf(arquivo, "%0*d", DGTS_ANO, defeito->dataAbertura.ano);
        fprintf(arquivo, " ");

        fprintf(arquivo, "%0*d", DGTS_DIA, defeito->dataEncerramento.dia);
        fprintf(arquivo, "-");

        fprintf(arquivo, "%0*d", DGTS_MES, defeito->dataEncerramento.mes);
        fprintf(arquivo, "-");

        fprintf(arquivo, "%0*d", DGTS_ANO, defeito->dataEncerramento.ano);
        fprintf(arquivo, " ");

        fwrite(defeito->descricao, sizeof(char), VET_DESCRICAO - 1, arquivo);
        fprintf(arquivo, "\n");
}

int editarDefeitoCodigo(FILE *arquivo, char *codigo, long int posicao){
    fseek(arquivo, posicao, SEEK_SET);
    ajustaString(codigo, VET_CODIGO);
    fwrite(codigo, sizeof(char), VET_CODIGO-1, arquivo);
}

//int editarDefeitoDescricao(FILE *arquivo, char *descricao, long int posicao){
//    fseek(arquivo, posicao + VET_CODIGO, SEEK_SET);
//    fwrite(descricao, sizeof(char), VET_DESCRICAO-1, arquivo);
//}
//
//int editarDefeitoCodigoProduto(FILE *arquivo, char *codigoProduto, long int posicao){
//    fseek(arquivo, posicao + VET_CODIGO + VET_DESCRICAO, SEEK_SET);
//    fwrite(codigoProduto, sizeof(char), VET_CODIGO-1, arquivo);
//}
//
int editarDefeitoVoto(FILE *arquivo, long int posicao){
    fseek(arquivo, posicao + 2*(VET_CODIGO-1) + DGTS_ESTADO + 3, SEEK_SET);
    char votos[DGTS_VOTO+1];
    votos[DGTS_VOTO] = NULL;
    fread(votos, sizeof(char), DGTS_VOTO, arquivo);
    int numVotos = strtol(votos, NULL, DECI);
    if(numVotos < 999){
            numVotos++;
            fseek(arquivo, posicao + 2*(VET_CODIGO-1) + DGTS_ESTADO + 3, SEEK_SET);
            fprintf(arquivo, "%0*d", DGTS_VOTO, numVotos);
    }
}
