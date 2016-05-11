#include "Vende++.h"
#include <fstream>

VendeMaisMais::VendeMaisMais(string loja, string fichClients, string fichProdutos, string fichTransacoes){

	ifstream inStreamClientes, inStreamProdutos, inStreamTransacoes;
	unsigned int numClientes;
	unsigned int numProdutos;
	unsigned int numTransacoes;

	this->loja = loja;
	this->fichClientes = fichClients;
	this->fichProdutos = fichProdutos;
	this->fichTransacoes = fichTransacoes;
	this->maxClientesId = 0;

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
		this->maxClientesId++;
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
	inStreamProdutos.close();
	inStreamTransacoes.close();

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

//adiciona um cliente à loja
void VendeMaisMais::adicionarCliente(string nomeCliente){
	Cliente novoCliente(nomeCliente);
	clientes.push_back(novoCliente);
	clientesAlterados = true;
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

	ofstream outClientes(this->fichClientes);
	ofstream outTransacoes(this->fichTransacoes);

	outClientes << this->clientes.size() << endl;

	for (size_t i = 0; i < this->clientes.size(); i++) {

		clientes.at(i).save(outClientes);

		if (i < clientes.size() - 1) {

			outClientes << endl;

		}



	}
	outTransacoes << this->transacoes.size() << endl;

	for (size_t i = 0; i < this->transacoes.size(); i++) {

		transacoes.at(i).save(outTransacoes);

		if (i < transacoes.size() - 1) {

			outTransacoes << endl;

		}


	}

	outClientes.close();
	outTransacoes.close();


}

/*********************************
Mostrar Loja
********************************/

// mostra o conteudo de uma loja
ostream& operator<<(ostream& out, const VendeMaisMais & supermercado){

	// A IMPLEMENTAR 
	return out; // TESTE

}
