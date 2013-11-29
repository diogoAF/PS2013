#define VALIDACAOENTRADA_SERV
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "ValidacaoEntrada.h"
#define MIN_NOME 3
#define MIN_DESCRICAO 10
#define MIN_ANO 1900
#define ANO_ATUAL 2013
#define MIN_EMAIL 3

/** \brief Verifica se o caracter "variavel_char" � uma letra, n�mero ou espa�o em branco.
 *
 * \param variavel_char char o caracter que ser� verificado.
 * \return int TRUE se o caracter for alfanumerico, FALSE caso contr�rio.
 *
 */
int ehAlfaNumerico(char);

/** \brief Fun��o para veririfcar a existencia de digitos duplicados na String.
 *
 * \param campo char* String que ser� analisada.
 * \return int Retorna TRUE caso exista duplicata ou FALSE caso n�o exista.
 *
 */
int verificaDigitosRepetidos(char *);

/** \brief Verifica se o caracter "variavel_char" � uma letra.
 *
 * \param variavel_char char caracter a ser verificado.
 * \return int Retorna TRUE caso o caracter seja uma letra ou FALSE caso contr�rio.
 *
 */
int ehLetra(char);


int validaNome(char * nome){
    int i=0;
    if(strlen(nome) <= MIN_NOME){
        return(NOME_DIGITOS_INSUFICIENTES);
    }
    else if(strlen(nome) > VET_NOME){
        return(NOME_LIMITE_DIGITOS_EXCEDIDO);
    }
    while(nome[i] != '\0'){
        if(ehAlfaNumerico(nome[i]) != TRUE){
            return NOME_CARACTER_INVALIDO;
        }
        i++;
    }
    return(ENTRADA_VALIDA);
}


int ehAlfaNumerico(char variavel_char){
    if((variavel_char >= 'a' && variavel_char <= 'z')||
        (variavel_char >= 'A' && variavel_char <= 'Z')){
            return TRUE;
        }
    if(isdigit(variavel_char)){
        return TRUE;
    }
    if(variavel_char == ' '){
        return TRUE;
    }
    return FALSE;
}


int validaSenha(char * senha){
    if(strlen(senha) < VET_SENHA - 1){
        return(SENHA_DIGITOS_INSUFICIENTES);
    }
    if(strlen(senha) > VET_SENHA){
        return(SENHA_LIMITE_DIGITOS_EXCEDIDO);
    }
    if(verificaDigitosRepetidos(senha) == TRUE){
        return(SENHA_DIGITO_REPETIDO);
    }
    return(ENTRADA_VALIDA);
}


int verificaDigitosRepetidos(char * campo){
    char aux;
    int i=0,j=1;
    do{
        aux = campo[i];
        while(campo[j] != '\0'){
            if(campo[j] == aux){
                return TRUE;
            }
            j++;
        }
        i++;
        j = i + 1;
    }while(campo[j] != '\0');
    return FALSE;
}


int validaCodigo(char * codigo){
    int i=0;
    if(strlen(codigo) < VET_CODIGO - 1){
        return(CODIGO_DIGITOS_INSUFICIENTES);
    }
    if(strlen(codigo) > VET_CODIGO){
        return(CODIGO_LIMITE_DIGITOS_EXCEDIDO);
    }
    while(codigo[i] != '\0'){
        if(ehLetra(codigo[i]) == FALSE){
            return(CODIGO_CARACTER_INVALIDO);
        }
        i++;
    }
    return(ENTRADA_VALIDA);
}


int ehLetra(char variavel_char){
    if((variavel_char >= 'a' && variavel_char <= 'z')||
        (variavel_char >= 'A' && variavel_char <= 'Z')){
            return TRUE;
        }
    return FALSE;
}


int validaDescricao(char * descricao){
    if(strlen(descricao) < MIN_DESCRICAO){
        return(DESCRICAO_DIGITOS_INSUFICIENTES);
    }
    if(strlen(descricao) > VET_DESCRICAO){
        return(DESCRICAO_LIMITE_DIGITOS_EXCEDIDO);
    }
    return(ENTRADA_VALIDA);
}


int validaData(TipoData data){
    if(data.dia < 1 || data.dia > 31){
        return(DATA_DIA_INVALIDO);
    }
    if(data.mes < 1 || data.mes > 12){
        return(DATA_MES_INVALIDO);
    }
    if(data.ano < MIN_ANO || data.ano > ANO_ATUAL){
        return(DATA_ANO_INVALIDO);
    }
    return(ENTRADA_VALIDA);
}


int validaVoto(int voto){
    if(voto < 0 || voto > 100){
        return(VOTO_INVALIDO);
    }
    return(ENTRADA_VALIDA);
}


int validaVersao(char * versao){
    if(strlen(versao) < VET_VERSAO -1 || strlen(versao) >= VET_VERSAO){
        return(VERSAO_FORMATO_INVALIDO);
    }
    if(versao[2] != '.'){
        return(VERSAO_FORMATO_INVALIDO);
    }
    if(!isdigit(versao[0]) || !isdigit(versao[1])
       || !isdigit(versao[3]) || !isdigit(versao[4])){
        return(VERSAO_CODIGO_INVALIDO);
       }
    return(ENTRADA_VALIDA);
}


int validaEmail(char * email){
    if(strlen(email) < MIN_EMAIL){
        return(EMAIL_DIGITOS_INSUFICIENTES);
    }
    if(strlen(email) >= VET_EMAIL){
        return(EMAIL_LIMITE_DIGITOS_EXCEDIDO);
    }
    if(strstr(email,"@") == NULL){
        return(EMAIL_FORMATO_INVALIDO);
    }
    if(strstr(email,".") == NULL){
        return(EMAIL_FORMATO_INVALIDO);
    }
    if(strstr(email,"#") != NULL || strstr(email,"$") != NULL || strstr(email,"&") != NULL){
        return(EMAIL_CARACTER_INVALIDO);
    }
    return(ENTRADA_VALIDA);
}
