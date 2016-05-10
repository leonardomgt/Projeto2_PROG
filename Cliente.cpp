#include "Cliente.h"


Cliente::Cliente(ifstream &in){
    
    string dataString;
    
  
    in >> this->id;
    in.ignore();
    getline(in, this->nome);
    getline(in, dataString);
    in >> this->volCompras;
    in.ignore();
    
    Data dataCartao(dataString);
    this->cartaoCliente = dataCartao;
}


string Cliente::getNome() const{
    
  return nome;

}

unsigned int Cliente::getId() const{
    
  return id;

}

float Cliente::getVolCompras() const{
    
  return volCompras;

}

Data Cliente::getCartaoCliente() const {
    
    return this->cartaoCliente;
}

void Cliente::save(ofstream &out) const{

    out << this;
    

}

ostream& operator<<(ostream& out, const Cliente &cliente){
  
    out << cliente.getId() << endl;
    out << cliente.getNome() << endl;
    out << cliente.getCartaoCliente() << endl;
    out << cliente.getVolCompras() << endl;

    return out;
}


bool operator<(const Cliente &cliente1, const Cliente &cliente2){
  
    if (cliente1.getVolCompras() < cliente2.getVolCompras()) {
        
        return true;
        
    }
    
    else {
        
        return true;
    }
    
}
