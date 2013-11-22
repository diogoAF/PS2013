#define UINTERFACE_SERV
#include <stdio.h>
#include <stdlib.h>
#include "UInterface.h"
#include "ValidacaoEntrada.h"
#include "SLogica.h"

/** \brief A função limpa a tela do prompt.
 *
 * \param void
 * \return void
 *
 */
void limpaTela(void){
    system("cls");
}

/** \brief Função responsável por iniciar as funções básicas apresentadas no menu inicial do Software.
 *
 * \param void
 * \return void
 *
 */
void start(void){
    int opcao;

    do{
        printCabecalho();
        printTelaInicial();
        scanf("%d",&opcao);
        getchar();
        while(opcao < 1 || opcao > 3){
            printf("\nOpcao invalida! Escolha novamente: ");
            scanf("%d",&opcao);
            getchar();
        }
        limpaTela();
        if(opcao == 1){
            telacadastraDesenvolvedor();
        }
        if(opcao == 2){
            telaRealizaLogin();
        }
        limpaTela();
    }while(opcao < 3);
    printf("\nFinalizando...\n");
}

/** \brief A função printa no prompt o Cabeçalho do Software.
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

/** \brief A função printa no prompt as nuancias da Tela Inicial
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

/** \brief Função printa no prompt o inicio da Tela de Cadastro de Desenvolvedor. Também usada para o cadastro inicial.
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

/** \brief Função printa no prompt a solicitação da senha.
 *
 * \param void
 * \return void
 *
 */
void printTelaCadastroDesenvolvedorSenha(void){
    printf("Informe a SENHA: ");
}

/** \brief Função printa no prompt a solicitação do E-mail.
 *
 * \param void
 * \return void
 *
 */
void printTelaCadastroDesenvolvedorEmail(void){
    printf("Informe o E-MAIL: ");
}

/** \brief Função printa no prompt a solicitação do Login.
 *
 * \param void
 * \return void
 *
 */
void printTelaLogin(void){
    printf("**              LOGIN                **\n");
    printf("***************************************\n");
}

/** \brief função que printa no prompt a Tela Inicial com todas as funcionalidades para um Desenvolvedor Comum.
 *
 * \param nome char* Nome do desenvolvedor que está utilizando o sistema.
 * \return void
 *
 */
void printtelaInicialDesenvolvedorComum(char * nome){
    printf("** Bem Vindo, %s\n",nome);
    printf("***************************************\n");
    printf("** 1- Cadastrar Defeito              **\n");
    printf("** 2- Votar Defeito                  **\n");
    printf("** 3- Voluntariar ao Defeito         **\n");
    printf("** 4- Pesquisar Defeito              **\n");
    printf("** 5- Pesquisar Produto              **\n");
    printf("** 6- Pesquisar Desenvolvedor        **\n");
    printf("** 7- Alterar Conta                  **\n");
    printf("** 8- Cancelar Conta                 **\n");
    printf("** 9- Logout                         **\n");
    printf("***************************************\n");
    printf("Escolha: ");
}

/** \brief Função que printa no prompt a Tela de alterar cadastro.
 *
 * \param void
 * \return void
 *
 */
void printTelaAlterarCadastroNome(void){
    printf("**         ALTERAR CADASTRO          **\n");
    printf("***************************************\n");
    printf("Informe o NOME: ");
}

/** \brief Função que printa no prompt a Tela de cancelar conta.
 *
 * \param void
 * \return void
 *
 */
void printTelaCancelarConta(void){
    printf("**          CANCELAR CONTA           **\n");
    printf("***************************************\n");
    printf("Tem certeza que deseja cancelar sua conta?[s/n]");
}

/** \brief Função responsavel por efetivamente coletar e validar os dados de entrada para o cadastro de um Desenvolvedor.
 *
 * \return void
 */
