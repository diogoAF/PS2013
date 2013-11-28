#ifndef TABELADECODIGOS_H_INCLUDED
#define TABELADECODIGOS_H_INCLUDED

/**
* Definições Gerais
*/
#define TRUE 1
#define FALSE 0
#define ENTRADA_VALIDA 1

/**
* Definições de Código de Erro
*/
///Definições Código de Retorno Validação Nome
#define NOME_CARACTER_INVALIDO -1
#define NOME_DIGITOS_INSUFICIENTES -2
#define NOME_LIMITE_DIGITOS_EXCEDIDO -3
///Definições Código de Retorno Validação Senha
#define SENHA_DIGITO_REPETIDO -4
#define SENHA_DIGITOS_INSUFICIENTES -5
#define SENHA_LIMITE_DIGITOS_EXCEDIDO -6
///Definições Código de Retorno Validação Código
#define CODIGO_CARACTER_INVALIDO -7
#define CODIGO_DIGITOS_INSUFICIENTES -8
#define CODIGO_LIMITE_DIGITOS_EXCEDIDO -9
///Definições Código de Retorno Validação Descrição
#define DESCRICAO_DIGITOS_INSUFICIENTES -10
#define DESCRICAO_LIMITE_DIGITOS_EXCEDIDO -11
///Definições Código de Retorno Validação Data
#define DATA_DIA_INVALIDO -12
#define DATA_MES_INVALIDO -13
#define DATA_ANO_INVALIDO -14
///Definições Código de Retorno Validação Votação
#define VOTO_CARACTER_INVALIDO -15
#define VOTO_INVALIDO -16
///Definições Código de Retorno Validação E-mail
#define EMAIL_CARACTER_INVALIDO -17
#define EMAIL_DIGITOS_INSUFICIENTES -18
#define EMAIL_FORMATO_INVALIDO -19
#define EMAIL_LIMITE_DIGITOS_EXCEDIDO -20
///Definições Código de Retorno Validação Versão
#define VERSAO_FORMATO_INVALIDO -21
#define VERSAO_CODIGO_INVALIDO -22

/**
* Definições de Retorno de funções de Interfaces
*/
#define ERRO_INESPERADO -100
///Definições de Login
#define LOGIN_REALIZADO 2
#define LOGIN_USUARIO_NAO_CADASTRADO 3
///Definições de CADASTRO de Desenvolvedor
#define DESENVOLVEDOR_CADASTRO_REALIZADO 4
#define DESENVOLVEDOR_JA_CADASTRADO 5
#define DESENVOLVEDOR_CADASTRO_ATUALIZADO 6
#define DESENVOLVEDOR_CONTA_CANCELADA 7
#define DESENVOLVEDOR_CONTA_NAO_PODE_SER_CANCELADA 8
///Definições Estados de Defeitos
#define ESTADO_NOVO 9
#define ESTADO_CONFIRMADO 10
#define ESTADO_EM_REPARO 11
#define ESTADO_REPARADO 12
#define ESTADO_ENCERRADO 13
///Definições de Retono de Pesquisas
#define PESQUISA_DESENVOLVEDOR_ENCONTRADO 14
#define PESQUISA_DESENVOLVEDOR_NAO_ENCONTRADO 15
#define PESQUISA_PRODUTO_ENCONTRADO 16
#define PESQUISA_PRODUTO_NAO_ENCONTRADO 17
#define PESQUISA_DEFEITO_ENCONTRADO 18
#define PESQUISA_DEFEITO_NAO_ENCONTRADO 19
///Definições de Retorno Cadastrar, Voluntariar e Votar Defeito
#define DEFEITO_JA_ENCERRADO 20
#define DEFEITO_JA_EM_REPARO 21
#define DEFEITO_VOTADO 22
#define DEFEITO_VOLUNTARIO_ACEITO 23
#define DEFEITO_DESENVOLVEDOR_JA_VOLUNTARIO 24
#define DEFEITO_CADASTRADO 25
#define DEFEITO_JA_CADASTRADO 26
///Definições de Alocar/Remover Desenvolvedor
#define DESENVOLVEDOR_ALOCADO_DEFEITO 27
#define DESENVOLVEDOR_REMOVIDO_DEFEITO 28
#define DESENVOLVEDOR_NAO_PODE_SER_ALOCADO 29
#define DEFEITO_NAO_POSSUI_DESENVOLVEDOR_ALOCADO 30

/**
 * Definições dos Codigos de Categoria de Desenvolvedor
 */
#define DESENVOLVEDOR_COMUM 100
#define DESENVOLVEDOR_LIDER_PRODUTO 101
#define DESENVOLVEDOR_LIDER_PROJETO 102

/**
* Constantes de tamanho de vetores
*/
#define VET_NOME 16
#define VET_SENHA 6
#define VET_CODIGO 5
#define VET_DESCRICAO 31
#define VET_EMAIL 21
#define VET_VERSAO 6

#endif // TABELADECODIGOS_H_INCLUDED
