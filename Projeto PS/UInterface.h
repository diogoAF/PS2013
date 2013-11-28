#ifndef UINTERFACE_H_INCLUDED
#define UINTERFACE_H_INCLUDED
#ifdef UINTERFACE_SERV
#define EXT
#else
#define EXT extern
#endif

#include "PacoteDeStructs.h"

EXT void start(void);

EXT void printCabecalho(void);
EXT void limpaTela(void);
EXT void printTelaInicial(void);
EXT void printTelaCadastroDesenvolvedorNome(void);
EXT void printTelaCadastroDesenvolvedorSenha(void);
EXT void printTelaCadastroDesenvolvedorEmail(void);
EXT void telacadastraDesenvolvedor(void);
EXT void cadastraDesenvolvedor(TipoDesenvolvedor *);
EXT void telaRealizaLogin(void);
EXT void realizaLogin(TipoDesenvolvedor *);
EXT void printTelaLogin(void);

EXT void telaInicialDesenvolvedorComum(TipoDesenvolvedor *);
EXT void telaInicialDesenvolvedorLiderProduto(TipoDesenvolvedor *);
EXT void telaInicialDesenvolvedorLiderProjeto(TipoDesenvolvedor *);
EXT void printtelaInicialDesenvolvedorComum(char *);
EXT void telaAlterarConta(TipoDesenvolvedor *);
EXT void printTelaAlterarCadastroNome(void);
EXT int realizaAlteracaoCadastro(TipoDesenvolvedor *);
EXT int telaCancelarConta(TipoDesenvolvedor *);
EXT void printTelaCancelarConta(void);
EXT int realizarCancelarConta(TipoDesenvolvedor *);
EXT void telaPesquisarDesenvolvedor(void);
EXT void printTelaPesquisarDesenvolvedor(void);
EXT void realizaPesquisaDesenvolvedor(TipoDesenvolvedor *);
EXT void printTelaPesquisarProduto(void);
EXT void realizaPesquisaProduto(TipoProduto *);
EXT void printTelaPesquisarDefeito(void);
EXT void realizaPesquisaDefeito(TipoDefeito*);
EXT void printTelaVoluntariarDefeito(void);
EXT void telaVoluntariarDefeito(void);
EXT void realizaVoluntariarDefeito(TipoDefeito *);
EXT void printTelaVotarDefeitoVoto(void);
EXT void printTelaVotarDefeito(void);
EXT void telaVotarDefeito(void);
EXT void realizaVotarDefeito(char *,int);
EXT void printTelaCadastrarDefeitoDescricao(void);
EXT void printTelaCadastrarDefeitoCodigo(void);
EXT void printTelaCadastrarDefeitoDataAbertura(void);
EXT void printTelaCadastrarDefeito(void);
EXT void realizaCadastrarDefeito(TipoDefeito *);
EXT void telaCadastrarDefeito(void);
EXT void printTelaInicialDesenvolvedorLiderProduto(char *);
EXT void telaInicialDesenvolvedorLiderProduto(TipoDesenvolvedor *);
EXT void printTelaAlocarDesenvolvedorDefeito(void);
EXT void realizaAlocarDesenvolvedorDefeito(char *, char *);
EXT void printTelaRemoverDesenvolvedorDefeito(void);
EXT void removerDesenvolvedorDefeito(void);
EXT void realizaRemoverDesenvolvedorDefeito(char *);
EXT void telaInicialDesenvolvedorLiderProjeto(TipoDesenvolvedor *);
EXT void printTelaInicialDesenvolvedorLiderProjeto(char *);
EXT int realizarCancelarContaLiderProjeto(TipoDesenvolvedor *);
EXT void telaAlocarLiderProduto(void);
EXT void printTelaAlocarLiderProduto(void);
EXT void realizaAlocarLiderProduto(char *, char *);
EXT void telaRemoverLiderProduto(void);
EXT void printTelaRemoverLiderProduto(void);
EXT void printTelaRemoverProduto(void);
EXT void telaRemoverProduto(void);
EXT void realizaRemoverProduto(char *);
EXT void telaCadastrarProduto(void);
EXT void printTelaCadastrarProduto(void);
EXT void printTelaCadastrarProdutoNome(void);
EXT void printTelaCadastrarProdutoVersao(void);

#endif // UINTERFACE_H_INCLUDED
