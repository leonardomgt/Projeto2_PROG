#include "Vende++.h"


VendeMaisMais::VendeMaisMais(string loja, string fichClients, string fichProdutos, string fichTransacoes){

	ifstream inStreamClientes, inStreamProdutos, inStreamTransacoes;
	unsigned int numClientes;
	unsigned int numProdutos;
	unsigned int numTransacoes;

	this->loja = loja;
	this->fichClientes = fichClients;
	this->fichProdutos = fichProdutos;
	this->fichTransacoes = fichTransacoes;

	inStreamClientes.open(this->fichClientes.c_str());
	inStreamClientes >> numClientes;
	//inStreamClientes.ignore(1000, '\n');

	inStreamProdutos.open(this->fichProdutos.c_str());
	inStreamProdutos >> numProdutos;
	inStreamProdutos.ignore(1000, '\n');

	inStreamTransacoes.open(this->fichTransacoes.c_str());
	inStreamTransacoes >> numTransacoes;
	inStreamTransacoes.ignore(1000, '\n');

	for (int i = 0; i < numClientes; i++) {

		Cliente clienteActual(inStreamClientes);
		this->clientes.push_back(clienteActual);
	}

	for (int i = 0; i < numProdutos; i++) {

		Produto produtoActual(inStreamProdutos);
		this->produtos.push_back(produtoActual);
	}

	for (int i = 0; i < numTransacoes; i++) {

		Transacao transacaoActual(inStreamTransacoes);
		this->transacoes.push_back(transacaoActual);
	}

	inStreamClientes.close();

}

/*********************************
   Gestao de Clientes
 ********************************/  

// lista os cleinets por ordem alfabetica crescente
void VendeMaisMais::listarClientesOrdemAlfa() const{

  // A IMPLEMENTAR 

}

// mostra a informacao individual de um cliente
void VendeMaisMais::mostraInformacaoCliente(string nome){



}

/*********************************
   Gestao de Produtos
 ********************************/  

// lisat os produto por ordem alfabetica crescente
void VendeMaisMais::listarProdutos() const{

  // A IMPLEMENTAR 

}


/*********************************
   Preservar Informacao
 ********************************/  

// guarda apenas a informacao de clientes e/ou de transacoes que foi alterada
void VendeMaisMais::saveChanges() const{

  // A IMPLEMENTAR 

}

/*********************************
   Mostrar Loja
 ********************************/  

// mostra o conteudo de uma loja
ostream& operator<<(ostream& out, const VendeMaisMais & supermercado){

  // A IMPLEMENTAR 
	return out; // TESTE

}
