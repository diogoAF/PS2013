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

int efetuarPesquisaDesenvolvedor(TipoDesenvolvedor * desenvolvedor){
    if(strcmp(desenvolvedor->nome,"teste") == 0){
        strcpy(desenvolvedor->email,"teste@teste.com");
        desenvolvedor->categoria = DESENVOLVEDOR_COMUM;
        return(PESQUISA_DESENVOLVEDOR_ENCONTRADO);
    }else{
        return(PESQUISA_DESENVOLVEDOR_NAO_ENCONTRADO);
    }
}

int efetuarPesquisaProduto(TipoProduto * produto){
    if(strcmp(produto->codigo,"test") == 0){
        strcpy(produto->nome,"TESTE");
        strcpy(produto->versao,"01.02");
        strcpy(produto->emailLider,"lider@teste.com");
        return(PESQUISA_PRODUTO_ENCONTRADO);
    }else{
        return(PESQUISA_PRODUTO_NAO_ENCONTRADO);
    }
}

int efetuarPesquisaDefeito(TipoDefeito * defeito){
    if(strcmp(defeito->codigo,"test") == 0){
        strcpy(defeito->descricao,"TESTE");
        strcpy(defeito->codigoProduto,"sapo");
        defeito->dataAbertura.dia = 10;
        defeito->dataAbertura.mes = 11;
        defeito->dataAbertura.ano = 2013;
        defeito->dataEncerramento.dia = 15;
        defeito->dataEncerramento.mes = 12;
        defeito->dataEncerramento.ano = 2013;
        defeito->estado = ESTADO_ENCERRADO;
        defeito->votos = 5;

        return(PESQUISA_DEFEITO_ENCONTRADO);
    }else{
        return(PESQUISA_DEFEITO_NAO_ENCONTRADO);
    }
}
