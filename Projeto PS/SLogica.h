#ifndef SLOGICA_H_INCLUDED
#define SLOGICA_H_INCLUDED
#ifdef SLOGICA_SERV
#define EXT
#else
#define EXT extern
#endif

#include "PacoteDeStructs.h"
#include "TabelaDeCodigos.h"

/** \brief informa se o login está correto
 *
 * \param e-mail
 * \param senha
 * \return LOGIN_REALIZADO caso positivo, e LOGIN_USUARIO_NAO_CADASTRADO caso contrario
 *
 */
EXT int verificaLogin(TipoDesenvolvedor *);

/** \brief Função responsavel por realizar o cadastro de um desenvolvedor.
 *
 * \param  TipoDesenvolvedor* Struct contendo os dados do desenvolvedor que será cadastrado.
 * \return EXT int DESENVOLVEDOR_JA_CADASTRADO ou DESENVOLVEDOR_CADASTRO_REALIZADO
 *
 */
EXT int efetuaCadastroDesenvolvedor(TipoDesenvolvedor *);


/** \brief Realiza a alteracao de cadastrado do usuario do sistema.
 *
 * \param  TipoDesenvolvedor* Struct contendo os dados do perfil do usuario.
 * \return EXT int ERRO_INESPERADO ou DESENVOLVEDOR_CADASTRO_ATUALIZADO
 *
 */
EXT int efetuarAlterarCadastro(TipoDesenvolvedor *);


/** \brief Realiza o cancelamento da conta de desenvolvedores comuns e lideres de produto.
 *
 * \param  TipoDesenvolvedor* Conta as informações do desenvolvedor que será excluido.
 * \return EXT int DESENVOLVEDOR_CONTA_NAO_PODE_SER_CANCELADA ou DESENVOLVEDOR_CONTA_CANCELADA
 *
 */
EXT int efetuarCancelarConta(TipoDesenvolvedor *);


/** \brief Realiza a pesquisa de um desenvolvedor pelo nome.
 *
 * \param  TipoDesenvolvedor* Contem o nome do desenvolvedor que deve ser pesquisado.
 * \return EXT int PESQUISA_DESENVOLVEDOR_ENCONTRADO ou PESQUISA_DESENVOLVEDOR_NAO_ENCONTRADO
 *
 */
EXT int efetuarPesquisaDesenvolvedor(TipoDesenvolvedor *);


/** \brief Realiza a pesquisa de um produto através de seu nome.
 *
 * \param  TipoProduto* Nome do produto a ser pesquisado.
 * \return EXT int PESQUISA_PRODUTO_ENCONTRADO ou PESQUISA_PRODUTO_NAO_ENCONTRADO
 *
 */
EXT int efetuarPesquisaProduto(TipoProduto *);


/** \brief Realiza a pesquisa de um defeito pelo seu código.
 *
 * \param  TipoDefeito* Contem o codigo do defeito a ser pesquisado.
 * \return EXT int PESQUISA_DEFEITO_ENCONTRADO ou PESQUISA_DEFEITO_NAO_ENCONTRADO.
 *
 */
EXT int efetuarPesquisaDefeito(TipoDefeito *);


/** \brief Realiza a acao de um desenvolvedor se voluntariando para resolver algum defeito.
 *
 * \param  TipoDefeito* Defeito a ser voluntariado.
 * \return EXT int DEFEITO_VOLUNTARIO_ACEITO, DEFEITO_JA_ENCERRADO, DEFEITO_JA_EM_REPARO, DEFEITO_DESENVOLVEDOR_JA_VOLUNTARIO ou PESQUISA_DEFEITO_NAO_ENCONTRADO
 *
 */
EXT int efetuarVoluntariarDefeito(TipoDefeito *);

/** \brief Computa o voto de um desenvolvedor em um defeito.
 *
 * \param  char* Codigo do defeito.
 * \param int Voto propriamente dito.
 * \return EXT int DEFEITO_VOTADO, DEFEITO_JA_ENCERRADO, DEFEITO_JA_EM_REPARO ou PESQUISA_DEFEITO_NAO_ENCONTRADO.
 *
 */
