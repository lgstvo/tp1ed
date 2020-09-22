
#include <iostream>
#include <cstdio>

#include "headers/celula.hpp"
#include "headers/fila.hpp"
#include "headers/pilha.hpp"
#include "headers/lista.hpp"
#include "headers/operacao.hpp"

using namespace std;

int main() {

	int num_frotas, i, id_nave, operacao;
	
	PilhaGaragem Garagem = PilhaGaragem();
	ListaCombate EmCombate = ListaCombate();
	FilaOficina Oficina = FilaOficina();
	Operacao Comando = Operacao();

	cin >> num_frotas;
	if(num_frotas > 5000) num_frotas = 5000;

	for(i=0; i < num_frotas; i++){
		cin >> id_nave;
		Garagem.empilha(id_nave);
	}
	
	while(cin >> operacao){
		if(operacao == 0){
			Comando.zero(Garagem, EmCombate);
		}
		else if(operacao == -1){
			Comando.um(Garagem, Oficina);
		}
		else if(operacao == -2){
			Comando.dois(Garagem);
		}
		else if(operacao == -3){
			Comando.tres(Oficina);
		}
		else{
			Comando.naveX(operacao, EmCombate, Oficina);
		}
	}
	return 0;
}
