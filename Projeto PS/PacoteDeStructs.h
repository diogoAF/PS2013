#ifndef PACOTEDESTRUCTS_H_INCLUDED
#define PACOTEDESTRUCTS_H_INCLUDED

#include "TabelaDeCodigos.h"

/*! \file TabelaDeStructs.h
    \brief Contem as definicoes das structs utilizadas

    As diferentes structs utilizadas no programa servem para armazenar
    -Data
    -Desenvolvedores
    -Defeitos
    -Produtos
    -Lista de Desenvolvedores
    -Lista de Defeitos
    -Lista de produtos
*/

/** \struct
 *  \brief
 *
 * \param
 * \param
 * \return
 *
 */
typedef struct{
    int dia,
        mes,
        ano;
}TipoData;


/** \struct
 *  \brief
 *
 * \param
 * \param
 * \return
 *
 */
typedef struct{
    char nome[VET_NOME],
    senha[VET_SENHA],
    email[VET_EMAIL];
    int categoria,defeito1,defeito2;
}TipoDesenvolvedor;


/** \struct
 *  \brief
 *
 * \param
 * \param
 * \return
 *
 */
typedef struct{
    char nome[VET_NOME],
    codigo[VET_CODIGO],
    versao[VET_VERSAO],
    emailLider[VET_EMAIL];
}TipoProduto;


/** \struct
 *  \brief
 *
 * \param
 * \param
 * \return
 *
 */
typedef struct{
    char codigo[VET_CODIGO],
    descricao[VET_DESCRICAO],
    codigoProduto[VET_CODIGO];
    int estado, votos;
    TipoData dataAbertura, dataEncerramento;
}TipoDefeito;


/** \struct
 *  \brief
 *
 * \param
 * \param
 * \return
 *
 */
typedef struct listaDesenvolvedor{
    TipoDesenvolvedor *desenvolvedor;
    struct listaDesenvolvedor *proximo;
    struct listaDesenvolvedor *anterior;
}ListDesenvolvedor;


/** \struct
 *  \brief
 *
 * \param
 * \param
 * \return
 *
 */
typedef struct listaDefeito{
    TipoProduto *produto;
    struct listaDesenvolvedor *proximo;
    struct listaDesenvolvedor *anterior;
}ListProduto;


/** \struct
 *  \brief
 *
 * \param
 * \param
 * \return
 *
 */
typedef struct listaDefeito{
    TipoDefeito *defeito;
    struct listaDesenvolvedor *proximo;
    struct listaDesenvolvedor *anterior;
}ListDefeito;

#endif // PACOTEDESTRUCTS_H_INCLUDED
