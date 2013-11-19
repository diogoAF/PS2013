#define SLOGICA_SERV
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "SLogica.h"
/**
 * ATENÇÃO! ISSO É APENAS UM STUB!!!
 */

int verificaLogin(char * email, char * senha){
    if(strcmp(email,"mitsuru@sees.org") == 0){
        return(LOGIN_USUARIO_NAO_CADASTRADO);
    }else{
        return(LOGIN_REALIZADO);
    }
}
