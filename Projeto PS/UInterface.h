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


#endif // UINTERFACE_H_INCLUDED
