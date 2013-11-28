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
EXT int efetuarPesquisaDesenvolvedor(TipoDesenvolvedor *);
EXT int efetuarPesquisaProduto(TipoProduto *);
EXT int efetuarPesquisaDefeito(TipoDefeito *);
EXT int efetuarVoluntariarDefeito(TipoDefeito *);
EXT int efetuarVotarDefeito(char *, int);
EXT int efetuarCadastrarDefeito(TipoDefeito *);
EXT int efetuarAlocarDesenvolvedorDefeito(char *, char *);
EXT int efetuarRemoverDesenvolvedorDefeito(char *);
EXT int efetuarCancelarContaLiderProjeto(TipoDesenvolvedor *, char *);
EXT int efetuarAlocarLiderProduto(char *, char *);
EXT int efetuarRemoverLiderProduto(char *);
EXT int efetuarRemoverProduto(char *);
EXT int efetuarCadastrarProduto(TipoProduto *);

#endif // SLOGICA_H_INCLUDED