void telacadastraDesenvolvedor(){
    int retorno;
    TipoDesenvolvedor desenvolvedor;

    printCabecalho();
    printTelaCadastroDesenvolvedorNome();
    scanf("%[^\n]s",&desenvolvedor.nome);
    getchar();
    retorno = validaNome(desenvolvedor.nome);
    while(retorno != ENTRADA_VALIDA){
        if(retorno == NOME_CARACTER_INVALIDO){
            printf("ERRO!\nNOME comporta apenas letras. Informe novamente: ");
            scanf("%[^\n]s",&desenvolvedor.nome);
            getchar();
        }
        else if(retorno == NOME_DIGITOS_INSUFICIENTES){
            printf("ERRO!\nNOME pequeno demais. Informe novamente: ");
            scanf("%[^\n]s",&desenvolvedor.nome);
            getchar();
        }
        else if(retorno NOME_LIMITE_DIGITOS_EXCEDIDO){
            printf("ERRO!\nNOME possui no maximo 15 digitos. Informe novamente: ");
            scanf("%[^\n]s",&desenvolvedor.nome);
            getchar();
        }
        retorno = validaNome(desenvolvedor.nome);
    }
    printTelaCadastroDesenvolvedorSenha();
    scanf("%[^\n]s",&desenvolvedor.senha);
    getchar();
    retorno = validaSenha(desenvolvedor.senha);
    while(retorno != ENTRADA_VALIDA){
        if(retorno == SENHA_DIGITO_REPETIDO){
            printf("ERRO!\nSENHA não pode conter digitos repetidos. Informe novamente: ");
            scanf("%[^\n]s",&desenvolvedor.senha);
            getchar();
        }
        else if(retorno == SENHA_DIGITOS_INSUFICIENTES){
            printf("ERRO!\nSENHA nao pode ter menos que 5 digitos. Informe novamente: ");
            scanf("%[^\n]s",&desenvolvedor.senha);
            getchar();
        }
        else if(retorno SENHA_LIMITE_DIGITOS_EXCEDIDO){
            printf("ERRO!\nSENHA nao pode ter mais do que 5 digitos. Informe novamente: ");
            scanf("%[^\n]s",&desenvolvedor.senha);
            getchar();
        }
        retorno = validaSenha(desenvolvedor.senha);
    }
    printTelaCadastroDesenvolvedorEmail();
    scanf("%[^\n]s",&desenvolvedor.email);
    getchar();
    retorno = validaEmail(desenvolvedor.email);
    while(retorno != ENTRADA_VALIDA){
        if(retorno == EMAIL_CARACTER_INVALIDO){
            printf("ERRO!\nEMAIL informado contem digito invalido. Informe novamente: ");
            scanf("%[^\n]s",&desenvolvedor.email);
            getchar();
        }
        if(retorno == EMAIL_FORMATO_INVALIDO){
            printf("ERRO!\nEMAIL formato invalido. Informe novamente: ");
            scanf("%[^\n]s",&desenvolvedor.email);
            getchar();
        }
        else if(retorno == EMAIL_DIGITOS_INSUFICIENTES){
            printf("ERRO!\nEMAIL nao pode ter menos que 3 digitos. Informe novamente: ");
            scanf("%[^\n]s",&desenvolvedor.email);
            getchar();
        }
        else if(retorno EMAIL_LIMITE_DIGITOS_EXCEDIDO){
            printf("ERRO!\nEMAIL nao pode ter mais do que 20 digitos. Informe novamente: ");
            scanf("%[^\n]s",&desenvolvedor.email);
            getchar();
        }
        retorno = validaEmail(desenvolvedor.email);
    }
    cadastraDesenvolvedor(&desenvolvedor);
}

/** \brief  Função envia os dados do desenvolvedor ao módulo de lógica de negócio para processamento do cadastro.
 *
 * \param desenvolvedor TipoDesenvolvedor* Struct  que armazena os dados do possivel futuro desenvolvedor.
 * \return void
 *
 */
void cadastraDesenvolvedor(TipoDesenvolvedor * desenvolvedor){
    if(efetuaCadastroDesenvolvedor(desenvolvedor) == DESENVOLVEDOR_CADASTRO_REALIZADO){
        printf("\nUSUARIO CADASTRADO!");
        printf("\nNOME: %s\nSENHA: %s\nEMAIL: %s\n",desenvolvedor->nome,desenvolvedor->senha,desenvolvedor->email);
        system("pause");
    }else{
        printf("\nERRO!\n");
        printf("Usuario ja cadastrado!\n");
        system("pause");
    }
}

/** \brief Função que coleta e valida os dados necessários para a realização do Login.
 *
 * \return void
 */
