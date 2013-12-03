/*! \file UInterface.h
    \brief M�dulo respons�vel por realizar a interface entre o usuario e as funcionalidades do sistema, da� o seu nome.
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

/** \brief Fun��o respons�vel por iniciar as fun��es b�sicas apresentadas no menu inicial do Software.
 *
 * \param void
 * \return void
 *
 */
EXT void start(void);

/** \brief A fun��o printa no prompt o Cabe�alho do Software.
 *
 * \param void
 * \return void
 *
 */
EXT void printCabecalho(void);

/** \brief A fun��o limpa a tela do prompt.
 *
 * \param void
 * \return void
 *
 */
EXT void limpaTela(void);

/** \brief A fun��o printa no prompt as nuancias da Tela Inicial
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaInicial(void);

/** \brief Fun��o printa no prompt o inicio da Tela de Cadastro de Desenvolvedor. Tamb�m usada para o cadastro inicial.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaCadastroDesenvolvedorNome(void);

/** \brief Fun��o printa no prompt a solicita��o da senha.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaCadastroDesenvolvedorSenha(void);

/** \brief Fun��o printa no prompt a solicita��o do E-mail.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaCadastroDesenvolvedorEmail(void);

/** \brief Fun��o responsavel por efetivamente coletar e validar os dados de entrada para o cadastro de um Desenvolvedor.
 *
 * \return void
 */
EXT void telacadastraDesenvolvedor(void);

/** \brief  Fun��o envia os dados do desenvolvedor ao m�dulo de l�gica de neg�cio para processamento do cadastro.
 *
 * \param desenvolvedor TipoDesenvolvedor* Struct  que armazena os dados do possivel futuro desenvolvedor.
 * \return void
 *
 */
EXT void cadastraDesenvolvedor(TipoDesenvolvedor *);

/** \brief Fun��o que coleta e valida os dados necess�rios para a realiza��o do Login.
 *
 * \return void
 */
EXT void telaRealizaLogin(void);

/** \brief fun��o que envia os dados de login para o m�dulo de l�gica de neg�cio.
 *
 * \param usuario TipoDesenvolvedor* struct onde ser� armazenado os dados do usuario do sistema, caso o login seja bem sucedido.
 * \return void
 *
 */
EXT void realizaLogin(TipoDesenvolvedor *);

/** \brief Fun��o printa no prompt a solicita��o do Login.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaLogin(void);



EXT void telaInicialDesenvolvedorComum(TipoDesenvolvedor *);

/** \brief Fun��o responsavel pelo menu inicial apresentados as funcionalidades desponiveis para o Desenvolvedor Lider Produto.
 *
 * \param usuario TipoDesenvolvedor* Struct contendo as informa��es do usu�rio do sistema.
 * \return void
 *
 */
EXT void telaInicialDesenvolvedorLiderProduto(TipoDesenvolvedor *);

/** \brief Fun��o responsavel pelo menu inicial apresentados as funcionalidades desponiveis para o Desenvolvedor Lider Produto.
 *
 * \param usuario TipoDesenvolvedor* Struct contendo as informa��es do usu�rio do sistema.
 * \return void
 *
 */
EXT void telaInicialDesenvolvedorLiderProjeto(TipoDesenvolvedor *);

/** \brief fun��o que printa no prompt a Tela Inicial com todas as funcionalidades para um Desenvolvedor Comum.
 *
 * \param nome char* Nome do desenvolvedor que est� utilizando o sistema.
 * \return void
 *
 */
EXT void printtelaInicialDesenvolvedorComum(char *);

/** \brief Fun��o responsavel por coletar e validar os dados necessarios para a realizacao da alteracao do cadastro do usuario. Caso ocorra algum erro inesperado, o usuario � avisado e os dados antigos s�o recuperados.
 *
 * \param usuario TipoDesenvolvedor* Dados do usuario do sistema.
 * \return void
 *
 */
EXT void telaAlterarConta(TipoDesenvolvedor *);

