#define UINTERFACE_SERV
#include <stdio.h>
#include <stdlib.h>
#include "UInterface.h"
#include "ValidacaoEntrada.h"
#include "SLogica.h"

/** \brief A fun��o limpa a tela do prompt.
 *
 * \param void
 * \return void
 *
 */
void limpaTela(void){
    system("cls");
}

/** \brief Fun��o respons�vel por iniciar as fun��es b�sicas apresentadas no menu inicial do Software.
 *
 * \param void
 * \return void
 *
 */
void start(void){
    int opcao, retorno;
    TipoDesenvolvedor usuario;

    do{
        printCabecalho();
        printTelaInicial();
        scanf("%d",&opcao);
        getchar();
        while(opcao < 1 || opcao > 3){
            printf("\nOpcao errada! Escolha novamente: ");
            scanf("%d",&opcao);
            getchar();
        }
        limpaTela();
        if(opcao == 1){
            retorno = cadastraDesenvolvedor(&usuario);
            if(retorno == ENTRADA_VALIDA){
                printf("\nUSUARIO CADASTRADO!");
                printf("\nNOME: %s\nSENHA: %s\nEMAIL: %s\n",usuario.nome,usuario.senha,usuario.email);
                system("pause");
            }else{
                //TODO: melhorar isso aqui!
                printf("\nERRO!\n");
            }
        }
        if(opcao == 2){
            retorno = realizaLogin();
            if(retorno == LOGIN_REALIZADO){
                printf("\nLOGIN REALIZADO COM SUCESSO!!\n");
                system("pause");
            }else{
                //TODO: melhorar isso aqui!
                printf("\nERRO! LOGIN FALHOU!\n");
                system("pause");
            }
        }
        limpaTela();
    }while(opcao < 3);
    printf("\nFinalizando...\n");
}

/** \brief A fun��o printa no prompt o Cabe�alho do Software.
 *
 * \param void
 * \return void
 *
 */
void printCabecalho(void){
    printf("***************************************\n");
    printf("***************************************\n");
    printf("**           Bug DataBase            **\n");
    printf("***************************************\n");
    printf("***************************************\n");
}

/** \brief A fun��o printa no prompt as nuancias da Tela Inicial
 *
 * \param void
 * \return void
 *
 */
void printTelaInicial(void){
    printf("** 1- Cadastrar                      **\n");
    printf("** 2- Login                          **\n");
    printf("** 3- Sair                           **\n");
    printf("***************************************\n");
    printf("Escolha: ");
}

/** \brief Fun��o printa no prompt o inicio da Tela de Cadastro de Desenvolvedor. Tamb�m usada para o cadastro inicial.
 *
 * \param void
 * \return void
 *
 */
void printTelaCadastroDesenvolvedorNome(void){
    printf("**      CADASTRAR DESENVOLVEDOR      **\n");
    printf("***************************************\n");
    printf("Informe o NOME: ");
}

/** \brief Fun��o printa no prompt a solicita��o da senha.
 *
 * \param void
 * \return void
 *
 */
void printTelaCadastroDesenvolvedorSenha(void){
    printf("Informe a SENHA: ");
}

/** \brief Fun��o printa no prompt a solicita��o do E-mail.
 *
 * \param void
 * \return void
 *
 */
void printTelaCadastroDesenvolvedorEmail(void){
    printf("Informe o E-MAIL: ");
}

/** \brief Fun��o printa no prompt a solicita��o do Login.
 *
 * \param void
 * \return void
 *
 */
void printTelaLogin(void){
    printf("**              LOGIN                **\n");
    printf("***************************************\n");
}

/** \brief Fun��o responsavel por efetivamente coletar e validar os dados de entrada para o cadastro de um Desenvolvedor. Ao final, os dados s�o repasados ao m�dulo de l�gica de neg�cio.
 *
 * \param desenvolvedor TipoDesenvolvedor* Struct vazia que armazenar� os dados do futuro desenvolvedor.
 * \return int c�digo de retorno.
 *
 */
