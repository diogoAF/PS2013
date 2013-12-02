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


/** \brief Funcao de cadastro de usuário
 *
 * \param Ponteiro ao arquivo que guarda os registros dos usuários.
 * \param Estrutura de dados que armazena as informações do usuário em memória.
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int cadastrarUsuario(FILE *,TipoDesenvolvedor *);



/** \brief Função responsável por deletar um registro de usuário.
 *
 * \param Ponteiro ao arquivo que armazena as informações dos usuários.
 * \param Estrutura de dados que armazena as informações do usuário em memória.//Pode ser trocada pelo email
 * \param Long int com a posição do registro no arquivo.
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int deletarUsuario(FILE*, TipoDesenvolvedor*, long int);



/** \brief Busca um registro no arquivo
 *
 * \param Ponteiro ao arquivo que armazena as informações dos usuários.
 * \param String da chave primária de busca no arquivo
 * \param Endereço a um long int que poderá receber a posição do registro no arquivo, caso encontrado
 * \return Código de Sucesso/Fracasso
 *
 */
EXT int existeUsuario(FILE*, char*, long int*);



/** \brief Edita todos os campos do registro de um usuario
 *
 * \param Ponteiro ao arquivo que armazena as informações dos usuários.
 * \param Estrutura de dados que armazena as informações do usuário em memória.
 * \param Long int com a posição do registro no arquivo
 * \return Código de Sucesso/Erro
 *
 */
EXT int editarUsuario(FILE*, TipoDesenvolvedor*, long int);



/** \brief Edita campo email do registro de um usuario
 *
 * \param Ponteiro ao arquivo que armazena as informações dos usuários.
 * \param String que armazena o novo email
 * \param Long int com a posição do registro no arquivo
 * \return Código de Sucesso/Erro
 *
 */
EXT int editarUsuarioEmail(FILE*, char *, long int);



/** \brief Edita campo nome do registro de um usuario
 *
 * \param Ponteiro ao arquivo que armazena as informações dos usuários.
 * \param String que armazena o novo nome
 * \param Long int com a posição do registro no arquivo
 * \return Código de Sucesso/Erro
 *
 */
 EXT int editarUsuarioNome(FILE*, char*, long int);



/** \brief Edita campo senha do registro de um usuario
 *
 * \param Ponteiro ao arquivo que armazena as informações dos usuários.
 * \param String que armazena o nova senha
 * \param Long int com a posição do registro no arquivo
 * \return Código de Sucesso/Erro
 *
 */
 EXT int editarUsuarioSenha(FILE*, char*, long int);



/** \brief Edita campo categoria do registro de um usuario
 *
 * \param Ponteiro ao arquivo que armazena as informações dos usuários.
 * \param int que armazena o nova categoria
 * \param Long int com a posição do registro no arquivo
 * \return Código de Sucesso/Erro
 *
 */
 EXT int editarUsuarioCategoria(FILE*, int, long int);

#endif // SPDESENVOLVEDOR_H_INCLUDED
