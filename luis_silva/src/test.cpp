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
    // lista
	PilhaGaragem Garagem = PilhaGaragem();
	ListaCombate EmCombate;
	FilaOficina Oficina = FilaOficina();

    Garagem.empilha(1);
    Garagem.empilha(2);
    Garagem.empilha(3);
    Garagem.empilha(4);
    Oficina.enfilera(Garagem.desempilha());
    Oficina.enfilera(Garagem.desempilha());
    Oficina.enfilera(Garagem.desempilha());
    Oficina.enfilera(Garagem.desempilha());

    CelulaNave* a = Oficina.removeNave();

    cout << a->getProxima()->getID() << endl;

	return 0;
}
