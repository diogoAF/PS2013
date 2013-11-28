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

/** \brief Função printa no prompt a solicitação do Voto. Complemento da Tela de Votar Defeito.
 *
 * \param void
 * \return void
 *
 */
void printTelaVotarDefeitoVoto(void){
    printf("Informe o seu VOTO: ");
}

/** \brief Função printa no prompt a solicitação da DESCRICAO. Complemento da Tela de Cadastrar Defeito.
 *
 * \param void
 * \return void
 *
 */
void printTelaCadastrarDefeitoDescricao(void){
    printf("Informe a DESCRICAO: ");
}

/** \brief Função printa no prompt a solicitação do CODIGO DO PRODUTO. Complemento da Tela de Cadastrar Defeito.
 *
 * \param void
 * \return void
 *
 */
void printTelaCadastrarDefeitoCodigo(void){
    printf("Informe o CODIGO do PRODUTO: ");
}

/** \brief Função printa no prompt a solicitação da DATA DE ABERTURA. Complemento da Tela de Cadastrar Defeito.
 *
 * \param void
 * \return void
 *
 */
void printTelaCadastrarDefeitoDataAbertura(void){
    printf("Informe o Dia, Mes e Ano (Data de Abertura): ");
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

/** \brief função que printa no prompt a Tela Inicial com todas as funcionalidades para um Desenvolvedor Lider de Produto.
 *
 * \param nome char* Nome do desenvolvedor que está utilizando o sistema.
 * \return void
 *
 */
void printTelaInicialDesenvolvedorLiderProduto(char * nome){
    printf("** Bem Vindo, %s\n",nome);
    printf("***************************************\n");
    printf("** 1- Cadastrar Defeito              **\n");
    printf("** 2- Votar Defeito                  **\n");
    printf("** 3- Alocar Desenv. p/ Defeito      **\n");
    printf("** 4- Pesquisar Defeito              **\n");
    printf("** 5- Pesquisar Produto              **\n");
    printf("** 6- Pesquisar Desenvolvedor        **\n");
    printf("** 7- Alterar Conta                  **\n");
    printf("** 8- Cancelar Conta                 **\n");
    printf("** 9- Remover Desenv. p/ Defeito     **\n");
    printf("** 10- Logout                        **\n");
    printf("***************************************\n");
    printf("Escolha: ");
}

/** \brief função que printa no prompt a Tela Inicial com todas as funcionalidades para um Desenvolvedor Lider de Projeto.
 *
 * \param nome char* Nome do desenvolvedor que está utilizando o sistema.
 * \return void
 *
 */
void printTelaInicialDesenvolvedorLiderProjeto(char * nome){
    printf("** Bem Vindo, %s\n",nome);
    printf("***************************************\n");
    printf("** 1- Cadastrar Defeito              **\n");
    printf("** 2- Votar Defeito                  **\n");
    printf("** 3- Alocar Lider Produto           **\n");
    printf("** 4- Pesquisar Defeito              **\n");
    printf("** 5- Pesquisar Produto              **\n");
    printf("** 6- Pesquisar Desenvolvedor        **\n");
    printf("** 7- Alterar Conta                  **\n");
    printf("** 8- Cancelar Conta                 **\n");
    printf("** 9- Remover Lider Produto          **\n");
    printf("** 10- Remover Produto               **\n");
    printf("** 11- Cadastrar Produto             **\n");
    printf("** 12- Logout                        **\n");
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

/** \brief Função que printa no prompt a Tela de pesquisar desenvolvedor.
 *
 * \param void
 * \return void
 *
 */
void printTelaPesquisarDesenvolvedor(void){
    printf("**      PESQUISAR DESENVOLVEDOR      **\n");
    printf("***************************************\n");
    printf("Informe o NOME: ");
}

/** \brief Função que printa no prompt a Tela de pesquisar produto.
 *
 * \param void
 * \return void
 *
 */
void printTelaPesquisarProduto(void){
    printf("**         PESQUISAR PRODUTO         **\n");
    printf("***************************************\n");
    printf("Informe o CODIGO: ");
}

/** \brief Função que printa no prompt a Tela de pesquisar defeito.
 *
 * \param void
 * \return void
 *
 */
void printTelaPesquisarDefeito(void){
    printf("**         PESQUISAR DEFEITO         **\n");
    printf("***************************************\n");
    printf("Informe o CODIGO: ");
}

/** \brief Função que printa no prompt a Tela de voluntariar defeito.
 *
 * \param void
 * \return void
 *
 */
void printTelaVoluntariarDefeito(void){
    printf("**        VOLUNTARIAR DEFEITO        **\n");
    printf("***************************************\n");
    printf("Informe o CODIGO do Defeito: ");
}

/** \brief Função que printa no prompt a Tela de votar defeito.
 *
 * \param void
 * \return void
 *
 */
void printTelaVotarDefeito(void){
    printf("**           VOTAR DEFEITO           **\n");
    printf("***************************************\n");
    printf("Informe o CODIGO do Defeito: ");
}

/** \brief Função que printa no prompt a Tela de cadastrar defeito.
 *
 * \param void
 * \return void
 *
 */
void printTelaCadastrarDefeito(void){
    printf("**        CADASTRAR DEFEITO          **\n");
    printf("***************************************\n");
    printf("Informe o CODIGO: ");
}

/** \brief Função que printa no prompt a Tela de alocar desenvolvedor p/ defeito.
 *
 * \param void
 * \return void
 *
 */
void printTelaAlocarDesenvolvedorDefeito(void){
    printf("**     ALOCAR DESENV. P/ DEFEITO     **\n");
    printf("***************************************\n");
    printf("Informe o CODIGO do Defeito: ");
}

/** \brief Função que printa no prompt a Tela de remover desenvolvedor do defeito.
 *
 * \param void
 * \return void
 *
 */
void printTelaRemoverDesenvolvedorDefeito(void){
    printf("**    REMOVER DESENV. DO DEFEITO     **\n");
    printf("***************************************\n");
    printf("Informe o CODIGO do Defeito: ");
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
    if(usuario->categoria == DESENVOLVEDOR_LIDER_PROJETO){
        return(realizarCancelarContaLiderProjeto(usuario));
    }
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

/** \brief função que estrutura a tela de pesquisa de desenvolvedor.
 *
 * \param void
 * \return void
 *
 */
void telaPesquisarDesenvolvedor(void){
    int retorno;
    TipoDesenvolvedor desenvolvedor;
    printCabecalho();
    printTelaPesquisarDesenvolvedor();
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
    realizaPesquisaDesenvolvedor(&desenvolvedor);
}

/** \brief função responsavel por mandar os dados coletados para o módulo de lógica de negócio para o correto processamento, quando recebe o resultado, passa para o usuario.
 *
 * \param desenvolvedor TipoDesenvolvedor* Struct onde o NOME do desenvolvedor que deve ser pesquisado está armazenado.
 * \return void
 *
 */
void realizaPesquisaDesenvolvedor(TipoDesenvolvedor * desenvolvedor){
    if(efetuarPesquisaDesenvolvedor(desenvolvedor) == PESQUISA_DESENVOLVEDOR_ENCONTRADO){
        printf("\nDesenvolvedor Encontrado!");
        printf("\nNOME: %s\nEMAIL: %s\nCategoria: ",desenvolvedor->nome,desenvolvedor->email);
        if(desenvolvedor->categoria == DESENVOLVEDOR_COMUM){
            printf("Desenvolvedor\n");
        }
        if(desenvolvedor->categoria == DESENVOLVEDOR_LIDER_PRODUTO){
            printf("Lider de Produto\n");
        }
        if(desenvolvedor->categoria == DESENVOLVEDOR_LIDER_PROJETO){
            printf("Lider de Projeto\n");
        }
        system("pause");
    }
    else{
        printf("\nDESENVOLVEDOR NAO ENCONTRADO!\n");
        system("pause");
    }
}

/** \brief função que estrutura a tela de pesquisa de produto.
 *
 * \param void
 * \return void
 *
 */
void telaPesquisarProduto(void){
    TipoProduto produto;
    int retorno;
    printCabecalho();
    printTelaPesquisarProduto();
    scanf("%[^\n]s",&produto.codigo);
    getchar();

    retorno = validaCodigo(produto.codigo);
    while(retorno != ENTRADA_VALIDA){
        if(retorno == CODIGO_CARACTER_INVALIDO){
            printf("ERRO!\nCODIGO comporta apenas letras. Informe novamente: ");
            scanf("%[^\n]s",&produto.codigo);
            getchar();
        }
        else if(retorno == CODIGO_DIGITOS_INSUFICIENTES){
            printf("ERRO!\nCODIGO pequeno demais. Informe novamente: ");
            scanf("%[^\n]s",&produto.codigo);
            getchar();
        }
        else if(retorno CODIGO_LIMITE_DIGITOS_EXCEDIDO){
            printf("ERRO!\nCODIGO possui no maximo 4 digitos. Informe novamente: ");
            scanf("%[^\n]s",&produto.codigo);
            getchar();
        }
        retorno = validaCodigo(produto.codigo);
    }

    realizaPesquisaProduto(&produto);
}

/** \brief função responsavel por mandar os dados coletados para o módulo de lógica de negócio para o correto processamento, quando recebe o resultado, passa para o usuario.
 *
 * \param produto TipoProduto* Struct onde o CODIGO do PRODUTO que deve ser pesquisado está armazenado.
 * \return void
 *
 */
void realizaPesquisaProduto(TipoProduto * produto){
    if(efetuarPesquisaProduto(produto) == PESQUISA_PRODUTO_ENCONTRADO){
        printf("\nProduto Encontrado!");
        printf("\nNOME: %s\nCODIGO: %s\nVersão: %s\nE-MAIL DO LIDER: %s\n",produto->nome,produto->codigo,produto->versao,produto->emailLider);
        system("pause");
    }
    else{
        printf("\nPRODUTO NAO ENCONTRADO!\n");
        system("pause");
    }
}

/** \brief função que estrutura a tela de pesquisa de defeito.
 *
 * \param void
 * \return void
 *
 */
void telaPesquisarDefeito(void){
    TipoDefeito defeito;
    int retorno;
    printCabecalho();
    printTelaPesquisarDefeito();
    scanf("%[^\n]s",&defeito.codigo);
    getchar();

    retorno = validaCodigo(defeito.codigo);
    while(retorno != ENTRADA_VALIDA){
        if(retorno == CODIGO_CARACTER_INVALIDO){
            printf("ERRO!\nCODIGO comporta apenas letras. Informe novamente: ");
            scanf("%[^\n]s",&defeito.codigo);
            getchar();
        }
        else if(retorno == CODIGO_DIGITOS_INSUFICIENTES){
            printf("ERRO!\nCODIGO pequeno demais. Informe novamente: ");
            scanf("%[^\n]s",&defeito.codigo);
            getchar();
        }
        else if(retorno CODIGO_LIMITE_DIGITOS_EXCEDIDO){
            printf("ERRO!\nCODIGO possui no maximo 4 digitos. Informe novamente: ");
            scanf("%[^\n]s",&defeito.codigo);
            getchar();
        }
        retorno = validaCodigo(defeito.codigo);
    }

    realizaPesquisaDefeito(&defeito);
}

/** \brief função responsavel por mandar os dados coletados para o módulo de lógica de negócio para o correto processamento, quando recebe o resultado, passa para o usuario.
 *
 * \param defeito TipoDefeito* Struct onde o CODIGO do DEFEITO que deve ser pesquisado está armazenado.
 * \return void
 *
 */
void realizaPesquisaDefeito(TipoDefeito * defeito){
    if(efetuarPesquisaDefeito(defeito) == PESQUISA_DEFEITO_ENCONTRADO){
        printf("\nDefeito Encontrado!");
        printf("\nDESCRICAO: %s\nCODIGO: %s\nCodigo do Produto: %s\nVotos: %d\nData Abertura: %d-%d-%d\nEstado: ",
               defeito->descricao,defeito->codigo,defeito->codigoProduto,defeito->votos,defeito->dataAbertura.dia,defeito->dataAbertura.mes,defeito->dataAbertura.ano);
        switch (defeito->estado){
            case ESTADO_CONFIRMADO:{
                printf("Confirmado\n");
                break;
            }
            case ESTADO_EM_REPARO:{
                printf("Em Reparo\n");
                break;
            }
            case ESTADO_ENCERRADO: {
                printf("Encerrado\n");
                printf("Data Encerramento: %d-%d-%d\n",defeito->dataEncerramento.dia,defeito->dataEncerramento.mes,defeito->dataEncerramento.ano);
                break;
            }
            case ESTADO_NOVO: {
                printf("Novo\n");
                break;
            }
            default:{
                printf("Reparado\n");
            }
        }
        system("pause");
    }
    else{
        printf("\nDEFEITO NAO ENCONTRADO!\n");
        system("pause");
    }
}

/** \brief função que estrutura a tela de voluntariar de defeito.
 *
 * \param void
 * \return void
 *
 */
void telaVoluntariarDefeito(void){
    TipoDefeito defeito;
    int retorno;
    printCabecalho();
    printTelaVoluntariarDefeito();
    scanf("%[^\n]s",&defeito.codigo);
    getchar();
    retorno = validaCodigo(defeito.codigo);
    while(retorno != ENTRADA_VALIDA){
        if(retorno == CODIGO_CARACTER_INVALIDO){
            printf("ERRO!\nCODIGO comporta apenas letras. Informe novamente: ");
            scanf("%[^\n]s",&defeito.codigo);
            getchar();
        }
        else if(retorno == CODIGO_DIGITOS_INSUFICIENTES){
            printf("ERRO!\nCODIGO pequeno demais. Informe novamente: ");
            scanf("%[^\n]s",&defeito.codigo);
            getchar();
        }
        else if(retorno CODIGO_LIMITE_DIGITOS_EXCEDIDO){
            printf("ERRO!\nCODIGO possui no maximo 4 digitos. Informe novamente: ");
            scanf("%[^\n]s",&defeito.codigo);
            getchar();
        }
        retorno = validaCodigo(defeito.codigo);
    }
    realizaVoluntariarDefeito(&defeito);
}

/** \brief função responsavel por mandar os dados coletados na "telaVoluntariarDefeito" para o módulo de lógica de negócio para o correto processamento, quando recebe o resultado, passa para o usuario.
 *
 * \param defeito TipoDefeito* Struct onde o CODIGO do DEFEITO que deve ser pesquisado está armazenado.
 * \return void
 *
 */
void realizaVoluntariarDefeito(TipoDefeito * defeito){
    int retorno;
    retorno = efetuarVoluntariarDefeito(defeito);
    if(retorno == DEFEITO_VOLUNTARIO_ACEITO){
        printf("\nVoluntario registrado! Aguarde futuro contato.\n");
    }
    if(retorno == DEFEITO_DESENVOLVEDOR_JA_VOLUNTARIO){
        printf("\nVoluntario ja foi registrado! Por favor, aguarde futuro contato.\n");
    }
    if(retorno == DEFEITO_JA_EM_REPARO){
        printf("\nDefeito ja esta sendo reparado por outro desenvolvedor!\n");
    }
    if(retorno == DEFEITO_JA_ENCERRADO){
        printf("\nDefeito ja reparado.\n");
    }
    if(retorno == PESQUISA_DEFEITO_NAO_ENCONTRADO){
        printf("\nDEFEITO NAO ENCONTRADO!\n");
    }
    system("pause");
}

/** \brief função que estrutura a tela de votar no defeito.
 *
 * \param void
 * \return void
 *
 */
void telaVotarDefeito(void){
    char codigo[VET_CODIGO];
    int retorno, voto;
    printCabecalho();
    printTelaVotarDefeito();
    scanf("%[^\n]s",&codigo);
    getchar();
    retorno = validaCodigo(codigo);
    while(retorno != ENTRADA_VALIDA){
        if(retorno == CODIGO_CARACTER_INVALIDO){
            printf("ERRO!\nCODIGO comporta apenas letras. Informe novamente: ");
            scanf("%[^\n]s",&codigo);
            getchar();
        }
        else if(retorno == CODIGO_DIGITOS_INSUFICIENTES){
            printf("ERRO!\nCODIGO pequeno demais. Informe novamente: ");
            scanf("%[^\n]s",&codigo);
            getchar();
        }
        else if(retorno CODIGO_LIMITE_DIGITOS_EXCEDIDO){
            printf("ERRO!\nCODIGO possui no maximo 4 digitos. Informe novamente: ");
            scanf("%[^\n]s",&codigo);
            getchar();
        }
        retorno = validaCodigo(codigo);
    }
    printTelaVotarDefeitoVoto();
    scanf("%d",&voto);
    retorno = validaVoto(voto);
    while(retorno != ENTRADA_VALIDA){
        if(retorno == VOTO_CARACTER_INVALIDO){
            printf("ERRO!\nVOTO comporta apenas numeros. Informe novamente: ");
            scanf("%d",&voto);
            getchar();
        }
        else if(retorno == VOTO_INVALIDO){
            printf("ERRO!\nVOTO comporta apenas valores entre 0 e 100. Informe novamente: ");
            scanf("%d",&voto);
            getchar();
        }
        retorno = validaVoto(voto);
        printf("\n");
    }
    realizaVotarDefeito(codigo,voto);
}

/** \brief função responsavel por mandar os dados coletados na "telaVotarDefeito" para o módulo de lógica de negócio para o correto processamento, quando recebe o resultado, passa para o usuario.
 *
 * \param codigo char* codigo do defeito que esta sendo votado.
 * \param voto int valor do voto.
 * \return void
 *
 */
void realizaVotarDefeito(char * codigo, int voto){
    int retorno;
    retorno = efetuarVotarDefeito(codigo,voto);
    if(retorno == DEFEITO_VOTADO){
        printf("\nVoto computado com sucesso!\n");
    }
    if(retorno == DEFEITO_JA_EM_REPARO){
        printf("\nDefeito ja esta sendo reparado! Voto nao computado.\n");
    }
    if(retorno == DEFEITO_JA_ENCERRADO){
        printf("\nDefeito ja reparado. Voto nao computado.\n");
    }
    if(retorno == PESQUISA_DEFEITO_NAO_ENCONTRADO){
        printf("\nDEFEITO NAO ENCONTRADO!\n");
    }
    system("pause");
}

/** \brief Função que coleta e valida os dados necessarios para o cadastro do defeito.
 *
 * \param void
 * \return void
 *
 */
void telaCadastrarDefeito(void){
    TipoDefeito defeito;
    int retorno;

    printCabecalho();
    printTelaCadastrarDefeito();
    scanf("%[^\n]s",&defeito.codigo);
    getchar();
    retorno = validaCodigo(defeito.codigo);
    while(retorno != ENTRADA_VALIDA){
        if(retorno == CODIGO_CARACTER_INVALIDO){
            printf("ERRO!\nCODIGO comporta apenas letras. Informe novamente: ");
            scanf("%[^\n]s",&defeito.codigo);
            getchar();
        }
        else if(retorno == CODIGO_DIGITOS_INSUFICIENTES){
            printf("ERRO!\nCODIGO pequeno demais. Informe novamente: ");
            scanf("%[^\n]s",&defeito.codigo);
            getchar();
        }
        else if(retorno CODIGO_LIMITE_DIGITOS_EXCEDIDO){
            printf("ERRO!\nCODIGO possui no maximo 4 digitos. Informe novamente: ");
            scanf("%[^\n]s",&defeito.codigo);
            getchar();
        }
        retorno = validaCodigo(defeito.codigo);
    }

    printTelaCadastrarDefeitoDescricao();
    scanf("%[^\n]s",&defeito.descricao);
    getchar();
    retorno = validaDescricao(defeito.descricao);
    while(retorno != ENTRADA_VALIDA){
        if(retorno == DESCRICAO_DIGITOS_INSUFICIENTES){
            printf("ERRO!\nDESCRICAO pequeno demais. Informe novamente: ");
            scanf("%[^\n]s",&defeito.descricao);
            getchar();
        }
        retorno = validaDescricao(defeito.descricao);
    }

    printTelaCadastrarDefeitoCodigo();
    scanf("%[^\n]s",&defeito.codigoProduto);
    getchar();
    retorno = validaCodigo(defeito.codigoProduto);
    while(retorno != ENTRADA_VALIDA){
        if(retorno == CODIGO_CARACTER_INVALIDO){
            printf("ERRO!\nCODIGO comporta apenas letras. Informe novamente: ");
            scanf("%[^\n]s",&defeito.codigoProduto);
            getchar();
        }
        else if(retorno == CODIGO_DIGITOS_INSUFICIENTES){
            printf("ERRO!\nCODIGO pequeno demais. Informe novamente: ");
            scanf("%[^\n]s",&defeito.codigoProduto);
            getchar();
        }
        else if(retorno CODIGO_LIMITE_DIGITOS_EXCEDIDO){
            printf("ERRO!\nCODIGO possui no maximo 4 digitos. Informe novamente: ");
            scanf("%[^\n]s",&defeito.codigoProduto);
            getchar();
        }
        retorno = validaCodigo(defeito.codigoProduto);
    }

    printTelaCadastrarDefeitoDataAbertura();
    scanf("%d %d %d",&defeito.dataAbertura.dia,&defeito.dataAbertura.mes,&defeito.dataAbertura.ano);
    getchar();
    retorno = validaData(defeito.dataAbertura);
    while(retorno != ENTRADA_VALIDA){
        if(retorno == DATA_ANO_INVALIDO){
            printf("ERRO!\nANO invalido. Informe novamente: ");
            scanf("%d",&defeito.dataAbertura.ano);
            getchar();
        }
        if(retorno == DATA_DIA_INVALIDO){
            printf("ERRO!\nDIA invalido. Informe novamente: ");
            scanf("%d",&defeito.dataAbertura.dia);
            getchar();
        }
        if(retorno == DATA_MES_INVALIDO){
            printf("ERRO!\nMES invalido. Informe novamente: ");
            scanf("%d",&defeito.dataAbertura.mes);
            getchar();
        }
        retorno = validaData(defeito.dataAbertura);
    }
    realizaCadastrarDefeito(&defeito);
}

/** \brief Função responsavel por enviar os dados coletados na "telaCadastrarDefeito" para o módulo de logica de negocio e mostrar para o usuario o resultado do processamento.
 *
 * \param defeito TipoDefeito* Struct que contem os dados do defeito a ser cadastrado.
 * \return void
 *
 */
void realizaCadastrarDefeito(TipoDefeito * defeito){
    defeito->estado = ESTADO_NOVO;
    defeito->votos = 0;
    if(efetuarCadastrarDefeito(defeito) == DEFEITO_CADASTRADO){
        printf("\nDefeito Cadastrado com Sucesso!\n");
        printf("CODIGO: %s\nDESCRICAO: %s\nCODIGO DO PRODUTO: %s\nVotos: %d\nData de Abertura: %d-%d-%d\nEstado: Novo\n",
               defeito->codigo,defeito->descricao,defeito->codigoProduto,defeito->votos,defeito->dataAbertura.dia,defeito->dataAbertura.mes,defeito->dataAbertura.ano);
    }else{
        printf("\nERRO! Defeito ja cadastrado!\n");
    }
    system("pause");
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
                telaCadastrarDefeito();
                break;
            }
            case 2:{
                telaVotarDefeito();
                break;
            }
            case 3: {
                telaVoluntariarDefeito();
                break;
            }
            case 4: {
                telaPesquisarDefeito();
                break;
            }
            case 5: {
                telaPesquisarProduto();
                break;
            }
            case 6: {
                telaPesquisarDesenvolvedor();
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

/** \brief Função que coleta e valida os dados necessarios para o cadastro do defeito.
 *
 * \param void
 * \return void
 *
 */
void alocarDesenvolvedorDefeito(void){
    char email[VET_EMAIL], codigo[VET_CODIGO];
    int retorno;

    printCabecalho();
    printTelaAlocarDesenvolvedorDefeito();
    scanf("%[^\n]s",&codigo);
    getchar();
    retorno = validaCodigo(codigo);
    while(retorno != ENTRADA_VALIDA){
        if(retorno == CODIGO_CARACTER_INVALIDO){
            printf("ERRO!\nCODIGO comporta apenas letras. Informe novamente: ");
            scanf("%[^\n]s",&codigo);
            getchar();
        }
        else if(retorno == CODIGO_DIGITOS_INSUFICIENTES){
            printf("ERRO!\nCODIGO pequeno demais. Informe novamente: ");
            scanf("%[^\n]s",&codigo);
            getchar();
        }
        else if(retorno CODIGO_LIMITE_DIGITOS_EXCEDIDO){
            printf("ERRO!\nCODIGO possui no maximo 4 digitos. Informe novamente: ");
            scanf("%[^\n]s",&codigo);
            getchar();
        }
        retorno = validaCodigo(codigo);
    }

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
    realizaAlocarDesenvolvedorDefeito(codigo, email);
}

/** \brief Função responsavel por enviar os dados coletados na "alocarDesenvolvedorDefeito" para o módulo de logica de negocio e mostrar para o usuario o resultado do processamento.
 *
 * \param codigo char* Codigo do defeito ao qual o desenvolvedor será alocado.
 * \param email char* E-mail do desenvolvedor que será alocao ao defeito.

 * \return void
 *
 */
void realizaAlocarDesenvolvedorDefeito(char * codigo, char * email){
    int retorno;
    retorno = efetuarAlocarDesenvolvedorDefeito(codigo, email);
    if(retorno == DESENVOLVEDOR_ALOCADO_DEFEITO){
        printf("\nDesenvolvedor alocado com Sucesso!\n");
    }else if(retorno == DESENVOLVEDOR_NAO_PODE_SER_ALOCADO){
        printf("\nERRO! Desenvolvedor nao pode ser alocado ao defeito!\n");
    }else if(retorno == PESQUISA_DEFEITO_NAO_ENCONTRADO){
        printf("\nERRO! Defeito informado nao existe!\n");
    }else if(retorno == PESQUISA_DESENVOLVEDOR_NAO_ENCONTRADO){
        printf("\nERRO! Desenvolvedor informado nao existe!\n");
    }
    system("pause");
}

/** \brief Função que coleta e valida o codigo de qual Defeito o desenvolvedor sera removido. Como cada defeito é corrigido por apenas um desenvolvedor, não é necessário perguntar o e-mail do desenvolvedor.
 *
 * \param void
 * \return void
 *
 */
void removerDesenvolvedorDefeito(void){
    char codigo[VET_CODIGO];
    int retorno;

    printCabecalho();
    printTelaRemoverDesenvolvedorDefeito();
    scanf("%[^\n]s",&codigo);
    getchar();
    retorno = validaCodigo(codigo);
    while(retorno != ENTRADA_VALIDA){
        if(retorno == CODIGO_CARACTER_INVALIDO){
            printf("ERRO!\nCODIGO comporta apenas letras. Informe novamente: ");
            scanf("%[^\n]s",&codigo);
            getchar();
        }
        else if(retorno == CODIGO_DIGITOS_INSUFICIENTES){
            printf("ERRO!\nCODIGO pequeno demais. Informe novamente: ");
            scanf("%[^\n]s",&codigo);
            getchar();
        }
        else if(retorno CODIGO_LIMITE_DIGITOS_EXCEDIDO){
            printf("ERRO!\nCODIGO possui no maximo 4 digitos. Informe novamente: ");
            scanf("%[^\n]s",&codigo);
            getchar();
        }
        retorno = validaCodigo(codigo);
    }
    realizaRemoverDesenvolvedorDefeito(codigo);
}

/** \brief Função responsavel por enviar o dado coletado na função "removerDesenvolvedorDefeito" para o módulo de logica de negocio e mostrar para o usuario o resultado do processamento.
 *
 * \param codigo char* Codigo do defeito ao qual o desenvolvedor será removido.
 * \return void
 *
 */
void realizaRemoverDesenvolvedorDefeito(char * codigo){
    int retorno;
    retorno = efetuarRemoverDesenvolvedorDefeito(codigo);
    if(retorno == DESENVOLVEDOR_REMOVIDO_DEFEITO){
        printf("\nDesenvolvedor removido do defeito com Sucesso!\n");
    }else if(retorno == DEFEITO_JA_ENCERRADO){
        printf("\nERRO! Defeito ja encerrado!\n");
    }else if(retorno == PESQUISA_DEFEITO_NAO_ENCONTRADO){
        printf("\nERRO! Defeito informado nao existe!\n");
    }else if(retorno == DEFEITO_NAO_POSSUI_DESENVOLVEDOR_ALOCADO){
        printf("\nERRO! Defeito nao possui desenvolvedor alocado para ser removido!\n");
    }
    system("pause");
}

/** \brief Função responsavel pelo menu inicial apresentados as funcionalidades desponiveis para o Desenvolvedor Lider Produto.
 *
 * \param usuario TipoDesenvolvedor* Struct contendo as informações do usuário do sistema.
 * \return void
 *
 */
void telaInicialDesenvolvedorLiderProduto(TipoDesenvolvedor * usuario){
    int opcao;

    do{
        printCabecalho();
        printTelaInicialDesenvolvedorLiderProduto(usuario->nome);
        scanf("%d",&opcao);
        getchar();
        while(opcao < 1 || opcao > 10){
            printf("\nOpcao invalida! Escolha novamente: ");
            scanf("%d",&opcao);
            getchar();
        }
        limpaTela();
        switch (opcao){
            case 1:{
                telaCadastrarDefeito();
                break;
            }
            case 2:{
                telaVotarDefeito();
                break;
            }
            case 3: {
                alocarDesenvolvedorDefeito();
                break;
            }
            case 4: {
                telaPesquisarDefeito();
                break;
            }
            case 5: {
                telaPesquisarProduto();
                break;
            }
            case 6: {
                telaPesquisarDesenvolvedor();
                break;
            }
            case 7: {
                telaAlterarConta(usuario);
                break;
            }
            case 8: {
                if(telaCancelarConta(usuario) == DESENVOLVEDOR_CONTA_CANCELADA){
                    opcao = 10;
                }
                break;
            }
            case 9: {
                removerDesenvolvedorDefeito();
                break;
            }
            default:{
                printf("\nRealizando Logout...\n");
                system("pause");
            }
        }
        limpaTela();
    }while(opcao < 10);
}

/** \brief Função que passa os dados do lider de projeto que deseja ter a conta deletada para o módulo de negócio.
 *
 * \param usuario TipoDesenvolvedor* Lider de Projeto utilizando o sistema.
 * \return int Código de Retorno.
 *
 */
int realizarCancelarContaLiderProjeto(TipoDesenvolvedor * usuario){
    char email[VET_EMAIL];
    int retorno;

    printf("\nInforme o EMAIL do proximo Lider de Projeto: ");
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
    retorno = efetuarCancelarContaLiderProjeto(usuario,email);
    if(retorno == DESENVOLVEDOR_CONTA_CANCELADA){
        printf("\nCONTA CANCELADA COM SUCESSO!!\n");
        system("pause");
        limpaTela();
        return(DESENVOLVEDOR_CONTA_CANCELADA);
    }else if(retorno == PESQUISA_DESENVOLVEDOR_NAO_ENCONTRADO){
        printf("\nERRO! O Desenvolvedor informado nao existe!\n");
        system("pause");
        limpaTela();
        return(PESQUISA_DESENVOLVEDOR_NAO_ENCONTRADO);
    }else{
        printf("\nERRO! SUA CONTA NAO PODE SER CANCELADA!\n");
        system("pause");
        return(DESENVOLVEDOR_CONTA_NAO_PODE_SER_CANCELADA);
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
            telaInicialDesenvolvedorLiderProduto(usuario);
        }
        if(usuario->categoria == DESENVOLVEDOR_LIDER_PROJETO){
            telaInicialDesenvolvedorLiderProjeto(usuario);
        }
    }else{
        printf("\nERRO! LOGIN FALHOU!\n");
        system("pause");
    }
}

/** \brief Função responsavel pelo menu inicial apresentados as funcionalidades desponiveis para o Desenvolvedor Lider Produto.
 *
 * \param usuario TipoDesenvolvedor* Struct contendo as informações do usuário do sistema.
 * \return void
 *
 */
void telaInicialDesenvolvedorLiderProjeto(TipoDesenvolvedor * usuario){
    int opcao;

    do{
        printCabecalho();
        printTelaInicialDesenvolvedorLiderProjeto(usuario->nome);
        scanf("%d",&opcao);
        getchar();
        while(opcao < 1 || opcao > 12){
            printf("\nOpcao invalida! Escolha novamente: ");
            scanf("%d",&opcao);
            getchar();
        }
        limpaTela();
        switch (opcao){
            case 1:{
                telaCadastrarDefeito();
                break;
            }
            case 2:{
                telaVotarDefeito();
                break;
            }
            case 3: {
                //alocarLiderProduto();
                break;
            }
            case 4: {
                telaPesquisarDefeito();
                break;
            }
            case 5: {
                telaPesquisarProduto();
                break;
            }
            case 6: {
                telaPesquisarDesenvolvedor();
                break;
            }
            case 7: {
                telaAlterarConta(usuario);
                break;
            }
            case 8: {
                if(telaCancelarConta(usuario) == DESENVOLVEDOR_CONTA_CANCELADA){
                    opcao = 12;
                }
                break;
            }
            case 9: {
                //removerLiderProduto();
                break;
            }
            case 10: {
                //removerProduto();
                break;
            }
            case 11: {
                //cadastrarProduto();
                break;
            }
            default:{
                printf("\nRealizando Logout...\n");
                system("pause");
            }
        }
        limpaTela();
    }while(opcao < 12);
}


}
