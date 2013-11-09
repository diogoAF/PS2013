#ifndef VALIDACAOENTRADA_H_INCLUDED
#define VALIDACAOENTRADA_H_INCLUDED
#ifdef VALIDACAOENTRADA_SERV
#define EXT
#else
#define EXT extern
#endif

#include "PacoteDeStructs.h"
#include "TabelaDeCodigos.h"

EXT int validaNome(char *);
EXT int validaSenha(char *);
EXT int validaCodigo(char *);
EXT int validaDescricao(char *);
EXT int validaData(TipoData);
EXT int validaVoto(int);
EXT int validaEmail(char *);
EXT int validaVersao(char *);



#endif // VALIDACAOENTRADA_H_INCLUDED
