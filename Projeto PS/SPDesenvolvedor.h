#ifndef SPDESENVOLVEDOR_H_INCLUDED
#define SPDESENVOLVEDOR_H_INCLUDED

#ifdef SPDESENVOLVEDOR_SERV
#define EXT
#else
#define EXT extern
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PacoteDeStructs.h"
#include "PAuxiliar.h"

/*! \file SPDesenvolvedor.h
    \brief Servicos de Persistencia de Desenvolvedores

    As funcoes do presente arquivo dizem respeito as operacoes referentes ao armazenamento
    de registros desenvolvedores em arquivo e suas operacoes basicas:
    -Insercao
    -Eliminacao
    -Busca
    -Edicao
*/

/** \fn int cadastrarUsuario(FILE *arquivo, TipoDesenvolvedor *usuario)
 * \brief Cadastra registro de usuario.
 *
 * \param arquivo que armazena as informacoes dos usuarios.
 * \param usuario estrutura de dados que armazena as informacoes do usuario em memoria.//Pode ser trocada pelo email
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int cadastrarUsuario(FILE*, TipoDesenvolvedor*);


/** \fn int deletarUsuario(FILE *arquivo, TipoDesenvolvedor *usuario, long int posicao)
 * \brief Deleta registro de usuario.
 *
 * \param arquivo que armazena as informacoes dos usuarios.
 * \param usuario estrutura de dados que armazena as informacoes do usuario em memoria.//Pode ser trocada pelo email
 * \param posicao do registro no arquivo.
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int deletarUsuario(FILE*, TipoDesenvolvedor*, long int);


/** \fn int existeUsuario(FILE *arquivo, char *email, long int *posicao)
 * \brief Busca um registro no arquivo
 *
 * \param arquivo que armazena as informacoes dos usuarios.
 * \param email chave primaria de busca no arquivo
 * \param posicao endereco a um long int que podera receber a posicao do registro no arquivo, caso encontrado
 * \return Codigo de Sucesso/Fracasso
 *
 */
EXT int existeUsuario(FILE*, char*, long int*);


/** \fn int editarUsuario(FILE *arquivo, TipoDesenvolvedor *usuario, long int posicao)
 * \brief Edita todos os campos do registro de um usuario
 *
 * \param arquivo que armazena as informacoes dos usuarios.
 * \param usuario estrutura de dados que armazena as informacoes do usuario em memoria.
 * \param posicao do registro no arquivo
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int editarUsuario(FILE*, TipoDesenvolvedor*, long int);


/** \fn int editarUsuarioEmail(FILE *arquivo, char *email, long int posicao)
 * \brief Edita campo email do registro de um usuario
 *
 * \param arquivo que armazena as informacoes dos usuarios.
 * \param email novo
 * \param posicao do registro no arquivo
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int editarUsuarioEmail(FILE*, char *, long int);


/** \fn editarUsuarioNome(FILE *arquivo, char *nome, long int posicao)
/** \brief Edita campo nome do registro de um usuario
 *
 * \param arquivo que armazena as informacoes dos usuarios.
 * \param nome novo
 * \param posicao do registro no arquivo
 * \return Codigo de Sucesso/Erro
 *
 */
 EXT int editarUsuarioNome(FILE*, char*, long int);


/** \fn int editarUsuarioSenha(FILE *arquivo, char *senha, long int posicao)
/** \brief Edita campo senha do registro de um usuario
 *
 * \param arquivo que armazena as informacoes dos usuarios.
 * \param senha nova
 * \param posicao do registro no arquivo
 * \return Codigo de Sucesso/Erro
 *
 */
 EXT int editarUsuarioSenha(FILE*, char*, long int);


/** \fn int editarUsuarioCategoria(FILE *arquivo, int categoria, long int posicao)
 * \brief Edita campo categoria do registro de um usuario
 *
 * \param arquivo que armazena as informacoes dos usuarios.
 * \param categoria nova
 * \param posicao do registro no arquivo
 * \return Codigo de Sucesso/Erro
 *
 */
 EXT int editarUsuarioCategoria(FILE*, int, long int);

#endif // SPDESENVOLVEDOR_H_INCLUDED
