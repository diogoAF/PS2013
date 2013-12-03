#ifndef PAUXILIAR_H_INCLUDED
#define PAUXILIAR_H_INCLUDED

#ifdef PAUXILIAR_SERV
#define EXT extern
#else EXT
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*! \file PAuxiliar.h
    \brief Servicos auxiliares aos modulos de persistencia

    Algumas operacoes necessarias sao comuns aos modulos de persistencia. Este modulo oferece servicos
    como ajuste de string.
*/


/** \brief Função auxiliar ao cadastro responsável por preencher com " " as strings dos dados de cadastro.
 *
 * \param String a ser preenchida.
 * \param Tamanho preestabelecido da string.
 * \return Código de Sucesso/Erro
 *
 */
EXT int ajustaString(char*, int);


#endif // PAUXILIAR_H_INCLUDED
