/*! \file UInterface.h
    \brief Módulo responsável por realizar a interface entre o usuario e as funcionalidades do sistema, daí o seu nome.
    Tal interface eh realizada perguntando ao usuario o que deseja fazer e coletando os dados necessarios para a realizacao
    das tarefas solicitadas pelo usuario, sempre validando os dados inseridos.
    O modulo eh cliente da logica de negocio, informando ao usuario sobre o resultado de suas solicitacoes,
    sendo elas notificacoes de sucesso ou de erro. A interface optada pelo grupo foi no modo textual.
*/

#ifndef UINTERFACE_H_INCLUDED
#define UINTERFACE_H_INCLUDED
#ifdef UINTERFACE_SERV
#define EXT
#else
#define EXT extern
#endif

#include "PacoteDeStructs.h"

/** \brief Função responsável por iniciar as funções básicas apresentadas no menu inicial do Software.
 *
 * \param void
 * \return void
 *
 */
EXT void start(void);

/** \brief A função printa no prompt o Cabeçalho do Software.
 *
 * \param void
 * \return void
 *
 */
EXT void printCabecalho(void);

/** \brief A função limpa a tela do prompt.
 *
 * \param void
 * \return void
 *
 */
EXT void limpaTela(void);

/** \brief A função printa no prompt as nuancias da Tela Inicial
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaInicial(void);

/** \brief Função printa no prompt o inicio da Tela de Cadastro de Desenvolvedor. Também usada para o cadastro inicial.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaCadastroDesenvolvedorNome(void);

/** \brief Função printa no prompt a solicitação da senha.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaCadastroDesenvolvedorSenha(void);

/** \brief Função printa no prompt a solicitação do E-mail.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaCadastroDesenvolvedorEmail(void);

/** \brief Função responsavel por efetivamente coletar e validar os dados de entrada para o cadastro de um Desenvolvedor.
 *
 * \return void
 */
EXT void telacadastraDesenvolvedor(void);

/** \brief  Função envia os dados do desenvolvedor ao módulo de lógica de negócio para processamento do cadastro.
 *
 * \param desenvolvedor TipoDesenvolvedor* Struct  que armazena os dados do possivel futuro desenvolvedor.
 * \return void
 *
 */
EXT void cadastraDesenvolvedor(TipoDesenvolvedor *);

/** \brief Função que coleta e valida os dados necessários para a realização do Login.
 *
 * \return void
 */
EXT void telaRealizaLogin(void);

/** \brief função que envia os dados de login para o módulo de lógica de negócio.
 *
 * \param usuario TipoDesenvolvedor* struct onde será armazenado os dados do usuario do sistema, caso o login seja bem sucedido.
 * \return void
 *
 */
EXT void realizaLogin(TipoDesenvolvedor *);

/** \brief Função printa no prompt a solicitação do Login.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaLogin(void);



EXT void telaInicialDesenvolvedorComum(TipoDesenvolvedor *);

/** \brief Função responsavel pelo menu inicial apresentados as funcionalidades desponiveis para o Desenvolvedor Lider Produto.
 *
 * \param usuario TipoDesenvolvedor* Struct contendo as informações do usuário do sistema.
 * \return void
 *
 */
EXT void telaInicialDesenvolvedorLiderProduto(TipoDesenvolvedor *);

/** \brief Função responsavel pelo menu inicial apresentados as funcionalidades desponiveis para o Desenvolvedor Lider Produto.
 *
 * \param usuario TipoDesenvolvedor* Struct contendo as informações do usuário do sistema.
 * \return void
 *
 */
EXT void telaInicialDesenvolvedorLiderProjeto(TipoDesenvolvedor *);

/** \brief função que printa no prompt a Tela Inicial com todas as funcionalidades para um Desenvolvedor Comum.
 *
 * \param nome char* Nome do desenvolvedor que está utilizando o sistema.
 * \return void
 *
 */
