#ifndef VALIDACAOENTRADA_H_INCLUDED
#define VALIDACAOENTRADA_H_INCLUDED
#ifdef VALIDACAOENTRADA_SERV
#define EXT
#else
#define EXT extern
#endif

#include "PacoteDeStructs.h"
#include "TabelaDeCodigos.h"

/** \brief fun��o para validar o nome do desenvolvedor.
 *
 * \param nome char* o nome do desenvolvedor.
 * \return int c�digo de retorno.
 *
 */
EXT int validaNome(char *);

/** \brief Fun��o para validar a string "senha". Verifica se est� dentro dos padr�es.
 *
 * \param senha char* a senha que ser� verificada.
 * \return int c�digo de retorno.
 *
 */
EXT int validaSenha(char *);

/** \brief Func�o para validar se a string "codigo" est� dentro dos padr�es pr�-definidos.
 *
 * \param codigo char* String a ser verificada.
 * \return int c�digo de retorno.
 *
 */
EXT int validaCodigo(char *);

/** \brief Valida a string "descricao" de acordo com as metricas propostas.
 *
 * \param descricao char* String a ser validade.
 * \return int c�digo de retorno.
 *
 */
EXT int validaDescricao(char *);

/** \brief Valida a struct TipoData "data", ou seja, se est� no padr�o DD-MM-AAAA.
 *
 * \param data TipoData Data a ser validada.
 * \return int c�digo de retorno.
 *
 */
EXT int validaData(TipoData);

/** \brief Valida se o voto � v�lido.
 *
 * \param voto int Voto a ser validado.
 * \return int c�digo de retorno.
 *
 */
EXT int validaVoto(int);

/** \brief Valida se o E-mail informado � v�lido.
 *
 * \param email char* E-mail a ser validado.
 * \return int C�digo de retorno.
 *
 */
EXT int validaEmail(char *);

/** \brief Valida a Vers�o a vers�o do produto.
 *
 * \param versao char* Entrrada a ser validada.
 * \return int c�digo de retorno.
 *
 */
EXT int validaVersao(char *);



#endif // VALIDACAOENTRADA_H_INCLUDED