void telaRealizaLogin(){
    int retorno;
    TipoDesenvolvedor usuario;

    printCabecalho();
    printTelaLogin();
    printTelaCadastroDesenvolvedorEmail();
    scanf("%[^\n]s",&usuario.email);
    getchar();
    retorno = validaEmail(usuario.email);
    while(retorno != ENTRADA_VALIDA){
        if(retorno == EMAIL_CARACTER_INVALIDO){
            printf("ERRO!\nEMAIL informado contem digito invalido. Informe novamente: ");
            scanf("%[^\n]s",&usuario.email);
            getchar();
        }
        if(retorno == EMAIL_FORMATO_INVALIDO){
            printf("ERRO!\nEMAIL formato invalido. Informe novamente: ");
            scanf("%[^\n]s",&usuario.email);
            getchar();
        }
        else if(retorno == EMAIL_DIGITOS_INSUFICIENTES){
            printf("ERRO!\nEMAIL nao pode ter menos que 3 digitos. Informe novamente: ");
            scanf("%[^\n]s",&usuario.email);
            getchar();
        }
        else if(retorno EMAIL_LIMITE_DIGITOS_EXCEDIDO){
            printf("ERRO!\nEMAIL nao pode ter mais do que 20 digitos. Informe novamente: ");
            scanf("%[^\n]s",&usuario.email);
            getchar();
        }
        retorno = validaEmail(usuario.email);
    }
    printTelaCadastroDesenvolvedorSenha();
    scanf("%[^\n]s",&usuario.senha);
    getchar();
    retorno = validaSenha(usuario.senha);
    while(retorno != ENTRADA_VALIDA){
        if(retorno == SENHA_DIGITO_REPETIDO){
            printf("ERRO!\nSENHA não pode conter digitos repetidos. Informe novamente: ");
            scanf("%[^\n]s",&usuario.senha);
            getchar();
        }
        else if(retorno == SENHA_DIGITOS_INSUFICIENTES){
            printf("ERRO!\nSENHA nao pode ter menos que 5 digitos. Informe novamente: ");
            scanf("%[^\n]s",&usuario.senha);
            getchar();
        }
        else if(retorno SENHA_LIMITE_DIGITOS_EXCEDIDO){
            printf("ERRO!\nSENHA nao pode ter mais do que 5 digitos. Informe novamente: ");
            scanf("%[^\n]s",&usuario.senha);
            getchar();
        }
        retorno = validaSenha(usuario.senha);
    }
    realizaLogin(&usuario);
}

/** \brief função que envia os dados de login para o módulo de lógica de negócio.
 *
 * \param usuario TipoDesenvolvedor* struct onde será armazenado os dados do usuario do sistema, caso o login seja bem sucedido.
 * \return void
 *
 */
void realizaLogin(TipoDesenvolvedor * usuario){
    if(verificaLogin(usuario) == LOGIN_REALIZADO){
        printf("\nLOGIN REALIZADO COM SUCESSO!!\n");
        printf("\nBem Vindo, %s!\n",usuario->nome);
        system("pause");
        limpaTela();
        if(usuario->categoria == DESENVOLVEDOR_COMUM){
            telaInicialDesenvolvedorComum(usuario);
        }
        if(usuario->categoria == DESENVOLVEDOR_LIDER_PRODUTO){
            //telaInicialDesenvolvedorLiderProduto(usuario);
        }
        else{
            //telaInicialDesenvolvedorLiderProjeto(usuario);
        }
    }else{
        printf("\nERRO! LOGIN FALHOU!\n");
        system("pause");
    }
}

/** \brief Função responsavel por coletar e validar os dados necessarios para a realizacao da alteracao do cadastro do usuario. Caso ocorra algum erro inesperado, o usuario é avisado e os dados antigos são recuperados.
 *
 * \param usuario TipoDesenvolvedor* Dados do usuario do sistema.
 * \return void
 *
 */
void telaAlterarConta(TipoDesenvolvedor * usuario){
    int retorno;
    char nome[VET_NOME],senha[VET_SENHA];
    strcpy(nome,usuario->nome);
    strcpy(senha,usuario->senha);
    printCabecalho();
    printTelaAlterarCadastroNome();
    scanf("%[^\n]s",&usuario->nome);
    getchar();
    retorno = validaNome(usuario->nome);
    while(retorno != ENTRADA_VALIDA){
        if(retorno == NOME_CARACTER_INVALIDO){
            printf("ERRO!\nNOME comporta apenas letras. Informe novamente: ");
            scanf("%[^\n]s",&usuario->nome);
            getchar();
        }
        else if(retorno == NOME_DIGITOS_INSUFICIENTES){
            printf("ERRO!\nNOME pequeno demais. Informe novamente: ");
            scanf("%[^\n]s",&usuario->nome);
            getchar();
        }
        else if(retorno NOME_LIMITE_DIGITOS_EXCEDIDO){
            printf("ERRO!\nNOME possui no maximo 15 digitos. Informe novamente: ");
            scanf("%[^\n]s",&usuario->nome);
            getchar();
        }
        retorno = validaNome(usuario->nome);
    }
     printTelaCadastroDesenvolvedorSenha();
    scanf("%[^\n]s",&usuario->senha);
    getchar();
    retorno = validaSenha(usuario->senha);
    while(retorno != ENTRADA_VALIDA){
        if(retorno == SENHA_DIGITO_REPETIDO){
            printf("ERRO!\nSENHA não pode conter digitos repetidos. Informe novamente: ");
            scanf("%[^\n]s",&usuario->senha);
            getchar();
        }
        else if(retorno == SENHA_DIGITOS_INSUFICIENTES){
            printf("ERRO!\nSENHA nao pode ter menos que 5 digitos. Informe novamente: ");
            scanf("%[^\n]s",&usuario->senha);
            getchar();
        }
        else if(retorno SENHA_LIMITE_DIGITOS_EXCEDIDO){
            printf("ERRO!\nSENHA nao pode ter mais do que 5 digitos. Informe novamente: ");
            scanf("%[^\n]s",&usuario->senha);
            getchar();
        }
        retorno = validaSenha(usuario->senha);
    }
    if(realizaAlteracaoCadastro(usuario) == ERRO_INESPERADO){
        strcpy(usuario->nome,nome);
        strcpy(usuario->senha,senha);
    }
}