EXT void printtelaInicialDesenvolvedorComum(char *);

/** \brief Função responsavel por coletar e validar os dados necessarios para a realizacao da alteracao do cadastro do usuario. Caso ocorra algum erro inesperado, o usuario é avisado e os dados antigos são recuperados.
 *
 * \param usuario TipoDesenvolvedor* Dados do usuario do sistema.
 * \return void
 *
 */
EXT void telaAlterarConta(TipoDesenvolvedor *);

/** \brief Função que printa no prompt a Tela de alterar cadastro.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaAlterarCadastroNome(void);

/** \brief Passa os dados para serem alterados para o modulo de negócio.
 *
 * \param usuario TipoDesenvolvedor* Novos dados atualizados do usuario.
 * \return int Caso ocorra algum erro inesperado, será retornado o código ERRO_INESPERADO.
 *
 */
EXT int realizaAlteracaoCadastro(TipoDesenvolvedor *);

/** \brief Função responsavel pela tela de cancelamento de conta do usuario.
 *
 * \param usuario TipoDesenvolvedor* Usuario utilizando o sistema.
 * \return int Código de Retorno
 *
 */
EXT int telaCancelarConta(TipoDesenvolvedor *);

/** \brief Função que printa no prompt a Tela de cancelar conta.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaCancelarConta(void);

/** \brief Função que passa os dados do usuario que deseja ter a conta deletada para o módulo de negócio.
 *
 * \param usuario TipoDesenvolvedor* Usuario utilizando o sistema.
 * \return int Código de Retorno.
 *
 */
EXT int realizarCancelarConta(TipoDesenvolvedor *);

/** \brief função que estrutura a tela de pesquisa de desenvolvedor.
 *
 * \param void
 * \return void
 *
 */
EXT void telaPesquisarDesenvolvedor(void);

/** \brief Função que printa no prompt a Tela de pesquisar desenvolvedor.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaPesquisarDesenvolvedor(void);

/** \brief função responsavel por mandar os dados coletados para o módulo de lógica de negócio para o correto processamento, quando recebe o resultado, passa para o usuario.
 *
 * \param desenvolvedor TipoDesenvolvedor* Struct onde o NOME do desenvolvedor que deve ser pesquisado está armazenado.
 * \return void
 *
 */
EXT void realizaPesquisaDesenvolvedor(TipoDesenvolvedor *);

/** \brief Função que printa no prompt a Tela de pesquisar produto.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaPesquisarProduto(void);

/** \brief função que estrutura a tela de pesquisa de produto.
 *
 * \param void
 * \return void
 *
 */
EXT void telaPesquisarProduto(void);

/** \brief função responsavel por mandar os dados coletados para o módulo de lógica de negócio para o correto processamento, quando recebe o resultado, passa para o usuario.
 *
 * \param produto TipoProduto* Struct onde o CODIGO do PRODUTO que deve ser pesquisado está armazenado.
 * \return void
 *
 */
EXT void realizaPesquisaProduto(TipoProduto *);

/** \brief Função que printa no prompt a Tela de pesquisar defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaPesquisarDefeito(void);

/** \brief função que estrutura a tela de pesquisa de defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void telaPesquisarDefeito(void);

/** \brief função responsavel por mandar os dados coletados para o módulo de lógica de negócio para o correto processamento, quando recebe o resultado, passa para o usuario.
 *
 * \param defeito TipoDefeito* Struct onde o CODIGO do DEFEITO que deve ser pesquisado está armazenado.
 * \return void
 *
 */
EXT void realizaPesquisaDefeito(TipoDefeito*);

