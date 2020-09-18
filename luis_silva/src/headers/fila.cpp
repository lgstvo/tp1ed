#include "headers/fila.hpp"
#include <iostream>
#include <cstdio>

FilaOficina::FilaOficina(){
    this->tamanho = -1;
    this->inicio = new CelulaNave();
    this->fim = this->inicio;
}

CelulaNave* FilaOficina::getTamanho(){
    return this->tamanho;
}

CelulaNave* FilaOficina::getInicio(){
    return this->inicio;
}

CelulaNave* FilaOficica::getFim(){
    return this->fim;
}

void setTamanho(int novoTamanho){
    this->tamanho = novoTamanho;
}

void FilaOficina::enfilera(CelulaNave nave){
    int tamanho = getTamanho();
    CelulaNave* fim = getFim();
    CelulaNave* inicio = getInicio();
    
    fim->setProxima(nave);
    fim = nave;
    tamanho++;
}

CelulaNave FilaOficina::removeNave(){
    int tamanho = getTamanho();
    CelulaNave* inicio = getInicio();
    CelulaNave* fim = getFim();

    CelulaNave desenfilerada;

    inicio = inicio->getProxima();
    desenfilerada = inicio;

    inicio->setProxima(inicio->getProxima());
    setTamanho(tamanho--);

    return desenfilerada;
}

void FilaOficina::limpa(){
    CelulaNave* ponteiroApagador;
    inicio = getInicio();
    fim = getFim();

    ponteiroApagador = inicio->getProxima();

    while(ponteiroApagador != NULL){
        inicio->setProxima(ponteiroApagador->getProximo());
        delete ponteiroApagador;
        ponteiroApagador = inicio->getProximo();
    }
    setTamanho(0);
    setFim(inicio);
}