int cadastraDesenvolvedor(TipoDesenvolvedor * desenvolvedor){
    int retorno;
    printCabecalho();
    printTelaCadastroDesenvolvedorNome();
    scanf("%[^\n]s",&desenvolvedor->nome);
    getchar();
    retorno = validaNome(desenvolvedor->nome);
    while(retorno != ENTRADA_VALIDA){
        if(retorno == NOME_CARACTER_INVALIDO){
            printf("ERRO!\nNOME comporta apenas letras. Informe novamente: ");
            scanf("%[^\n]s",&desenvolvedor->nome);
            getchar();
        }
        else if(retorno == NOME_DIGITOS_INSUFICIENTES){
            printf("ERRO!\nNOME pequeno demais. Informe novamente: ");
            scanf("%[^\n]s",&desenvolvedor->nome);
            getchar();
        }
        else if(retorno NOME_LIMITE_DIGITOS_EXCEDIDO){
            printf("ERRO!\nNOME possui no maximo 15 digitos. Informe novamente: ");
            scanf("%[^\n]s",&desenvolvedor->nome);
            getchar();
        }
        retorno = validaNome(desenvolvedor->nome);
    }
    printTelaCadastroDesenvolvedorSenha();
    scanf("%[^\n]s",&desenvolvedor->senha);
    getchar();
    retorno = validaSenha(desenvolvedor->senha);
    while(retorno != ENTRADA_VALIDA){
        if(retorno == SENHA_DIGITO_REPETIDO){
            printf("ERRO!\nSENHA n�o pode conter digitos repetidos. Informe novamente: ");
            scanf("%[^\n]s",&desenvolvedor->senha);
            getchar();
        }
        else if(retorno == SENHA_DIGITOS_INSUFICIENTES){
            printf("ERRO!\nSENHA nao pode ter menos que 5 digitos. Informe novamente: ");
            scanf("%[^\n]s",&desenvolvedor->senha);
            getchar();
        }
        else if(retorno SENHA_LIMITE_DIGITOS_EXCEDIDO){
            printf("ERRO!\nSENHA nao pode ter mais do que 5 digitos. Informe novamente: ");
            scanf("%[^\n]s",&desenvolvedor->senha);
            getchar();
        }
        retorno = validaSenha(desenvolvedor->senha);
    }
    printTelaCadastroDesenvolvedorEmail();
    scanf("%[^\n]s",&desenvolvedor->email);
    getchar();
    retorno = validaEmail(desenvolvedor->email);
    while(retorno != ENTRADA_VALIDA){
        if(retorno == EMAIL_CARACTER_INVALIDO){
            printf("ERRO!\nEMAIL informado contem digito invalido. Informe novamente: ");
            scanf("%[^\n]s",&desenvolvedor->email);
            getchar();
        }
        if(retorno == EMAIL_FORMATO_INVALIDO){
            printf("ERRO!\nEMAIL formato invalido. Informe novamente: ");
            scanf("%[^\n]s",&desenvolvedor->email);
            getchar();
        }
        else if(retorno == EMAIL_DIGITOS_INSUFICIENTES){
            printf("ERRO!\nEMAIL nao pode ter menos que 3 digitos. Informe novamente: ");
            scanf("%[^\n]s",&desenvolvedor->email);
            getchar();
        }
        else if(retorno EMAIL_LIMITE_DIGITOS_EXCEDIDO){
            printf("ERRO!\nEMAIL nao pode ter mais do que 20 digitos. Informe novamente: ");
            scanf("%[^\n]s",&desenvolvedor->email);
            getchar();
        }
        retorno = validaEmail(desenvolvedor->email);
    }
    return (ENTRADA_VALIDA);
}

