#ifndef SPDEFEITO_H_INCLUDED
#define SPDEFEITO_H_INCLUDED

#ifdef SPDEFEITO_SERV
#define EXT extern
#else EXT
#endif
#include "PacoteDeStructs.h"

/** \brief Fun��o de cadastro de defeito
 *
 * \param Ponteiro ao arquivo que guarda os registros dos defeitos.
 * \param Estrutura de dados que armazena as informa��es do defeito em mem�ria.
 * \return Codigo de Sucesso/Erro.
 *
 */
EXT int inserirDefeito(FILE *, TipoDefeito *);


/** \brief Fun��o respons�vel por deletar um registro de defeito.
 *
 * \param Ponteiro ao arquivo que armazena as informa��es dos defeitos.
 * \param Estrutura de dados que armazena as informa��es do defeito em mem�ria.//Pode ser trocada pelo codigo
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int deletarDefeito(FILE * arquivo, TipoDefeito * registro);

/** \brief Busca um registro no arquivo
 *
 * \param Ponteiro ao arquivo que armazena as informa��es dos defeitos.
 * \param String da chave prim�ria de busca no arquivo
 * \param Endere�o a um long int que poder� receber a posi��o do registro no arquivo, caso encontrado
 * \return C�digo de Sucesso/Fracasso
 *
 */
EXT int existeDefeito(FILE *arquivo, char *chavePrimaria, long int *posicao);



/** \brief Edita todos os campos do registro de um defeito
 *
 * \param Ponteiro ao arquivo que armazena as informa��es dos defeitos.
 * \param Estrutura de dados que armazena as informa��es do defeito em mem�ria.
 * \param Long int com a posi��o do registro no arquivo
 * \return C�digo de Sucesso/Erro
 *
 */
EXT int editarDefeito(FILE *arquivo, TipoDefeito *defeito, long int posicao);


/** \brief Edita campo c�digo do registro de um defeito
 *
 * \param Ponteiro ao arquivo que armazena as informa��es dos defeitos.
 * \param String que armazena o novo codigo
 * \param Long int com a posi��o do registro no arquivo
 * \return C�digo de Sucesso/Erro
 *
 */
EXT int editarDefeitoCodigo(FILE *arquivo, char *codigo, long int posicao);



/** \brief Edita campo votos do registro de um defeito
 *
 * \param Ponteiro ao arquivo que armazena as informa��es dos defeitos.
 * \param Long int com a posi��o do registro no arquivo
 * \return C�digo de Sucesso/Erro
 *
 */
EXT int editarDefeitoVoto(FILE *arquivo, long int posicao);


#endif // SPDEFEITO_H_INCLUDED
