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
 * \param Estrutura de dados que armazena as informa��es do produto em mem�ria.
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int inserirProduto(FILE *, TipoProduto *);


/** \brief Fun��o respons�vel por deletar um registro de produto.
 *
 * \param Ponteiro ao arquivo que armazena as informa��es dos produtos.
 * \param Estrutura de dados que armazena as informa��es do produto em mem�ria.//Pode ser trocada pelo email
 * \param Long int com a posi��o do registro no arquivo.
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int deletarProduto(FILE *, TipoProduto *, long int);


/** \brief Busca um registro no arquivo
 *
 * \param Ponteiro ao arquivo que armazena as informa��es dos produtos.
 * \param String da chave prim�ria de busca no arquivo
 * \param Endere�o a um long int que poder� receber a posi��o do registro no arquivo, caso encontrado
 * \return C�digo de Sucesso/Fracasso
 *
 */
EXT int existeProduto(FILE *, char *, long int *);



/** \brief Edita todos os campos do registro de um produto
 *
 * \param Ponteiro ao arquivo que armazena as informa��es dos produtos.
 * \param Estrutura de dados que armazena as informa��es do produto em mem�ria.
 * \param Long int com a posi��o do registro no arquivo
 * \return C�digo de Sucesso/Erro
 *
 */
EXT int editarProduto(FILE *, TipoProduto *, long int);


/** \brief Edita campo c�digo do registro de um produto
 *
 * \param Ponteiro ao arquivo que armazena as informa��es dos produtos.
 * \param String que armazena o novo c�digo
 * \param Long int com a posi��o do registro no arquivo
 * \return C�digo de Sucesso/Erro
 *
 */
EXT int editarProdutoCodigo(FILE *, char *, long int);


/** \brief Edita campo c�digo do registro de um produto
 *
 * \param Ponteiro ao arquivo que armazena as informa��es dos produtos.
 * \param String que armazena o novo nome
 * \param Long int com a posi��o do registro no arquivo
 * \return C�digo de Sucesso/Erro
 *
 */
EXT int editarProdutoNome(FILE *, char *, long int);


/** \brief Edita campo c�digo do registro de um produto
 *
 * \param Ponteiro ao arquivo que armazena as informa��es dos produtos.
 * \param String que armazena o nova vers�o
 * \param Long int com a posi��o do registro no arquivo
 * \return C�digo de Sucesso/Erro
 *
 */
EXT int editarProdutoVersao(FILE *, char *, long int);


/** \brief Edita campo c�digo do registro de um produto
 *
 * \param Ponteiro ao arquivo que armazena as informa��es dos produtos.
 * \param String que armazena o email do novo l�der.
 * \param Long int com a posi��o do registro no arquivo.
 * \return C�digo de Sucesso/Erro
 *
 */
EXT int editarProdutoLider(FILE *, char *, long int);


#endif // SPPRODUTO_H_INCLUDED