/** \brief Fun��o que printa no prompt a Tela de alterar cadastro.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaAlterarCadastroNome(void);

/** \brief Passa os dados para serem alterados para o modulo de neg�cio.
 *
 * \param usuario TipoDesenvolvedor* Novos dados atualizados do usuario.
 * \return int Caso ocorra algum erro inesperado, ser� retornado o c�digo ERRO_INESPERADO.
 *
 */
EXT int realizaAlteracaoCadastro(TipoDesenvolvedor *);

/** \brief Fun��o responsavel pela tela de cancelamento de conta do usuario.
 *
 * \param usuario TipoDesenvolvedor* Usuario utilizando o sistema.
 * \return int C�digo de Retorno
 *
 */
EXT int telaCancelarConta(TipoDesenvolvedor *);

/** \brief Fun��o que printa no prompt a Tela de cancelar conta.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaCancelarConta(void);

/** \brief Fun��o que passa os dados do usuario que deseja ter a conta deletada para o m�dulo de neg�cio.
 *
 * \param usuario TipoDesenvolvedor* Usuario utilizando o sistema.
 * \return int C�digo de Retorno.
 *
 */
EXT int realizarCancelarConta(TipoDesenvolvedor *);

/** \brief fun��o que estrutura a tela de pesquisa de desenvolvedor.
 *
 * \param void
 * \return void
 *
 */
EXT void telaPesquisarDesenvolvedor(void);

/** \brief Fun��o que printa no prompt a Tela de pesquisar desenvolvedor.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaPesquisarDesenvolvedor(void);

/** \brief fun��o responsavel por mandar os dados coletados para o m�dulo de l�gica de neg�cio para o correto processamento, quando recebe o resultado, passa para o usuario.
 *
 * \param desenvolvedor TipoDesenvolvedor* Struct onde o NOME do desenvolvedor que deve ser pesquisado est� armazenado.
 * \return void
 *
 */
EXT void realizaPesquisaDesenvolvedor(TipoDesenvolvedor *);

/** \brief Fun��o que printa no prompt a Tela de pesquisar produto.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaPesquisarProduto(void);

/** \brief fun��o que estrutura a tela de pesquisa de produto.
 *
 * \param void
 * \return void
 *
 */
EXT void telaPesquisarProduto(void);

/** \brief fun��o responsavel por mandar os dados coletados para o m�dulo de l�gica de neg�cio para o correto processamento, quando recebe o resultado, passa para o usuario.
 *
 * \param produto TipoProduto* Struct onde o CODIGO do PRODUTO que deve ser pesquisado est� armazenado.
 * \return void
 *
 */
EXT void realizaPesquisaProduto(TipoProduto *);

/** \brief Fun��o que printa no prompt a Tela de pesquisar defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaPesquisarDefeito(void);

/** \brief fun��o que estrutura a tela de pesquisa de defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void telaPesquisarDefeito(void);

/** \brief fun��o responsavel por mandar os dados coletados para o m�dulo de l�gica de neg�cio para o correto processamento, quando recebe o resultado, passa para o usuario.
 *
 * \param defeito TipoDefeito* Struct onde o CODIGO do DEFEITO que deve ser pesquisado est� armazenado.
 * \return void
 *
 */
EXT void realizaPesquisaDefeito(TipoDefeito*);

/** \brief Fun��o que printa no prompt a Tela de voluntariar defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaVoluntariarDefeito(void);

/** \brief fun��o que estrutura a tela de voluntariar de defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void telaVoluntariarDefeito(void);

/** \brief fun��o responsavel por mandar os dados coletados na "telaVoluntariarDefeito" para o m�dulo de l�gica de neg�cio para o correto processamento, quando recebe o resultado, passa para o usuario.
 *
 * \param defeito TipoDefeito* Struct onde o CODIGO do DEFEITO que deve ser pesquisado est� armazenado.
 * \return void
 *
 */
EXT void realizaVoluntariarDefeito(TipoDefeito *);

