#ifndef SPDEFEITO_H_INCLUDED
#define SPDEFEITO_H_INCLUDED

#ifdef SPDEFEITO_SERV
#define EXT
#else
#define EXT extern
#endif


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PacoteDeStructs.h"
#include "PAuxiliar.h"


/*! \file SPDefeito.h
    \brief Servicos de Persistencia de Defeitos

    As funcoes do presente arquivo dizem respeito as operacoes referentes ao armazenamento
    de registros defeitos em arquivo e suas operacoes basicas:
    -Insercao
    -Eliminacao
    -Busca
    -Edicao
*/

/** \fn int inserirDefeito(FILE *arquivo, TipoDefeito *defeito)
 * \brief Funcao cadastra em arquivo um defeito
 *
 * \param arquivo que guarda os registros dos defeitos.
 * \param defeito estrutura de dados que armazena as informacoes do defeito em memoria.
 * \return Codigo de Sucesso/Erro.
 *
 */
EXT int inserirDefeito(FILE *, TipoDefeito *);

/** \fn int deletarDefeito(FILE *arquivo, TipoDefeito *defeito, long int posicao)
 * \brief Funcao responsavel por deletar um registro de defeito.
 *
 * \param arquivo que armazena as informacoes dos defeitos.
 * \param defeito estrutura de dados que armazena as informacoes do defeito em memoria.//Pode ser trocada pelo codigo
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int deletarDefeito(FILE *, TipoDefeito *, long int);

/** \fn existeDefeito(FILE *arquivo, char *codigo, long int *posicao)
 * \brief Busca um registro no arquivo
 *
 * \param arquivo que armazena as informacoes dos defeitos.
 * \param chave primaria de busca no arquivo
 * \param posicao endereco a um long int que podera receber a posicao do registro no arquivo, caso encontrado
 * \return Codigo de Sucesso/Fracasso
 *
 */
EXT int existeDefeito(FILE *, char *, long int *);


/** \fn int editarDefeito(FILE *arquivo, TipoDefeito *defeito, long int posicao)
 * \brief Edita todos os campos do registro de um defeito
 *
 * \param arquivo que armazena as informacoes dos defeitos.
 * \param defeito estrutura de dados que armazena as informacoes do defeito em memoria.
 * \param posicao do registro no arquivo
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int editarDefeito(FILE *, TipoDefeito *, long int);

/** \fn int editarDefeitoCodigo(FILE *arquivo, char *codigo, long int posicao)
 * \brief Edita campo codigo do registro de um defeito
 *
 * \param arquivo que armazena as informacoes dos defeitos.
 * \param codigo novo
 * \param posicao do registro no arquivo
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int editarDefeitoCodigo(FILE *, char *, long int);


/** \fn int editarDefeitoVoto(FILE *arquivo, long int posicao)
 * \brief Edita campo votos do registro de um defeito
 *
 * \param arquivo que armazena as informacoes dos defeitos.
 * \param posicao do registro no arquivo
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int editarDefeitoVoto(FILE *, long int);


#endif // SPDEFEITO_H_INCLUDED
