#ifndef PACOTEDESTRUCTS_H_INCLUDED
#define PACOTEDESTRUCTS_H_INCLUDED

#include "TabelaDeCodigos.h"

/**
Struct para armazenar a DATA
*/
typedef struct{
    int dia,mes,ano;
}TipoData;

/**
Struct para armazenar o DESENVOLVEDOR
*/
typedef struct{
    char nome[VET_NOME],
    senha[VET_SENHA],
    email[VET_EMAIL];
    int categoria;
}TipoDesenvolvedor;

/**
Struct para armazenar o PRODUTO
*/
typedef struct{
    char nome[VET_NOME],
    codigo[VET_CODIGO],
    versao[VET_VERSAO],
    emailLider[VET_EMAIL];
}TipoProduto;

/**
Struct para armazenar o DEFEITO
*/
typedef struct{
    char codigo[VET_CODIGO],
    descricao[VET_DESCRICAO],
    codigoProduto[VET_CODIGO];
    int estado, votos;
    TipoData dataAbertura, dataEncerramento;
}TipoDefeito;

//typedef struct

#endif // PACOTEDESTRUCTS_H_INCLUDED
