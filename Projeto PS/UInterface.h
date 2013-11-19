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
EXT int cadastraDesenvolvedor(TipoDesenvolvedor *);
EXT int realizaLogin(void);
EXT void printTelaLogin(void);



#endif // UINTERFACE_H_INCLUDED
