#ifndef TABELADECODIGOS_H_INCLUDED
#define TABELADECODIGOS_H_INCLUDED

/**
Definições Gerais
*/
#define TRUE 1
#define FALSE 0
#define ENTRADA_VALIDA 1

/**
Definições de Código de Erro
*/
//Definições Código de Retorno Validação Nome
#define NOME_CARACTER_INVALIDO -1
#define NOME_DIGITOS_INSUFICIENTES -2
#define NOME_LIMITE_DIGITOS_EXCEDIDO -3
//Definições Código de Retorno Validação Senha
#define SENHA_DIGITO_REPETIDO -1
#define SENHA_DIGITOS_INSUFICIENTES -2
#define SENHA_LIMITE_DIGITOS_EXCEDIDO -3
//Definições Código de Retorno Validação Código
#define CODIGO_CARACTER_INVALIDO -1
#define CODIGO_DIGITOS_INSUFICIENTES -2
#define CODIGO_LIMITE_DIGITOS_EXCEDIDO -3
//Definições Código de Retorno Validação Descrição
#define DESCRICAO_DIGITOS_INSUFICIENTES -1
#define DESCRICAO_LIMITE_DIGITOS_EXCEDIDO -2
//Definições Código de Retorno Validação Data
#define DATA_DIA_INVALIDO -1
#define DATA_MES_INVALIDO -2
#define DATA_ANO_INVALIDO -3
//Definições Código de Retorno Validação Votação
#define VOTO_CARACTER_INVALIDO -1
#define VOTO_INVALIDO -2
//Definições Código de Retorno Validação E-mail
#define EMAIL_CARACTER_INVALIDO -1
#define EMAIL_DIGITOS_INSUFICIENTES -2
#define EMAIL_FORMATO_INVALIDO -3
//Definições Código de Retorno Validação Versão
#define VERSAO_FORMATO_INVALIDO -1
#define VERSAO_CODIGO_INVALIDO -2

/**
Constantes de tamanho de vetores
*/
#define VET_NOME 16
#define VET_SENHA 6
#define VET_CODIGO 5
#define VET_DESCRICAO 31
#define VET_EMAIL 21
#define VET_VERSAO 6

#endif // TABELADECODIGOS_H_INCLUDED