/** \brief Função que printa no prompt a Tela de voluntariar defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaVoluntariarDefeito(void);

/** \brief função que estrutura a tela de voluntariar de defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void telaVoluntariarDefeito(void);

/** \brief função responsavel por mandar os dados coletados na "telaVoluntariarDefeito" para o módulo de lógica de negócio para o correto processamento, quando recebe o resultado, passa para o usuario.
 *
 * \param defeito TipoDefeito* Struct onde o CODIGO do DEFEITO que deve ser pesquisado está armazenado.
 * \return void
 *
 */
EXT void realizaVoluntariarDefeito(TipoDefeito *);

/** \brief Função printa no prompt a solicitação do Voto. Complemento da Tela de Votar Defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaVotarDefeitoVoto(void);

/** \brief Função que printa no prompt a Tela de votar defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaVotarDefeito(void);

/** \brief função que estrutura a tela de votar no defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void telaVotarDefeito(void);

/** \brief função responsavel por mandar os dados coletados na "telaVotarDefeito" para o módulo de lógica de negócio para o correto processamento, quando recebe o resultado, passa para o usuario.
 *
 * \param codigo char* codigo do defeito que esta sendo votado.
 * \param voto int valor do voto.
 * \return void
 *
 */
EXT void realizaVotarDefeito(char *,int);

/** \brief Função printa no prompt a solicitação da DESCRICAO. Complemento da Tela de Cadastrar Defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaCadastrarDefeitoDescricao(void);

/** \brief Função printa no prompt a solicitação do CODIGO DO PRODUTO. Complemento da Tela de Cadastrar Defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaCadastrarDefeitoCodigo(void);

/** \brief Função printa no prompt a solicitação da DATA DE ABERTURA. Complemento da Tela de Cadastrar Defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaCadastrarDefeitoDataAbertura(void);

/** \brief Função que printa no prompt a Tela de cadastrar defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaCadastrarDefeito(void);

/** \brief Função responsavel por enviar os dados coletados na "telaCadastrarDefeito" para o módulo de logica de negocio e mostrar para o usuario o resultado do processamento.
 *
 * \param defeito TipoDefeito* Struct que contem os dados do defeito a ser cadastrado.
 * \return void
 *
 */
EXT void realizaCadastrarDefeito(TipoDefeito *);

/** \brief Função que coleta e valida os dados necessarios para o cadastro do defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void telaCadastrarDefeito(void);

/** \brief função que printa no prompt a Tela Inicial com todas as funcionalidades para um Desenvolvedor Lider de Produto.
 *
 * \param nome char* Nome do desenvolvedor que está utilizando o sistema.
 * \return void
 *
 */
EXT void printTelaInicialDesenvolvedorLiderProduto(char *);


EXT void telaInicialDesenvolvedorLiderProduto(TipoDesenvolvedor *);

/** \brief Função que printa no prompt a Tela de alocar desenvolvedor p/ defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaAlocarDesenvolvedorDefeito(void);

/** \brief Função que coleta e valida os dados necessarios para o cadastro do defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void alocarDesenvolvedorDefeito(void);

/** \brief Função responsavel por enviar os dados coletados na "alocarDesenvolvedorDefeito" para o módulo de logica de negocio e mostrar para o usuario o resultado do processamento.
 *
 * \param codigo char* Codigo do defeito ao qual o desenvolvedor será alocado.
 * \param email char* E-mail do desenvolvedor que será alocao ao defeito.

 * \return void
 *
 */
EXT void realizaAlocarDesenvolvedorDefeito(char *, char *);

/** \brief Função que printa no prompt a Tela de remover desenvolvedor do defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaRemoverDesenvolvedorDefeito(void);

/** \brief Função que coleta e valida o codigo de qual Defeito o desenvolvedor sera removido. Como cada defeito é corrigido por apenas um desenvolvedor, não é necessário perguntar o e-mail do desenvolvedor.
 *
 * \param void
 * \return void
 *
 */
EXT void removerDesenvolvedorDefeito(void);

