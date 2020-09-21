#include <iostream>
#include <cstdio>

#include "headers/celula.hpp"
#include "headers/fila.hpp"
#include "headers/pilha.hpp"
#include "headers/lista.hpp"

using namespace std;

int main() {

	//int num_frotas, i, id_nave, operacao;

    // tested features:
    // celula getID
    // pilha setTamanho, getTamanho, PilhaGaragem, empilha, getTopo, desempilha, imprime
    // fila construtor, getTamanho, getInicio, getFim, enfilera, setfim, removeNave, imprime
    // lista getID, getPrimeira, imprime, removeNave, setUltima
	PilhaGaragem Garagem = PilhaGaragem();
	ListaCombate EmCombate = ListaCombate();
	FilaOficina Oficina = FilaOficina();

    Garagem.empilha(1);
    Garagem.empilha(2);
    Garagem.empilha(3);
    Garagem.empilha(4);
    EmCombate.insere(Garagem.desempilha());
    EmCombate.insere(Garagem.desempilha());
    EmCombate.insere(Garagem.desempilha());
    EmCombate.insere(Garagem.desempilha());

    cout << EmCombate.getPrimeira()->getID() << endl;

    EmCombate.imprime();

    CelulaNave* a = EmCombate.removeNave(3);
    Oficina.enfilera(*a);
    Oficina.imprime();
	return 0;
}