/** \brief Passa os dados para serem alterados para o modulo de negócio.
 *
 * \param usuario TipoDesenvolvedor* Novos dados atualizados do usuario.
 * \return int Caso ocorra algum erro inesperado, será retornado o código ERRO_INESPERADO.
 *
 */
int realizaAlteracaoCadastro(TipoDesenvolvedor * usuario){
    if(efetuarAlterarCadastro(usuario) == DESENVOLVEDOR_CADASTRO_ATUALIZADO){
        printf("\nALTERACAO REALIZADA COM SUCESSO!!\n");
        system("pause");
        limpaTela();
        return(DESENVOLVEDOR_CADASTRO_ATUALIZADO);
    }else{
        printf("\nERRO INESPERADO! ALTERACAO FALHOU!\n");
        system("pause");
        return(ERRO_INESPERADO);
    }
}

/** \brief Função responsavel pela tela de cancelamento de conta do usuario.
 *
 * \param usuario TipoDesenvolvedor* Usuario utilizando o sistema.
 * \return int Código de Retorno
 *
 */
int telaCancelarConta(TipoDesenvolvedor * usuario){
 char opcao;
 printCabecalho();
 printTelaCancelarConta();
 scanf("%c",&opcao);
 getchar();
 while(opcao != 's' && opcao != 'S' &&
       opcao != 'n' && opcao != 'N'){
        printf("\nOpcao invalida! Escolha novamente: ");
            scanf("%d",&opcao);
            getchar();
       }
  if(opcao == 's' || opcao == 'S'){
    return(realizarCancelarConta(usuario));
  }
}

/** \brief Função que passa os dados do usuario que deseja ter a conta deletada para o módulo de negócio.
 *
 * \param usuario TipoDesenvolvedor* Usuario utilizando o sistema.
 * \return int Código de Retorno.
 *
 */
int realizarCancelarConta(TipoDesenvolvedor * usuario){
    if(efetuarCancelarConta(usuario) == DESENVOLVEDOR_CONTA_CANCELADA){
        printf("\nCONTA CANCELADA COM SUCESSO!!\n");
        system("pause");
        limpaTela();
        return(DESENVOLVEDOR_CONTA_CANCELADA);
    }else{
        printf("\nERRO! SUA CONTA NAO PODE SER CANCELADA!\n");
        system("pause");
        return(DESENVOLVEDOR_CONTA_NAO_PODE_SER_CANCELADA);
    }
}

/** \brief Função responsavel pelo menu inicial apresentados as funcionalidades desponiveis para o Desenvolvedor Comum.
 *
 * \param usuario TipoDesenvolvedor* Struct contendo as informações do usuário do sistema.
 * \return void
 *
 */
void telaInicialDesenvolvedorComum(TipoDesenvolvedor * usuario){
    int opcao;

    do{
        printCabecalho();
        printtelaInicialDesenvolvedorComum(usuario->nome);
        scanf("%d",&opcao);
        getchar();
        while(opcao < 1 || opcao > 9){
            printf("\nOpcao invalida! Escolha novamente: ");
            scanf("%d",&opcao);
            getchar();
        }
        limpaTela();
        switch (opcao){
            case 1:{
                //telaCadastrarDefeito();
                break;
            }
            case 2:{
                //telaVotarDefeito();
                break;
            }
            case 3: {
                //telaVoluntariarDefeito();
                break;
            }
            case 4: {
                //telaPesquisarDefeito();
                break;
            }
            case 5: {
                //telaPesquisarProduto();
                break;
            }
            case 6: {
                //telaPesquisarDesenvolvedor();
                break;
            }
            case 7: {
                telaAlterarConta(usuario);
                break;
            }
            case 8: {
                if(telaCancelarConta(usuario) == DESENVOLVEDOR_CONTA_CANCELADA){
                    opcao = 9;
                }
                break;
            }
            default:{
                printf("\nRealizando Logout...\n");
                system("pause");
            }
        }
        limpaTela();
    }while(opcao < 9);
}

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