EXT int efetuarVotarDefeito(char *, int);

/** \brief Realiza o cadastro d eum novo defeito.
 *
 * \param  TipoDefeito* Contem as informações do possível novo defeito.
 * \return EXT int DEFEITO_CADASTRADO ou DEFEITO_JA_CADASTRADO
 *
 */
EXT int efetuarCadastrarDefeito(TipoDefeito *);

/** \brief Realiza a alocacao de um desenvolvedor a um defeito. Apenas o lider de produto tem acesso.
 *
 * \param  char* Codigo do defeito.
 * \param  char* E-mail do desenvolvedor a ser alocado.
 * \return EXT int DESENVOLVEDOR_ALOCADO_DEFEITO, DESENVOLVEDOR_NAO_PODE_SER_ALOCADO, PESQUISA_DEFEITO_NAO_ENCONTRADO ou PESQUISA_DESENVOLVEDOR_NAO_ENCONTRADO
 *
 */
EXT int efetuarAlocarDesenvolvedorDefeito(char *, char *);

/** \brief Realiza a remocao de um desenvolvedor a um defeito. Apenas o lider de produto tem acesso.
 *
 * \param  char* Codigo do defeito.
 * \return EXT int DESENVOLVEDOR_REMOVIDO_DEFEITO, DEFEITO_NAO_POSSUI_DESENVOLVEDOR_ALOCADO, PESQUISA_DEFEITO_NAO_ENCONTRADO ou DEFEITO_JA_ENCERRADO.
 *
 */
EXT int efetuarRemoverDesenvolvedorDefeito(char *);

/** \brief Realiza o cancelamento de conta do Lider de Projeto.
 *
 * \param  TipoDesenvolvedor* contem os dados do lider de projeto.
 * \param  char* E-mail do novo lider de projeto.
 * \return EXT int PESQUISA_DESENVOLVEDOR_NAO_ENCONTRADO, DESENVOLVEDOR_CONTA_CANCELADA ou DESENVOLVEDOR_CONTA_NAO_PODE_SER_CANCELADA.
 *
 */
EXT int efetuarCancelarContaLiderProjeto(TipoDesenvolvedor *, char *);

/** \brief Realiza a alocacao de um lider a um produto.
 *
 * \param  char* Codigo do produto.
 * \param  char* Email do novo lider do produto.
 * \return EXT int PRODUTO_LIDER_ALOCADO, PRODUTO_DESENVOLVEDOR_NAO_PODE_SER_LIDER, PRODUTO_JA_TEM_LIDER, PESQUISA_PRODUTO_NAO_ENCONTRADO ou PESQUISA_DESENVOLVEDOR_NAO_ENCONTRADO
 *
 */
EXT int efetuarAlocarLiderProduto(char *, char *);

/** \brief Realiza a remocao do lider de um produto.
 *
 * \param  char* Codigo do produto.
 * \return EXT int PRODUTO_LIDER_REMOVIDO, PESQUISA_PRODUTO_NAO_ENCONTRADO ou PRODUTO_SEM_LIDER.
 *
 */
EXT int efetuarRemoverLiderProduto(char *);

/** \brief Realiza a remocao de um produto.
 *
 * \param  char* Codigo do produto.
 * \return EXT int PRODUTO_REMOVIDO, PESQUISA_PRODUTO_NAO_ENCONTRADO ou PRODUTO_NAO_PODE_SER_REMOVIDO.
 *
 */
EXT int efetuarRemoverProduto(char *);

/** \brief Realiza o cadastro de um novo produto.
 *
 * \param  TipoProduto* Contem os dados do novo produto.
 * \return EXT int PRODUTO_CADASTRADO ou PRODUTO_JA_CADASTRADO.
 *
 */
EXT int efetuarCadastrarProduto(TipoProduto *);

#endif // SLOGICA_H_INCLUDED