/** \brief Função responsavel por enviar o dado coletado na função "removerDesenvolvedorDefeito" para o módulo de logica de negocio e mostrar para o usuario o resultado do processamento.
 *
 * \param codigo char* Codigo do defeito ao qual o desenvolvedor será removido.
 * \return void
 *
 */
EXT void realizaRemoverDesenvolvedorDefeito(char *);


EXT void telaInicialDesenvolvedorLiderProjeto(TipoDesenvolvedor *);

/** \brief função que printa no prompt a Tela Inicial com todas as funcionalidades para um Desenvolvedor Lider de Projeto.
 *
 * \param nome char* Nome do desenvolvedor que está utilizando o sistema.
 * \return void
 *
 */

EXT void printTelaInicialDesenvolvedorLiderProjeto(char *);

/** \brief Função que passa os dados do lider de projeto que deseja ter a conta deletada para o módulo de negócio.
 *
 * \param usuario TipoDesenvolvedor* Lider de Projeto utilizando o sistema.
 * \return int Código de Retorno.
 *
 */
EXT int realizarCancelarContaLiderProjeto(TipoDesenvolvedor *);

/** \brief Função que coleta e valida os dados necessarios para o alocar o lider de produto.
 *
 * \param void
 * \return void
 *
 */
EXT void telaAlocarLiderProduto(void);

/** \brief Função que printa no prompt a Tela de alocar lider produto.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaAlocarLiderProduto(void);

/** \brief Função responsavel por enviar os dados coletados na "printTelaAlocarLiderProduto" para o módulo de logica de negocio e mostrar para o usuario o resultado do processamento.
 *
 * \param codigo char* Codigo do produto ao qual o desenvolvedor será alocado como lider.
 * \param email char* E-mail do desenvolvedor que será alocao como lider do produto.
 * \return void
 *
 */

EXT void realizaAlocarLiderProduto(char *, char *);

/** \brief Função que coleta e valida os dados necessarios para o remover o lider de um produto.
 *
 * \param void
 * \return void
 *
 */
EXT void telaRemoverLiderProduto(void);

/** \brief Função que printa no prompt a Tela de remover lider de um produto.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaRemoverLiderProduto(void);

/** \brief Função responsavel por enviar os dados coletados na "printTelaRemoverLiderProduto" para o módulo de logica de negocio e mostrar para o usuario o resultado do processamento.
 *
 * \param codigo char* Codigo do produto ao qual o desenvolvedor será removido como lider.
 * \return void
 *
 */
EXT void realizaRemoverLiderProduto(char *);

/** \brief Função que printa no prompt a Tela de remover um produto.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaRemoverProduto(void);

/** \brief Função que coleta e valida os dados necessarios para o remover um produto.
 *
 * \param void
 * \return void
 *
 */
EXT void telaRemoverProduto(void);

/** \brief Função responsavel por enviar os dados coletados na "realizaRemoverProduto" para o módulo de logica de negocio e mostrar para o usuario o resultado do processamento.
 *
 * \param codigo char* Codigo do produto que será excluido.
 * \return void
 *
 */
EXT void realizaRemoverProduto(char *);

/** \brief Função que coleta e valida os dados necessarios para o cadastro do defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void telaCadastrarProduto(void);

/** \brief Função responsavel por enviar os dados coletados na "telaCadastrarProduto" para o módulo de logica de negocio e mostrar para o usuario o resultado do processamento.
 *
 * \param produto TipoProduto* Struct armazenado os dados sobre o produto que será cadastrado.
 * \return void
 *
 */
EXT void realizaCadastrarProduto(TipoProduto *);

/** \brief Função que printa no prompt a Tela de cadastrar produto.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaCadastrarProduto(void);

/** \brief Função printa no prompt a solicitação do NOME.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaCadastrarProdutoNome(void);

/** \brief Função printa no prompt a solicitação da versão. Complemento da Tela de Cadastrar Produto.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaCadastrarProdutoVersao(void);

#endif // UINTERFACE_H_INCLUDED
