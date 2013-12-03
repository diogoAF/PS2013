#ifndef SPPRODUTO_H_INCLUDED
#define SPPRODUTO_H_INCLUDED

#ifdef PPRODUTO_SERV
#define EXT
#else
#define EXT extern
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PAuxiliar.h"
#include "TabelaDeCodigos.h"
#include "PacoteDeStructs.h"

/*! \file SPProduto.h
    \brief Servicos de Persistencia de Produtos

    As funcoes do presente arquivo dizem respeito as operacoes referentes ao armazenamento
    de registros produtos em arquivo e suas operacoes basicas:
    -Insercao
    -Eliminacao
    -Busca
    -Edicao
*/

/** \fn int inserirProduto(FILE *arquivo, TipoProduto *produto)
 * \brief Funcao de cadastro de produto
 *
 * \param arquivo que guarda os registros dos produtos.
 * \param produto estrutura de dados que armazena as informacoes do produto em memoria.
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int inserirProduto(FILE *, TipoProduto *);

/** \fn int deletarProduto(FILE *arquivo, TipoProduto *produto, long int posicao)
 * \brief Deletar um registro de produto.
 *
 * \param arquivo que armazena as informacoes dos produtos.
 * \param produto estrutura de dados que armazena as informacoes do produto em memoria.//Pode ser trocada pelo email
 * \param posicao do registro no arquivo.
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int deletarProduto(FILE *, TipoProduto *, long int);

/** \fn int existeProduto(FILE *arquivo, char *codigo, long int *posicao)
 * \brief Busca um registro no arquivo
 *
 * \param arquivo que armazena as informacoes dos produtos.
 * \param codigo chave primaria de busca no arquivo
 * \param endereco a um long int que podera receber a posicao do registro no arquivo, caso encontrado
 * \return Codigo de Sucesso/Fracasso
 *
 */
EXT int existeProduto(FILE *, char *, long int *);


/** \fn int editarProduto(FILE *arquivo, TipoProduto *produto, long int posicao)
 * \brief Edita todos os campos do registro de um produto
 *
 * \param arquivo que armazena as informacoes dos produtos.
 * \param estrutura de dados que armazena as informacoes do produto em memoria.
 * \param posicao do registro no arquivo
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int editarProduto(FILE *, TipoProduto *, long int);

/** \fn int editarProdutoCodigo(FILE *arquivo, char *codigo, long int posicao)
 * \brief Edita campo codigo do registro de um produto
 *
 * \param arquivo que armazena as informacoes dos produtos.
 * \param codigo novo
 * \param posicao do registro no arquivo
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int editarProdutoCodigo(FILE *, char *, long int);

/** \fn int editarProdutoNome(FILE *arquivo, char *nome, long int posicao)
 * \brief Edita campo codigo do registro de um produto
 *
 * \param arquivo que armazena as informacoes dos produtos.
 * \param nome novo
 * \param posicao do registro no arquivo
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int editarProdutoNome(FILE *, char *, long int);

/** \fn int editarProdutoVersao(FILE *arquivo , char *versao, long int posicao)
 * \brief Edita campo codigo do registro de um produto
 *
 * \param arquivo que armazena as informacoes dos produtos.
 * \param versao nova
 * \param posicao do registro no arquivo
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int editarProdutoVersao(FILE *, char *, long int);

/** \fn int editarProdutoLider(FILE *arquivo, char *email, long int posicao)
 * \brief Edita campo codigo do registro de um produto
 *
 * \param arquivo que armazena as informacoes dos produtos.
 * \param email do novo lider
 * \param posicao do registro no arquivo.
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int editarProdutoLider(FILE *, char *, long int);


#endif // SPPRODUTO_H_INCLUDED
