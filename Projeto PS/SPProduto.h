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


/** \brief Funcao de cadastro de produto
 *
 * \param Ponteiro ao arquivo que guarda os registros dos produtos.
 * \param Estrutura de dados que armazena as informações do produto em memória.
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int inserirProduto(FILE *, TipoProduto *);


/** \brief Função responsável por deletar um registro de produto.
 *
 * \param Ponteiro ao arquivo que armazena as informações dos produtos.
 * \param Estrutura de dados que armazena as informações do produto em memória.//Pode ser trocada pelo email
 * \param Long int com a posição do registro no arquivo.
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int deletarProduto(FILE *, TipoProduto *, long int);


/** \brief Busca um registro no arquivo
 *
 * \param Ponteiro ao arquivo que armazena as informações dos produtos.
 * \param String da chave primária de busca no arquivo
 * \param Endereço a um long int que poderá receber a posição do registro no arquivo, caso encontrado
 * \return Código de Sucesso/Fracasso
 *
 */
EXT int existeProduto(FILE *, char *, long int *);



/** \brief Edita todos os campos do registro de um produto
 *
 * \param Ponteiro ao arquivo que armazena as informações dos produtos.
 * \param Estrutura de dados que armazena as informações do produto em memória.
 * \param Long int com a posição do registro no arquivo
 * \return Código de Sucesso/Erro
 *
 */
EXT int editarProduto(FILE *, TipoProduto *, long int);


/** \brief Edita campo código do registro de um produto
 *
 * \param Ponteiro ao arquivo que armazena as informações dos produtos.
 * \param String que armazena o novo código
 * \param Long int com a posição do registro no arquivo
 * \return Código de Sucesso/Erro
 *
 */
EXT int editarProdutoCodigo(FILE *, char *, long int);


/** \brief Edita campo código do registro de um produto
 *
 * \param Ponteiro ao arquivo que armazena as informações dos produtos.
 * \param String que armazena o novo nome
 * \param Long int com a posição do registro no arquivo
 * \return Código de Sucesso/Erro
 *
 */
EXT int editarProdutoNome(FILE *, char *, long int);


/** \brief Edita campo código do registro de um produto
 *
 * \param Ponteiro ao arquivo que armazena as informações dos produtos.
 * \param String que armazena o nova versão
 * \param Long int com a posição do registro no arquivo
 * \return Código de Sucesso/Erro
 *
 */
EXT int editarProdutoVersao(FILE *, char *, long int);


/** \brief Edita campo código do registro de um produto
 *
 * \param Ponteiro ao arquivo que armazena as informações dos produtos.
 * \param String que armazena o email do novo líder.
 * \param Long int com a posição do registro no arquivo.
 * \return Código de Sucesso/Erro
 *
 */
EXT int editarProdutoLider(FILE *, char *, long int);


#endif // SPPRODUTO_H_INCLUDED
