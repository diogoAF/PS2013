#ifndef SPDEFEITO_H_INCLUDED
#define SPDEFEITO_H_INCLUDED

#ifdef SPDEFEITO_SERV
#define EXT extern
#else EXT
#endif
#include "PacoteDeStructs.h"

/** \brief Função de cadastro de defeito
 *
 * \param Ponteiro ao arquivo que guarda os registros dos defeitos.
 * \param Estrutura de dados que armazena as informações do defeito em memória.
 * \return Codigo de Sucesso/Erro.
 *
 */
EXT int inserirDefeito(FILE *, TipoDefeito *);


/** \brief Função responsável por deletar um registro de defeito.
 *
 * \param Ponteiro ao arquivo que armazena as informações dos defeitos.
 * \param Estrutura de dados que armazena as informações do defeito em memória.//Pode ser trocada pelo codigo
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int deletarDefeito(FILE * arquivo, TipoDefeito * registro);

/** \brief Busca um registro no arquivo
 *
 * \param Ponteiro ao arquivo que armazena as informações dos defeitos.
 * \param String da chave primária de busca no arquivo
 * \param Endereço a um long int que poderá receber a posição do registro no arquivo, caso encontrado
 * \return Código de Sucesso/Fracasso
 *
 */
EXT int existeDefeito(FILE *arquivo, char *chavePrimaria, long int *posicao);



/** \brief Edita todos os campos do registro de um defeito
 *
 * \param Ponteiro ao arquivo que armazena as informações dos defeitos.
 * \param Estrutura de dados que armazena as informações do defeito em memória.
 * \param Long int com a posição do registro no arquivo
 * \return Código de Sucesso/Erro
 *
 */
EXT int editarDefeito(FILE *arquivo, TipoDefeito *defeito, long int posicao);


/** \brief Edita campo código do registro de um defeito
 *
 * \param Ponteiro ao arquivo que armazena as informações dos defeitos.
 * \param String que armazena o novo codigo
 * \param Long int com a posição do registro no arquivo
 * \return Código de Sucesso/Erro
 *
 */
EXT int editarDefeitoCodigo(FILE *arquivo, char *codigo, long int posicao);



/** \brief Edita campo votos do registro de um defeito
 *
 * \param Ponteiro ao arquivo que armazena as informações dos defeitos.
 * \param Long int com a posição do registro no arquivo
 * \return Código de Sucesso/Erro
 *
 */
EXT int editarDefeitoVoto(FILE *arquivo, long int posicao);


#endif // SPDEFEITO_H_INCLUDED
