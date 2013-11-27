#ifndef SPDESENVOLVEDOR_H_INCLUDED
#define SPDESENVOLVEDOR_H_INCLUDED

#ifdef SPDESENVOLVEDOR_SERV
#define EXT
#else
#define EXT extern
#endif

#include "PacoteDeStructs.h"


/** \brief Funcao de cadastro de usu�rio
 *
 * \param Ponteiro ao arquivo que guarda os registros dos usu�rios.
 * \param Estrutura de dados que armazena as informa��es do usu�rio em mem�ria.
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int cadastrar(FILE *, TipoDesenvolvedor *);



/** \brief Fun��o respons�vel por deletar um registro de usu�rio.
 *
 * \param Ponteiro ao arquivo que armazena as informa��es dos usu�rios.
 * \param Estrutura de dados que armazena as informa��es do usu�rio em mem�ria.//Pode ser trocada pelo email
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int deletar(FILE*, TipoDesenvolvedor*);



/** \brief Busca um registro no arquivo
 *
 * \param Ponteiro ao arquivo que armazena as informa��es dos usu�rios.
 * \param String da chave prim�ria de busca no arquivo
 * \param Endere�o a um long int que poder� receber a posi��o do registro no arquivo, caso encontrado
 * \return C�digo de Sucesso/Fracasso
 *
 */
EXT int existeDesenvolvedor(FILE*, char*, long int*);


/** \brief Fun��o auxiliar ao cadastro respons�vel por preencher com " " as strings dos dados de cadastro.
 *
 * \param String a ser preenchida.
 * \param Tamanho preestabelecido da string.
 * \return C�digo de Sucesso/Erro
 *
 */
EXT int ajustaString(char*, int);

#endif // SPDESENVOLVEDOR_H_INCLUDED
