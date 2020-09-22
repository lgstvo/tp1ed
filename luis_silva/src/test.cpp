#include <iostream>
#include <cstdio>

#include "headers/celula.hpp"
#include "headers/fila.hpp"
#include "headers/pilha.hpp"
#include "headers/lista.hpp"

using namespace std;

int main() {

	//int num_frotas, i, id_nave, operacao;

    
	PilhaGaragem Garagem = PilhaGaragem();
	ListaCombate EmCombate = ListaCombate();
	FilaOficina Oficina = FilaOficina();
/*
    CelulaNave nave =  CelulaNave();
    CelulaNave* navepoint = &nave;
    

    for(int i = 0; i < 6; i++){
        navepoint->setID(i);
        EmCombate.insere(*navepoint);
    }

*/

    Garagem.empilha(1);
    Garagem.empilha(2);
    Garagem.empilha(3);
    Garagem.empilha(4);
    Garagem.empilha(5);
    Garagem.empilha(6);

    Garagem.imprime();
    cout << endl;

    CelulaNave nave1;
    CelulaNave nave2;
    CelulaNave nave3;
    CelulaNave nave4;
    CelulaNave nave5;
    CelulaNave nave6;

    nave1 = Garagem.desempilha();
    nave2 = Garagem.desempilha();
    nave3 = Garagem.desempilha();
    nave4 = Garagem.desempilha();
    nave5 = Garagem.desempilha();
    nave6 = Garagem.desempilha();

    Garagem.imprime();
    cout << endl;

    EmCombate.insere(nave1);
    EmCombate.insere(nave2);
    EmCombate.insere(nave3);
    EmCombate.insere(nave4);
    EmCombate.insere(nave5);
    EmCombate.insere(nave6);

    EmCombate.imprime();
    cout << endl;

    
    nave1 = EmCombate.removeNave(1);

    EmCombate.imprime();
    cout << endl;

    Oficina.enfilera(nave1->getID());

    Oficina.imprime();
    cout << endl;

    nave1 = Oficina.removeNave();

    Oficina.imprime();
    cout << endl;

    Garagem.empilha(nave1->getID());

    Garagem.imprime();
    cout << endl;


	return 0;
}
