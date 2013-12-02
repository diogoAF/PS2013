#define SLOGICA_SERV
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "SLogica.h"

/**
* ATENÇÃO! Isto é apenas um STUB!
*/
int verificaLogin(TipoDesenvolvedor * usuario){
    if(strcmp(usuario->email,"desenv@teste.com") == 0){
        usuario->categoria = DESENVOLVEDOR_COMUM;
        strcpy(usuario->nome,"Sr Desenvolvedor");
        return(LOGIN_REALIZADO);
    }
    if(strcmp(usuario->email,"produto@teste.com") == 0){
        usuario->categoria = DESENVOLVEDOR_LIDER_PRODUTO;
        strcpy(usuario->nome,"Sr. Lider de Produto");
        return(LOGIN_REALIZADO);
    }
    if(strcmp(usuario->email,"projeto@teste.com") == 0){
        usuario->categoria = DESENVOLVEDOR_LIDER_PROJETO;
        strcpy(usuario->nome,"Sr Lider Projeto");
        return(LOGIN_REALIZADO);
    }else{
        return(LOGIN_USUARIO_NAO_CADASTRADO);
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
        strcpy(produto->nome,"Caso Positivo");
        strcpy(produto->versao,"01.00");
        strcpy(produto->emailLider,"produto@teste.com");
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

int efetuarVoluntariarDefeito(TipoDefeito * defeito){
    if(strcmp(defeito->codigo,"test") == 0){
        return(DEFEITO_VOLUNTARIO_ACEITO);
    }
    if(strcmp(defeito->codigo,"revy") == 0){
        return(DEFEITO_JA_ENCERRADO);
    }
    if(strcmp(defeito->codigo,"abcd") == 0){
        return(DEFEITO_JA_EM_REPARO);
    }
    if(strcmp(defeito->codigo,"jill") == 0){
        return(DEFEITO_DESENVOLVEDOR_JA_VOLUNTARIO);
    }else{
        return(PESQUISA_DEFEITO_NAO_ENCONTRADO);
    }
}

int efetuarVotarDefeito(char * codigo, int voto){
    if(strcmp(codigo,"test") == 0){
        return(DEFEITO_VOTADO);
    }
    if(strcmp(codigo,"revy") == 0){
        return(DEFEITO_JA_ENCERRADO);
    }
    if(strcmp(codigo,"sapo") == 0){
        return(DEFEITO_JA_EM_REPARO);
    }else{
        return(PESQUISA_DEFEITO_NAO_ENCONTRADO);
    }
}

int efetuarCadastrarDefeito(TipoDefeito * defeito){
    if(strcmp(defeito->codigo,"test") == 0){
        return(DEFEITO_CADASTRADO);
    }else{
        return(DEFEITO_JA_CADASTRADO);
    }
}

int efetuarAlocarDesenvolvedorDefeito(char * codigo, char * email){
    if(strcmp(codigo,"test") == 0){
        return(DESENVOLVEDOR_ALOCADO_DEFEITO);
    }
    if(strcmp(codigo,"sapo") == 0){
        return(DESENVOLVEDOR_NAO_PODE_SER_ALOCADO);
    }
    if(strcmp(codigo,"abcd") == 0){
        return(PESQUISA_DEFEITO_NAO_ENCONTRADO);
    }else{
        return(PESQUISA_DESENVOLVEDOR_NAO_ENCONTRADO);
    }
}

int efetuarRemoverDesenvolvedorDefeito(char * codigo){
    if(strcmp(codigo,"test") == 0){
        return(DESENVOLVEDOR_REMOVIDO_DEFEITO);
    }
    if(strcmp(codigo,"sapo") == 0){
        return(DEFEITO_NAO_POSSUI_DESENVOLVEDOR_ALOCADO);
    }
    if(strcmp(codigo,"abcd") == 0){
        return(PESQUISA_DEFEITO_NAO_ENCONTRADO);
    }else{
        return(DEFEITO_JA_ENCERRADO);
    }
}

int efetuarCancelarContaLiderProjeto(TipoDesenvolvedor * usuario, char * email){
    if(strcmp(email,"teste@teste.com") == 0){
        return(PESQUISA_DESENVOLVEDOR_NAO_ENCONTRADO);
    }
    if(strcmp(usuario->nome,"teste") == 0){
        return(DESENVOLVEDOR_CONTA_CANCELADA);
    }else{
        return(DESENVOLVEDOR_CONTA_NAO_PODE_SER_CANCELADA);
    }
}

int efetuarAlocarLiderProduto(char * codigo, char * email){
    if(strcmp(codigo,"test") == 0){
        return(PRODUTO_LIDER_ALOCADO);
    }
    if(strcmp(codigo,"sapo") == 0){
        return(PRODUTO_DESENVOLVEDOR_NAO_PODE_SER_LIDER);
    }
    if(strcmp(codigo,"yoko") == 0){
        return(PRODUTO_JA_TEM_LIDER);
    }
    if(strcmp(codigo,"abcd") == 0){
        return(PESQUISA_PRODUTO_NAO_ENCONTRADO);
    }else{
        return(PESQUISA_DESENVOLVEDOR_NAO_ENCONTRADO);
    }
}

int efetuarRemoverLiderProduto(char * codigo){
    if(strcmp(codigo,"test") == 0){
        return(PRODUTO_LIDER_REMOVIDO);
    }
    if(strcmp(codigo,"abcd") == 0){
        return(PESQUISA_PRODUTO_NAO_ENCONTRADO);
    }else{
        return(PRODUTO_SEM_LIDER);
    }
}

int efetuarRemoverProduto(char * codigo){
    if(strcmp(codigo,"test") == 0){
        return(PRODUTO_REMOVIDO);
    }
    if(strcmp(codigo,"abcd") == 0){
        return(PESQUISA_PRODUTO_NAO_ENCONTRADO);
    }else{
        return(PRODUTO_NAO_PODE_SER_REMOVIDO);
    }
}

int efetuarCadastrarProduto(TipoProduto * produto){
    if(strcmp(produto->codigo,"test") == 0){
        return(PRODUTO_CADASTRADO);
    }else{
        return(PRODUTO_JA_CADASTRADO);
    }
}
