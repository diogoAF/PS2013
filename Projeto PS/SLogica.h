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
EXT int efetuaCadastroDesenvolvedor(TipoDesenvolvedor *);
EXT int efetuarAlterarCadastro(TipoDesenvolvedor *);
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

#endif // SLOGICA_H_INCLUDED
