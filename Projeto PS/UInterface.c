#define UINTERFACE_SERV
#include <stdio.h>
#include <stdlib.h>
#include "UInterface.h"
#include "ValidacaoEntrada.h"
#include "SLogica.h"


void limpaTela(void){
    system("cls");
}


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


void printCabecalho(void){
    printf("***************************************\n");
    printf("***************************************\n");
    printf("**           Bug DataBase            **\n");
    printf("***************************************\n");
    printf("***************************************\n");
}


void printTelaInicial(void){
    printf("** 1- Cadastrar                      **\n");
    printf("** 2- Login                          **\n");
    printf("** 3- Sair                           **\n");
    printf("***************************************\n");
    printf("Escolha: ");
}


void printTelaCadastroDesenvolvedorNome(void){
    printf("**      CADASTRAR DESENVOLVEDOR      **\n");
    printf("***************************************\n");
    printf("Informe o NOME: ");
}


void printTelaCadastroDesenvolvedorSenha(void){
    printf("Informe a SENHA: ");
}


void printTelaCadastroDesenvolvedorEmail(void){
    printf("Informe o E-MAIL: ");
}


void printTelaVotarDefeitoVoto(void){
    printf("Informe o seu VOTO: ");
}


void printTelaCadastrarDefeitoDescricao(void){
    printf("Informe a DESCRICAO: ");
}


void printTelaCadastrarDefeitoCodigo(void){
    printf("Informe o CODIGO do PRODUTO: ");
}


void printTelaCadastrarDefeitoDataAbertura(void){
    printf("Informe o Dia, Mes e Ano (Data de Abertura): ");
}


void printTelaCadastrarProdutoNome(void){
    printf("Informe o NOME: ");
}


void printTelaCadastrarProdutoVersao(void){
    printf("Informe a VERSAO: ");
}


void printTelaLogin(void){
    printf("**              LOGIN                **\n");
    printf("***************************************\n");
}


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


void printTelaAlterarCadastroNome(void){
    printf("**         ALTERAR CADASTRO          **\n");
    printf("***************************************\n");
    printf("Informe o NOME: ");
}


void printTelaCancelarConta(void){
    printf("**          CANCELAR CONTA           **\n");
    printf("***************************************\n");
    printf("Tem certeza que deseja cancelar sua conta?[s/n]");
}


void printTelaPesquisarDesenvolvedor(void){
    printf("**      PESQUISAR DESENVOLVEDOR      **\n");
    printf("***************************************\n");
    printf("Informe o NOME: ");
}


void printTelaPesquisarProduto(void){
    printf("**         PESQUISAR PRODUTO         **\n");
    printf("***************************************\n");
    printf("Informe o CODIGO: ");
}


void printTelaPesquisarDefeito(void){
    printf("**         PESQUISAR DEFEITO         **\n");
    printf("***************************************\n");
    printf("Informe o CODIGO: ");
}


void printTelaVoluntariarDefeito(void){
    printf("**        VOLUNTARIAR DEFEITO        **\n");
    printf("***************************************\n");
    printf("Informe o CODIGO do Defeito: ");
}


void printTelaVotarDefeito(void){
    printf("**           VOTAR DEFEITO           **\n");
    printf("***************************************\n");
    printf("Informe o CODIGO do Defeito: ");
}


void printTelaCadastrarDefeito(void){
    printf("**        CADASTRAR DEFEITO          **\n");
    printf("***************************************\n");
    printf("Informe o CODIGO: ");
}


void printTelaCadastrarProduto(void){
    printf("**        CADASTRAR PRODUTO          **\n");
    printf("***************************************\n");
    printf("Informe o CODIGO: ");
}


void printTelaAlocarDesenvolvedorDefeito(void){
    printf("**     ALOCAR DESENV. P/ DEFEITO     **\n");
    printf("***************************************\n");
    printf("Informe o CODIGO do Defeito: ");
}


void printTelaAlocarLiderProduto(void){
    printf("**      ALOCAR LIDER DE PRODUTO      **\n");
    printf("***************************************\n");
    printf("Informe o CODIGO do Produto: ");
}


void printTelaRemoverLiderProduto(void){
    printf("**      REMOVER LIDER DE PRODUTO      **\n");
    printf("***************************************\n");
    printf("Informe o CODIGO do Produto: ");
}


void printTelaRemoverProduto(void){
    printf("**          REMOVER PRODUTO          **\n");
    printf("***************************************\n");
    printf("Informe o CODIGO do Produto: ");
}


void printTelaRemoverDesenvolvedorDefeito(void){
    printf("**    REMOVER DESENV. DO DEFEITO     **\n");
    printf("***************************************\n");
    printf("Informe o CODIGO do Defeito: ");
}


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
}


void telaAlocarLiderProduto(void){
    char email[VET_EMAIL], codigo[VET_CODIGO];
    int retorno;

    printCabecalho();
    printTelaAlocarLiderProduto();
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
    realizaAlocarLiderProduto(codigo, email);
}


void realizaAlocarLiderProduto(char * codigo, char * email){
    int retorno;
    retorno = efetuarAlocarLiderProduto(codigo, email);
    if(retorno == PRODUTO_LIDER_ALOCADO){
        printf("\nLider alocado com Sucesso!\n");
    }else if(retorno == PRODUTO_DESENVOLVEDOR_NAO_PODE_SER_LIDER){
        printf("\nERRO! Desenvolvedor nao pode ser alocado como lider de produto!\n");
    }else if(retorno == PESQUISA_PRODUTO_NAO_ENCONTRADO){
        printf("\nERRO! Produto informado nao existe!\n");
    }else if(retorno == PESQUISA_DESENVOLVEDOR_NAO_ENCONTRADO){
        printf("\nERRO! Desenvolvedor informado nao existe!\n");
    }else if(retorno == PRODUTO_JA_TEM_LIDER){
        printf("\nERRO! O Produto informado ja possui lider alocado!\n");
    }
    system("pause");
}