/** \brief Fun��o printa no prompt a solicita��o do Voto. Complemento da Tela de Votar Defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaVotarDefeitoVoto(void);

/** \brief Fun��o que printa no prompt a Tela de votar defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaVotarDefeito(void);

/** \brief fun��o que estrutura a tela de votar no defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void telaVotarDefeito(void);

/** \brief fun��o responsavel por mandar os dados coletados na "telaVotarDefeito" para o m�dulo de l�gica de neg�cio para o correto processamento, quando recebe o resultado, passa para o usuario.
 *
 * \param codigo char* codigo do defeito que esta sendo votado.
 * \param voto int valor do voto.
 * \return void
 *
 */
EXT void realizaVotarDefeito(char *,int);

/** \brief Fun��o printa no prompt a solicita��o da DESCRICAO. Complemento da Tela de Cadastrar Defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaCadastrarDefeitoDescricao(void);

/** \brief Fun��o printa no prompt a solicita��o do CODIGO DO PRODUTO. Complemento da Tela de Cadastrar Defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaCadastrarDefeitoCodigo(void);

/** \brief Fun��o printa no prompt a solicita��o da DATA DE ABERTURA. Complemento da Tela de Cadastrar Defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaCadastrarDefeitoDataAbertura(void);

/** \brief Fun��o que printa no prompt a Tela de cadastrar defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaCadastrarDefeito(void);

/** \brief Fun��o responsavel por enviar os dados coletados na "telaCadastrarDefeito" para o m�dulo de logica de negocio e mostrar para o usuario o resultado do processamento.
 *
 * \param defeito TipoDefeito* Struct que contem os dados do defeito a ser cadastrado.
 * \return void
 *
 */
EXT void realizaCadastrarDefeito(TipoDefeito *);

/** \brief Fun��o que coleta e valida os dados necessarios para o cadastro do defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void telaCadastrarDefeito(void);

/** \brief fun��o que printa no prompt a Tela Inicial com todas as funcionalidades para um Desenvolvedor Lider de Produto.
 *
 * \param nome char* Nome do desenvolvedor que est� utilizando o sistema.
 * \return void
 *
 */
EXT void printTelaInicialDesenvolvedorLiderProduto(char *);


EXT void telaInicialDesenvolvedorLiderProduto(TipoDesenvolvedor *);

/** \brief Fun��o que printa no prompt a Tela de alocar desenvolvedor p/ defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaAlocarDesenvolvedorDefeito(void);

/** \brief Fun��o que coleta e valida os dados necessarios para o cadastro do defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void alocarDesenvolvedorDefeito(void);

/** \brief Fun��o responsavel por enviar os dados coletados na "alocarDesenvolvedorDefeito" para o m�dulo de logica de negocio e mostrar para o usuario o resultado do processamento.
 *
 * \param codigo char* Codigo do defeito ao qual o desenvolvedor ser� alocado.
 * \param email char* E-mail do desenvolvedor que ser� alocao ao defeito.

 * \return void
 *
 */
EXT void realizaAlocarDesenvolvedorDefeito(char *, char *);

/** \brief Fun��o que printa no prompt a Tela de remover desenvolvedor do defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaRemoverDesenvolvedorDefeito(void);

/** \brief Fun��o que coleta e valida o codigo de qual Defeito o desenvolvedor sera removido. Como cada defeito � corrigido por apenas um desenvolvedor, n�o � necess�rio perguntar o e-mail do desenvolvedor.
 *
 * \param void
 * \return void
 *
 */
EXT void removerDesenvolvedorDefeito(void);

/** \brief Fun��o responsavel por enviar o dado coletado na fun��o "removerDesenvolvedorDefeito" para o m�dulo de logica de negocio e mostrar para o usuario o resultado do processamento.
 *
 * \param codigo char* Codigo do defeito ao qual o desenvolvedor ser� removido.
 * \return void
 *
 */
EXT void realizaRemoverDesenvolvedorDefeito(char *);


