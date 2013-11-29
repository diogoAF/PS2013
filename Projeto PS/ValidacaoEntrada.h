#ifndef VALIDACAOENTRADA_H_INCLUDED
#define VALIDACAOENTRADA_H_INCLUDED
#ifdef VALIDACAOENTRADA_SERV
#define EXT
#else
#define EXT extern
#endif

#include "PacoteDeStructs.h"
#include "TabelaDeCodigos.h"

/** \brief função para validar o nome do desenvolvedor.
 *
 * \param nome char* o nome do desenvolvedor.
 * \return int código de retorno.
 *
 */
EXT int validaNome(char *);

/** \brief Função para validar a string "senha". Verifica se está dentro dos padrões.
 *
 * \param senha char* a senha que será verificada.
 * \return int código de retorno.
 *
 */
EXT int validaSenha(char *);

/** \brief Funcão para validar se a string "codigo" está dentro dos padrões pré-definidos.
 *
 * \param codigo char* String a ser verificada.
 * \return int código de retorno.
 *
 */
EXT int validaCodigo(char *);

/** \brief Valida a string "descricao" de acordo com as metricas propostas.
 *
 * \param descricao char* String a ser validade.
 * \return int código de retorno.
 *
 */
EXT int validaDescricao(char *);

/** \brief Valida a struct TipoData "data", ou seja, se está no padrão DD-MM-AAAA.
 *
 * \param data TipoData Data a ser validada.
 * \return int código de retorno.
 *
 */
EXT int validaData(TipoData);

/** \brief Valida se o voto é válido.
 *
 * \param voto int Voto a ser validado.
 * \return int código de retorno.
 *
 */
EXT int validaVoto(int);

/** \brief Valida se o E-mail informado é válido.
 *
 * \param email char* E-mail a ser validado.
 * \return int Código de retorno.
 *
 */
EXT int validaEmail(char *);

/** \brief Valida a Versão a versão do produto.
 *
 * \param versao char* Entrrada a ser validada.
 * \return int código de retorno.
 *
 */
EXT int validaVersao(char *);



#endif // VALIDACAOENTRADA_H_INCLUDED
