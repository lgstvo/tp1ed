
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

	for(i=0; i < num_frotas; i++){
		cin >> id_nave;
		Garagem.empilha(id_nave);
	}
	
	while(cin >> operacao){ // loop principal, responsável pela dinâmica do TP
		if(operacao == 0){
			/*
			*TRECHO TIRADO DO DOCUMENTO OFICIAL DA ESPECIFICAÇÃO DO TP1*
			indica que o imperador deseja enviar a nave mais apta das que
			estãoo aguardando para o combate. Ao ser enviada, a mensagem
			“nave K em combate” deve ser impressa na saída, na qual K é
			 o identificador da nave.
			*/
			Comando.zero(Garagem, EmCombate);
		}
		else if(operacao == -1){
			/*
			*TRECHO TIRADO DO DOCUMENTO OFICIAL DA ESPECIFICAÇÃO DO TP1*
			indica que a equipe de manutenção informou que uma nave avariada
			foi consertada. Ao ser consertada, a mensagem “nave K consertada”
			deve ser impressa na saída, na qual K é o identificador da nave.
			*/
			Comando.um(Garagem, Oficina);
		}
		else if(operacao == -2){
			/*
			*TRECHO TIRADO DO DOCUMENTO OFICIAL DA ESPECIFICAÇÃO DO TP1*
			indica que o imperador deseja obter uma impressão do identificador de
			todas as naves aguardando para entrar em combate, da mais apta para a menos apta. 
			*/
			Comando.dois(Garagem);
		}
		else if(operacao == -3){
			/*
			*TRECHO TIRADO DO DOCUMENTO OFICIAL DA ESPECIFICAÇÃO DO TP1*
			indica que o imperador deseja obter uma impress˜ao do identificador de todas as
			naves avariadas que estão aguardando para serem consertadas.
			*/
			Comando.tres(Oficina);
		}
		else{
			/*
			*TRECHO TIRADO DO DOCUMENTO OFICIAL DA ESPECIFICAÇÃO DO TP1*
			indica que a nave de identificador X, que estava em combate,
			foi avariada. Ao ser avariada, a mensagem “nave K avariada” 
			deve serimpressa na sa´ıda, na qual K ´e o identificador da nave
			*/
			EmCombate.imprime();
			Comando.naveX(operacao, EmCombate, Oficina);
		}
	}
	return 0;
}