/** \brief Fun��o que coleta, valida e informa os dados necess�rios para a realiza��o do Login para o M�dulo de L�gica de Neg�cio.
 *
 * \return int C�digo de Retorno.
 *
 */
int realizaLogin(){
    int retorno;
    char email[VET_EMAIL],senha[VET_SENHA];

    printCabecalho();
    printTelaLogin();
    printTelaCadastroDesenvolvedorEmail();
    scanf("%[^\n]s",&email);
    getchar();
    retorno = validaEmail(email);
    while(retorno != ENTRADA_VALIDA){
        if(retorno == EMAIL_CARACTER_INVALIDO){
            printf("ERRO!\nEMAIL informado contem digito invalido. Informe novamente: ");
            scanf("%[^\n]s",&email);
            getchar();
        }
        if(retorno == EMAIL_FORMATO_INVALIDO){
            printf("ERRO!\nEMAIL formato invalido. Informe novamente: ");
            scanf("%[^\n]s",&email);
            getchar();
        }
        else if(retorno == EMAIL_DIGITOS_INSUFICIENTES){
            printf("ERRO!\nEMAIL nao pode ter menos que 3 digitos. Informe novamente: ");
            scanf("%[^\n]s",&email);
            getchar();
        }
        else if(retorno EMAIL_LIMITE_DIGITOS_EXCEDIDO){
            printf("ERRO!\nEMAIL nao pode ter mais do que 20 digitos. Informe novamente: ");
            scanf("%[^\n]s",&email);
            getchar();
        }
        retorno = validaEmail(email);
    }
    printTelaCadastroDesenvolvedorSenha();
    scanf("%[^\n]s",&senha);
    getchar();
    retorno = validaSenha(senha);
    while(retorno != ENTRADA_VALIDA){
        if(retorno == SENHA_DIGITO_REPETIDO){
            printf("ERRO!\nSENHA n�o pode conter digitos repetidos. Informe novamente: ");
            scanf("%[^\n]s",&senha);
            getchar();
        }
        else if(retorno == SENHA_DIGITOS_INSUFICIENTES){
            printf("ERRO!\nSENHA nao pode ter menos que 5 digitos. Informe novamente: ");
            scanf("%[^\n]s",&senha);
            getchar();
        }
        else if(retorno SENHA_LIMITE_DIGITOS_EXCEDIDO){
            printf("ERRO!\nSENHA nao pode ter mais do que 5 digitos. Informe novamente: ");
            scanf("%[^\n]s",&senha);
            getchar();
        }
        retorno = validaSenha(senha);
    }
    return(verificaLogin(email,senha));
}

//Janela Usuario Tipo 1- Normal
/*
Cadastrar Defeito
Votar Defeito
Voluntariar ao Defeito
Pesquisar Defeitos

Pesquisar Produtos

Pesquisar Usuario

Cancelar Conta
Logout
*/

//Janela Usuario Tipo 2- Lider Produto
/*
Alocar Desenvolvedor no Defeito
Remover Desenvolvedor do Defeito

Cadastrar Defeito
Votar Defeito
Voluntariar ao Defeito <---!!!!
Pesquisar Defeitos

Pesquisar Produtos

Pesquisar Usuario

Cancelar Conta
Logout
*/


//Janela Usuario Tipo 3- Lider Projeto
/*
Alocar Lider Produto
Remover Lider Produto

Criar Produto
Remover Produto

Alocar Desenvolvedor no Defeito
Remover Desenvolvedor do Defeito

Cadastrar Defeito
Votar Defeito
Voluntariar ao Defeito <---!!!!
Pesquisar Defeitos

Pesquisar Produtos

Pesquisar Usuario

Cancelar Conta
Cancelar Conta Usuario

Logout
*/

//Janela ERRO
/*
_Provocados pelo usuario_
Formato
Autenticacao
Opcao

_Provocados pelo Sistema_
Arquivo Inexistente
Falha no acesso de memoria
*/





