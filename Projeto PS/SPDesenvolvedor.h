#ifndef SPDESENVOLVEDOR_H_INCLUDED
#define SPDESENVOLVEDOR_H_INCLUDED

#ifdef SPDESENVOLVEDOR_SERV
#define EXT
#else
#define EXT extern
#endif

#include "PacoteDeStructs.h"


/** \brief Funcao de cadastro de usuário
 *
 * \param Ponteiro ao arquivo que guarda os registros dos usuários.
 * \param Estrutura de dados que armazena as informações do usuário em memória.
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int cadastrar(FILE *, TipoDesenvolvedor *);



/** \brief Função responsável por deletar um registro de usuário.
 *
 * \param Ponteiro ao arquivo que armazena as informações dos usuários.
 * \param Estrutura de dados que armazena as informações do usuário em memória.//Pode ser trocada pelo email
 * \return Codigo de Sucesso/Erro
 *
 */
EXT int deletar(FILE*, TipoDesenvolvedor*);



/** \brief Busca um registro no arquivo
 *
 * \param Ponteiro ao arquivo que armazena as informações dos usuários.
 * \param String da chave primária de busca no arquivo
 * \param Endereço a um long int que poderá receber a posição do registro no arquivo, caso encontrado
 * \return Código de Sucesso/Fracasso
 *
 */
EXT int existeDesenvolvedor(FILE*, char*, long int*);


/** \brief Função auxiliar ao cadastro responsável por preencher com " " as strings dos dados de cadastro.
 *
 * \param String a ser preenchida.
 * \param Tamanho preestabelecido da string.
 * \return Código de Sucesso/Erro
 *
 */
EXT int ajustaString(char*, int);

#endif // SPDESENVOLVEDOR_H_INCLUDED
