#include <stdio.h>
#include <stdlib.h>
#include "ValidacaoEntrada.h"

void testaValidaNome(void);
void testaValidaSenha(void);
void testaValidaCodigo(void);
void testaValidaData(void);
void testaValidaVoto(void);
void testaValidaVersao(void);

int main(){
    //testaValidaNome();
    //testaValidaSenha();
    //testaValidaCodigo();
    //testaValidaData();
    //testaValidaVoto();
    testaValidaVersao();
    return 0;
}

void testaValidaNome(void){
    char nome[VET_NOME];

    printf("Informe o nome: \n");
    scanf("%[^\n]s",&nome);

    if(validaNome(nome) == ENTRADA_VALIDA){
        printf("\n%s eh um nome valido!\n",nome);
    }else{
        printf("\n%s NAO eh um nome valido!\n",nome);
    }
    system("pause");
}

void testaValidaSenha(void){
    char senha[VET_SENHA];

    printf("Informe a senha:\n");
    scanf("%[^\n]s",&senha);

    if(validaSenha(senha) == ENTRADA_VALIDA){
        printf("\n%s eh uma senha valida!\n",senha);
    }else{
        printf("\n%s NAO eh uma senha valida!\n",senha);
    }
    system("pause");
}

void testaValidaCodigo(void){
    char codigo[VET_CODIGO];

    printf("Informe o codigo:\n");
    scanf("%[^\n]s",&codigo);

    if(validaCodigo(codigo) == ENTRADA_VALIDA){
        printf("\n%s eh um codigo valido!\n",codigo);
    }else{
        printf("\n%s NAO eh um codigo valido!\n",codigo);
    }
    system("pause");
}

void testaValidaData(void){
    TipoData data;

    printf("Informe o dia: ");
    scanf("%d",&data.dia);
    printf("\nInforme o mes: ");
    scanf("%d",&data.mes);
    printf("\nInforme o ano: ");
    scanf("%d",&data.ano);

    if(validaData(data) == ENTRADA_VALIDA){
        printf("\nEh uma data valida!\n");
    }else{
        printf("\nNAO eh uma data valida!\n");
    }
    system("pause");
}

void testaValidaVoto(void){
    int voto;

    printf("Informe o voto: ");
    scanf("%d",&voto);

    if(validaVoto(voto) == ENTRADA_VALIDA){
        printf("\n%d eh um voto valido!\n",voto);
    }else{
        printf("\n%d NAO eh um voto valido!\n",voto);
    }
    system("pause");
}

void testaValidaVersao(void){
    char versao[VET_VERSAO];

    printf("Informe a versão: ");
    scanf("%s",&versao);

    if(validaVersao(versao) == ENTRADA_VALIDA){
        printf("\n%s eh uma versao valida!\n",versao);
    }else{
        printf("\n%s NAO eh uma versao valida!\n",versao);
    }
    system("pause");
}
