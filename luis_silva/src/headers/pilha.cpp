#include "pilha.hpp"
#include <iostream>
#include <cstdio>

PilhaGaragem::PilhaGaragem(){
    this->tamanho = -1;
}

PilhaGaragem::PilhaGaragem(int tamanho){
    this->tamanho = tamanho;
}

CelulaNave* PilhaGaragem::getGaragem(){
    return this->garagemDeNaves;
}

int PilhaGaragem::getTamanho(){
    return this->tamanho;
}

CelulaNave PilhaGaragem::getTopo(){
    CelulaNave* garagem = getGaragem();
    int topo = getTamanho();
    return garagem[topo];
}

void PilhaGaragem::setTamanho(int tamanho){
    this->tamanho = tamanho;
}

void PilhaGaragem::empilha(CelulaNave nave){
    int topo = getTamanho();
    CelulaNave *garagem = getGaragem();
    
    topo++;
    garagem[topo] = nave;
    setTamanho(topo);

}

CelulaNave PilhaGaragem::desempilha(){
    int topo = getTamanho();
    CelulaNave *garagem = getGaragem();
    CelulaNave naveRetirada;

    naveRetirada = garagem[topo];
    topo--;
    setTamanho(topo);

    return naveRetirada;
}

void PilhaGaragem::imprime(){
    int tamanho = getTamanho();
    CelulaNave *garagem = getGaragem();

    for(int i = 0; i <= tamanho; i++){
        std::cout << garagem[i].getID() << std::endl;
        //printf("%d\n", garagem[i]getID());
    }
}