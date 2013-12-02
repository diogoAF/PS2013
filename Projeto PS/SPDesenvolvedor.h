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


/** \brief Funcao de cadastro de usu�rio
 *
 * \param Ponteiro ao arquivo que guarda os registros dos usu�rios.
 * \param Estrutura de dados que armazena as informa��es do usu�rio em mem�ria.
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int cadastrarUsuario(FILE *,TipoDesenvolvedor *);



/** \brief Fun��o respons�vel por deletar um registro de usu�rio.
 *
 * \param Ponteiro ao arquivo que armazena as informa��es dos usu�rios.
 * \param Estrutura de dados que armazena as informa��es do usu�rio em mem�ria.//Pode ser trocada pelo email
 * \param Long int com a posi��o do registro no arquivo.
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int deletarUsuario(FILE*, TipoDesenvolvedor*, long int);



/** \brief Busca um registro no arquivo
 *
 * \param Ponteiro ao arquivo que armazena as informa��es dos usu�rios.
 * \param String da chave prim�ria de busca no arquivo
 * \param Endere�o a um long int que poder� receber a posi��o do registro no arquivo, caso encontrado
 * \return C�digo de Sucesso/Fracasso
 *
 */
EXT int existeUsuario(FILE*, char*, long int*);



/** \brief Edita todos os campos do registro de um usuario
 *
 * \param Ponteiro ao arquivo que armazena as informa��es dos usu�rios.
 * \param Estrutura de dados que armazena as informa��es do usu�rio em mem�ria.
 * \param Long int com a posi��o do registro no arquivo
 * \return C�digo de Sucesso/Erro
 *
 */
EXT int editarUsuario(FILE*, TipoDesenvolvedor*, long int);



/** \brief Edita campo email do registro de um usuario
 *
 * \param Ponteiro ao arquivo que armazena as informa��es dos usu�rios.
 * \param String que armazena o novo email
 * \param Long int com a posi��o do registro no arquivo
 * \return C�digo de Sucesso/Erro
 *
 */
EXT int editarUsuarioEmail(FILE*, char *, long int);



/** \brief Edita campo nome do registro de um usuario
 *
 * \param Ponteiro ao arquivo que armazena as informa��es dos usu�rios.
 * \param String que armazena o novo nome
 * \param Long int com a posi��o do registro no arquivo
 * \return C�digo de Sucesso/Erro
 *
 */
 EXT int editarUsuarioNome(FILE*, char*, long int);



/** \brief Edita campo senha do registro de um usuario
 *
 * \param Ponteiro ao arquivo que armazena as informa��es dos usu�rios.
 * \param String que armazena o nova senha
 * \param Long int com a posi��o do registro no arquivo
 * \return C�digo de Sucesso/Erro
 *
 */
 EXT int editarUsuarioSenha(FILE*, char*, long int);



/** \brief Edita campo categoria do registro de um usuario
 *
 * \param Ponteiro ao arquivo que armazena as informa��es dos usu�rios.
 * \param int que armazena o nova categoria
 * \param Long int com a posi��o do registro no arquivo
 * \return C�digo de Sucesso/Erro
 *
 */
 EXT int editarUsuarioCategoria(FILE*, int, long int);

#endif // SPDESENVOLVEDOR_H_INCLUDED
