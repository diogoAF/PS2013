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
}TipoDesenvolvedor;

//typedef struct

//typedef struct

//typedef struct

#endif // PACOTEDESTRUCTS_H_INCLUDED
