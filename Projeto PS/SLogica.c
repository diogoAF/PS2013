#define SLOGICA_SERV
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "SLogica.h"

int verificaLogin(TipoDesenvolvedor * usuario){
    if(strcmp(usuario->email,"mitsuru@sees.org") == 0){
        return(LOGIN_USUARIO_NAO_CADASTRADO);
    }else{
        usuario->categoria = DESENVOLVEDOR_COMUM;
        strcpy(usuario->nome,"Sr. Usuario");
        return(LOGIN_REALIZADO);
    }
}

int efetuaCadastroDesenvolvedor(TipoDesenvolvedor * desenvolvedor){
    if(strcmp(desenvolvedor->email,"teste@teste.com") == 0){
        return(DESENVOLVEDOR_JA_CADASTRADO);
    }else{
        desenvolvedor->categoria = DESENVOLVEDOR_COMUM;
        return(DESENVOLVEDOR_CADASTRO_REALIZADO);
    }
}

int efetuarAlterarCadastro(TipoDesenvolvedor * usuario){
    if(strcmp(usuario->nome,"TESTE") == 0){
        return(ERRO_INESPERADO);
    }else{
        return(DESENVOLVEDOR_CADASTRO_ATUALIZADO);
    }
}

int efetuarCancelarConta(TipoDesenvolvedor * usuario){
    if(strcmp(usuario->email,"teste@teste.com") == 0){
        return(DESENVOLVEDOR_CONTA_NAO_PODE_SER_CANCELADA);
    }else{
        return(DESENVOLVEDOR_CONTA_CANCELADA);
    }
}
