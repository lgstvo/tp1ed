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

    CelulaNave* nave = new CelulaNave();
    CelulaNave* nave2 = new CelulaNave();

    nave->setID(5);
    nave2->setID(10);

    EmCombate.insere(*nave);
    EmCombate.insere(*nave2);
    
    EmCombate.imprime();

    
	return 0;
}
