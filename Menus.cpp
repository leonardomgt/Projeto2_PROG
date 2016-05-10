#include "Menus.h"



bool infoInicial(string &loja, string &fichClientes, string &fichProdutos, string &fichTransacoes){

	ifstream inStreamClientes, inStreamProdutos, inStreamTransacoes;
	bool clientesExiste, produtosExiste, transacoesExiste;

	/*cout << "Introduza o nome da loja" << endl;
	getline(cin, loja);

	cout << "Introduza o nome do ficheiro de clientes" << endl;
	getline(cin, fichClientes);

	cout << "Introduza o nome do ficheiro de produtos" << endl;
	getline(cin, fichProdutos);
	
	cout << "Introduza o nome do ficheiro de transações" << endl;
	getline(cin, fichTransacoes);*/

	loja = "Continente";
	fichClientes = "clientes.txt";
	fichProdutos = "produtos.txt";
	fichTransacoes = "transacoes.txt";

	inStreamClientes.open(fichClientes.c_str());
	clientesExiste = inStreamClientes.good();

	inStreamProdutos.open(fichProdutos.c_str());
	produtosExiste = inStreamProdutos.good();

	inStreamTransacoes.open(fichTransacoes.c_str());
	transacoesExiste = inStreamTransacoes.good();

	inStreamClientes.close();

	return clientesExiste && produtosExiste && transacoesExiste;
}

/******************************************
 * Gestao de Clientes
 ******************************************/
unsigned short int menuGestaoClientes(){
  unsigned short int opcao;

  clearScreen();
  cout << TAB_BIG << "Menu Gestao Clientes" << endl;
  cout << endl;
  cout << TAB << "1 - Listar clientes" << endl;
  cout << TAB << "2 - Ver informacao cliente" << endl;
  cout << TAB << "3 - Editar cliente" << endl;
  cout << TAB << "4 - Remover cliente" << endl;
  cout << TAB << "5 - Voltar ao menu inicial" << endl << endl;
  cout << TAB << "Qual a sua opcao: ";
  opcao = leUnsignedShortInt(1, 5);

  if(opcao == 5)
    return 0;

  return opcao;
}


void opcoesGestaoClientes(VendeMaisMais & supermercado){
  unsigned int opcao;
  string nome;

  while((opcao = menuGestaoClientes()))
    switch (opcao){
    case 1: supermercado.listarClientesOrdemAlfa();
      break;
    case 2: cout << "Qual o nome do cliente: ";
      getline(cin, nome);
      supermercado.mostraInformacaoCliente(nome);
      break;
    case 3:
      break;
    case 4:
      break;
    }
}

/******************************************
 * Gestao de Transacoes
 ******************************************/
unsigned short int menuGestaoTransacoes(){
	return 0;// TESTE
}

void opcoesGestaoTransacoes(VendeMaisMais & supermercado){
  unsigned int opcao;

  while((opcao = menuGestaoTransacoes()))
    switch (opcao){
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    }
}

/******************************************
 * Gestao de Transacoes
 ******************************************/
unsigned short int menuRecomendacao(){
	return 0; // TESTE
}

void opcoesRecomendacao(VendeMaisMais & supermercado){
  unsigned int opcao;

  while((opcao = menuRecomendacao()))
    switch (opcao){
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    }

}

/******************************************
 * Menu Inicial
 ******************************************/

unsigned short int menuInicial(){
  unsigned short int opcao;

  clearScreen();
  cout << TAB_BIG << "Menu Inicial" << endl;
  cout << endl;
  cout << TAB << "1 - Gestao de clientes" << endl;
  cout << TAB << "2 - Lista produto disponiveis" << endl;
  cout << TAB << "3 - Gestao de transacoes" << endl;
  cout << TAB << "4 - Recomendacoes" << endl;
  cout << TAB << "5 - Sair do programa" << endl << endl;
  cout << TAB << "Qual a sua opcao: ";
  opcao = leUnsignedShortInt(1, 5);

  if(opcao == 5)
    return 0;

  return opcao;
}

void opcoesIniciais(VendeMaisMais & supermercado){
  unsigned int opcao;


  while((opcao = menuInicial()))
    switch (opcao){
    case 1: opcoesGestaoClientes(supermercado);
      break;
    case 2: supermercado.listarProdutos();
      break;
    case 3: opcoesGestaoTransacoes(supermercado);
      break;
    case 4: opcoesRecomendacao(supermercado);
      break;
    }

  supermercado.saveChanges();
}
