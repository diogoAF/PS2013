#define PAUXILIAR_SERV
#include "PAuxiliar.h"


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

int inicializaArquivo(FILE *arquivo){
    fprintf(arquivo, "%0*d", TAMANHO_POSICAO, 0);
}
