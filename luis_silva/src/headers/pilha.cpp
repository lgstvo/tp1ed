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
    // getGaragem retorna um ponteiro para o array onde estão armazenadas as células (naves)

    return this->garagemDeNaves;
}

int PilhaGaragem::getTamanho(){
    return this->tamanho;
}

CelulaNave PilhaGaragem::getTopo(){
    // retorna a célula que está na ultima posição do array

    CelulaNave* garagem = getGaragem();
    int topo = getTamanho();
    return garagem[topo];
}

void PilhaGaragem::setTamanho(int tamanho){
    this->tamanho = tamanho;
}

void PilhaGaragem::empilha(int idNave){
    // adciona as células na pilha

    int topo = getTamanho();
    CelulaNave *garagem = getGaragem();

    CelulaNave nave = CelulaNave(idNave);
    
    topo++;
    garagem[topo] = nave;
    setTamanho(topo);

}

CelulaNave PilhaGaragem::desempilha(){
    // tira da pilha

    int topo = getTamanho();
    CelulaNave *garagem = getGaragem();
    CelulaNave naveRetirada;

    naveRetirada = garagem[topo];
    topo--;
    setTamanho(topo);

    return naveRetirada;
}

void PilhaGaragem::imprime(){
    // printa a pilha, apenas para visualização e testes

    int tamanho = getTamanho();
    CelulaNave *garagem = getGaragem();

    for(int i = 0; i <= tamanho; i++){
        std::cout << garagem[i].getID() << std::endl;
    }
}