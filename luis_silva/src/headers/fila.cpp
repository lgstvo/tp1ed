#include "fila.hpp"
#include <iostream>
#include <cstdio>

FilaOficina::FilaOficina(){
    this->tamanho = -1;
    this->inicio = new CelulaNave();
    this->fim = this->inicio;
}

int FilaOficina::getTamanho(){
    return this->tamanho;
}

CelulaNave* FilaOficina::getInicio(){
    return this->inicio;
}

CelulaNave* FilaOficina::getFim(){
    return this->fim;
}

void FilaOficina::setTamanho(int novoTamanho){
    this->tamanho = novoTamanho;
}

void FilaOficina::setFim(CelulaNave* nave){
    this->fim = nave;
}

void FilaOficina::enfilera(CelulaNave* nave){
    int tamanho = getTamanho();
    CelulaNave* fim = getFim();
    
    fim->setProxima(nave);
    fim = nave;
    tamanho++;
}

CelulaNave* FilaOficina::removeNave(){
    int tamanho = getTamanho();
    CelulaNave* inicio = getInicio();

    CelulaNave* desenfilerada;

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
        inicio->setProxima(ponteiroApagador->getProxima());
        delete ponteiroApagador;
        ponteiroApagador = inicio->getProxima();
    }
    setTamanho(0);
    setFim(inicio);
}

FilaOficina::~FilaOficina(){}