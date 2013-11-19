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

EXT int verificaLogin(char *, char *);
//
//
//
//
//
//

#endif // SLOGICA_H_INCLUDED