EXT void telaInicialDesenvolvedorLiderProjeto(TipoDesenvolvedor *);

/** \brief fun��o que printa no prompt a Tela Inicial com todas as funcionalidades para um Desenvolvedor Lider de Projeto.
 *
 * \param nome char* Nome do desenvolvedor que est� utilizando o sistema.
 * \return void
 *
 */

EXT void printTelaInicialDesenvolvedorLiderProjeto(char *);

/** \brief Fun��o que passa os dados do lider de projeto que deseja ter a conta deletada para o m�dulo de neg�cio.
 *
 * \param usuario TipoDesenvolvedor* Lider de Projeto utilizando o sistema.
 * \return int C�digo de Retorno.
 *
 */
EXT int realizarCancelarContaLiderProjeto(TipoDesenvolvedor *);

/** \brief Fun��o que coleta e valida os dados necessarios para o alocar o lider de produto.
 *
 * \param void
 * \return void
 *
 */
EXT void telaAlocarLiderProduto(void);

/** \brief Fun��o que printa no prompt a Tela de alocar lider produto.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaAlocarLiderProduto(void);

/** \brief Fun��o responsavel por enviar os dados coletados na "printTelaAlocarLiderProduto" para o m�dulo de logica de negocio e mostrar para o usuario o resultado do processamento.
 *
 * \param codigo char* Codigo do produto ao qual o desenvolvedor ser� alocado como lider.
 * \param email char* E-mail do desenvolvedor que ser� alocao como lider do produto.
 * \return void
 *
 */

EXT void realizaAlocarLiderProduto(char *, char *);

/** \brief Fun��o que coleta e valida os dados necessarios para o remover o lider de um produto.
 *
 * \param void
 * \return void
 *
 */
EXT void telaRemoverLiderProduto(void);

/** \brief Fun��o que printa no prompt a Tela de remover lider de um produto.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaRemoverLiderProduto(void);

/** \brief Fun��o responsavel por enviar os dados coletados na "printTelaRemoverLiderProduto" para o m�dulo de logica de negocio e mostrar para o usuario o resultado do processamento.
 *
 * \param codigo char* Codigo do produto ao qual o desenvolvedor ser� removido como lider.
 * \return void
 *
 */
EXT void realizaRemoverLiderProduto(char *);

/** \brief Fun��o que printa no prompt a Tela de remover um produto.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaRemoverProduto(void);

/** \brief Fun��o que coleta e valida os dados necessarios para o remover um produto.
 *
 * \param void
 * \return void
 *
 */
EXT void telaRemoverProduto(void);

/** \brief Fun��o responsavel por enviar os dados coletados na "realizaRemoverProduto" para o m�dulo de logica de negocio e mostrar para o usuario o resultado do processamento.
 *
 * \param codigo char* Codigo do produto que ser� excluido.
 * \return void
 *
 */
EXT void realizaRemoverProduto(char *);

/** \brief Fun��o que coleta e valida os dados necessarios para o cadastro do defeito.
 *
 * \param void
 * \return void
 *
 */
EXT void telaCadastrarProduto(void);

/** \brief Fun��o responsavel por enviar os dados coletados na "telaCadastrarProduto" para o m�dulo de logica de negocio e mostrar para o usuario o resultado do processamento.
 *
 * \param produto TipoProduto* Struct armazenado os dados sobre o produto que ser� cadastrado.
 * \return void
 *
 */
EXT void realizaCadastrarProduto(TipoProduto *);

/** \brief Fun��o que printa no prompt a Tela de cadastrar produto.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaCadastrarProduto(void);

/** \brief Fun��o printa no prompt a solicita��o do NOME.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaCadastrarProdutoNome(void);

/** \brief Fun��o printa no prompt a solicita��o da vers�o. Complemento da Tela de Cadastrar Produto.
 *
 * \param void
 * \return void
 *
 */
EXT void printTelaCadastrarProdutoVersao(void);

#endif // UINTERFACE_H_INCLUDED
