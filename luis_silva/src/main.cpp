
#include <iostream>
#include <cstdio>

#include "headers/celula.hpp"
#include "headers/fila.hpp"
#include "headers/pilha.hpp"
#include "headers/lista.hpp"

using namespace std;

int main() {

	int num_frotas, i, id_nave, operacao;

	PilhaGaragem Garagem;
	ListaCombate EmCombate;
	FilaOficina Oficina;

	cin >> num_frotas;

	for(i=0; i < num_frotas; i++){
		cin >> id_nave;
		Garagem.empilha(id_nave);
	}
	

	while(cin >> operacao){
		if(operacao == 0){
			
		}
		else if(operacao == -1){

		}
		else if(operacao == -2){
			
		}
		else if(operacao == -3){
			
		}
		else{

		}

	}
	cout << "batata" << endl;
	return 0;
}