void telaRemoverLiderProduto(void){
    char codigo[VET_CODIGO];
    int retorno;

    printCabecalho();
    printTelaRemoverLiderProduto();
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
    realizaRemoverLiderProduto(codigo);
}


void realizaRemoverLiderProduto(char * codigo){
    int retorno;
    retorno = efetuarRemoverLiderProduto(codigo);
    if(retorno == PRODUTO_LIDER_REMOVIDO){
        printf("\nLider removido com Sucesso!\n");
    }else if(retorno == PESQUISA_PRODUTO_NAO_ENCONTRADO){
        printf("\nERRO! Produto informado nao existe!\n");
    }else if(retorno == PRODUTO_SEM_LIDER){
        printf("\nERRO! Produto informado nao possui lider!\n");
    }
    system("pause");
}


void telaRemoverProduto(void){
    char codigo[VET_CODIGO];
    int retorno;

    printCabecalho();
    printTelaRemoverProduto();
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
    realizaRemoverProduto(codigo);
}


void realizaRemoverProduto(char * codigo){
    int retorno;
    retorno = efetuarRemoverProduto(codigo);
    if(retorno == PRODUTO_REMOVIDO){
        printf("\nProduto removido com Sucesso!\n");
    }else if(retorno == PESQUISA_PRODUTO_NAO_ENCONTRADO){
        printf("\nERRO! Produto informado nao existe!\n");
    }else if(retorno == PRODUTO_NAO_PODE_SER_REMOVIDO){
        printf("\nERRO! Produto informado nao pode ser removido!\n");
    }
    system("pause");
}


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


void telaCadastrarProduto(void){
    TipoProduto produto;
    int retorno;

    printCabecalho();
    printTelaCadastrarProduto();
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
    printTelaCadastrarProdutoNome();
    scanf("%[^\n]s",&produto.nome);
    getchar();
    retorno = validaNome(produto.nome);
    while(retorno != ENTRADA_VALIDA){
        if(retorno == NOME_CARACTER_INVALIDO){
            printf("ERRO!\nNOME comporta apenas letras. Informe novamente: ");
            scanf("%[^\n]s",&produto.nome);
            getchar();
        }
        else if(retorno == NOME_DIGITOS_INSUFICIENTES){
            printf("ERRO!\nNOME pequeno demais. Informe novamente: ");
            scanf("%[^\n]s",&produto.nome);
            getchar();
        }
        else if(retorno NOME_LIMITE_DIGITOS_EXCEDIDO){
            printf("ERRO!\nNOME possui no maximo 15 digitos. Informe novamente: ");
            scanf("%[^\n]s",&produto.nome);
            getchar();
        }
        retorno = validaNome(produto.nome);
    }
    printTelaCadastroDesenvolvedorEmail();
    scanf("%[^\n]s",&produto.emailLider);
    getchar();
    retorno = validaEmail(produto.emailLider);
    while(retorno != ENTRADA_VALIDA){
        if(retorno == EMAIL_CARACTER_INVALIDO){
            printf("ERRO!\nEMAIL informado contem digito invalido. Informe novamente: ");
            scanf("%[^\n]s",&produto.emailLider);
            getchar();
        }
        if(retorno == EMAIL_FORMATO_INVALIDO){
            printf("ERRO!\nEMAIL formato invalido. Informe novamente: ");
            scanf("%[^\n]s",&produto.emailLider);
            getchar();
        }
        else if(retorno == EMAIL_DIGITOS_INSUFICIENTES){
            printf("ERRO!\nEMAIL nao pode ter menos que 3 digitos. Informe novamente: ");
            scanf("%[^\n]s",&produto.emailLider);
            getchar();
        }
        else if(retorno EMAIL_LIMITE_DIGITOS_EXCEDIDO){
            printf("ERRO!\nEMAIL nao pode ter mais do que 20 digitos. Informe novamente: ");
            scanf("%[^\n]s",&produto.emailLider);
            getchar();
        }
        retorno = validaEmail(produto.emailLider);
    }
    printTelaCadastrarProdutoVersao();
    scanf("%[^\n]s",&produto.versao);
    getchar();
    retorno = validaVersao(produto.versao);
    while(retorno != ENTRADA_VALIDA){
        if(retorno == VERSAO_CODIGO_INVALIDO){
            printf("\nERRO!\nVERSAO invalida. Informe novamente: ");
            scanf("%[^\n]s",&produto.versao);
            getchar();
        }else if(retorno == VERSAO_FORMATO_INVALIDO){
            printf("\nERRO!\nVERSAO nao esta no formato valido. Informe novamente: ");
            scanf("%[^\n]s",&produto.versao);
            getchar();
        }
        retorno = validaVersao(produto.versao);
    }
    realizaCadastrarProduto(&produto);
}


void realizaCadastrarProduto(TipoProduto * produto){
    int retorno;
    retorno = efetuarCadastrarProduto(produto);
    if(retorno == PRODUTO_CADASTRADO){
        printf("\Produto Cadastrado com Sucesso!\n");
        printf("CODIGO: %s\nNOME: %s\nVERSAO: %s\nE-Mail do Lider de Produto: %s\n",
               produto->codigo,produto->nome,produto->versao,produto->emailLider);
    }else{
        printf("\nERRO! Produto ja cadastrado!\n");
    }
    system("pause");
}


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
                telaAlocarLiderProduto();
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
                telaRemoverLiderProduto();
                break;
            }
            case 10: {
                telaRemoverProduto();
                break;
            }
            case 11: {
                telaCadastrarProduto();
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
