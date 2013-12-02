#ifndef PAUXILIAR_H_INCLUDED
#define PAUXILIAR_H_INCLUDED

#ifdef PAUXILIAR_SERV
#define EXT extern
#else EXT
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/** \brief Fun��o auxiliar ao cadastro respons�vel por preencher com " " as strings dos dados de cadastro.
 *
 * \param String a ser preenchida.
 * \param Tamanho preestabelecido da string.
 * \return C�digo de Sucesso/Erro
 *
 */
EXT int ajustaString(char*, int);


#endif // PAUXILIAR_H_INCLUDED
