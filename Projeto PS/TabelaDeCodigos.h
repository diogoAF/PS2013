#ifndef TABELADECODIGOS_H_INCLUDED
#define TABELADECODIGOS_H_INCLUDED

/**
Defini��es Gerais
*/
#define TRUE 1
#define FALSE 0
#define ENTRADA_VALIDA 1

/**
Defini��es de C�digo de Erro
*/
//Defini��es C�digo de Retorno Valida��o Nome
#define NOME_CARACTER_INVALIDO -1
#define NOME_DIGITOS_INSUFICIENTES -2
#define NOME_LIMITE_DIGITOS_EXCEDIDO -3
//Defini��es C�digo de Retorno Valida��o Senha
#define SENHA_DIGITO_REPETIDO -4
#define SENHA_DIGITOS_INSUFICIENTES -5
#define SENHA_LIMITE_DIGITOS_EXCEDIDO -6
//Defini��es C�digo de Retorno Valida��o C�digo
#define CODIGO_CARACTER_INVALIDO -7
#define CODIGO_DIGITOS_INSUFICIENTES -8
#define CODIGO_LIMITE_DIGITOS_EXCEDIDO -9
//Defini��es C�digo de Retorno Valida��o Descri��o
#define DESCRICAO_DIGITOS_INSUFICIENTES -10
#define DESCRICAO_LIMITE_DIGITOS_EXCEDIDO -11
//Defini��es C�digo de Retorno Valida��o Data
#define DATA_DIA_INVALIDO -12
#define DATA_MES_INVALIDO -13
#define DATA_ANO_INVALIDO -14
//Defini��es C�digo de Retorno Valida��o Vota��o
#define VOTO_CARACTER_INVALIDO -15
#define VOTO_INVALIDO -16
//Defini��es C�digo de Retorno Valida��o E-mail
#define EMAIL_CARACTER_INVALIDO -17
#define EMAIL_DIGITOS_INSUFICIENTES -18
#define EMAIL_FORMATO_INVALIDO -19
#define EMAIL_LIMITE_DIGITOS_EXCEDIDO -20
//Defini��es C�digo de Retorno Valida��o Vers�o
#define VERSAO_FORMATO_INVALIDO -21
#define VERSAO_CODIGO_INVALIDO -22

/**
Defini��es de Retorno de fun��es de Interfaces
*/
//Defini��es de Login
#define LOGIN_REALIZADO 2
#define LOGIN_USUARIO_NAO_CADASTRADO 3

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