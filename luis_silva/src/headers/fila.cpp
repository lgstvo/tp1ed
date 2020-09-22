#include "fila.hpp"
#include <iostream>
#include <cstdio>

FilaOficina::FilaOficina(){
    // Construtor
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

void FilaOficina::setInicio(CelulaNave* novoInicio){
    this->inicio = novoInicio;
}

void FilaOficina::setFim(CelulaNave* nave){
    this->fim = nave;
}

void FilaOficina::enfilera(int naveID){
    // adciona naves à fila de reparo
    
    int tamanho = getTamanho();
    CelulaNave* fim = getFim();
    CelulaNave* novaNave = new CelulaNave(naveID);
    
    fim->setProxima(novaNave);
    setFim(novaNave);

    setTamanho(tamanho++);
}

int FilaOficina::removeNave(){
    // remove a nave da fila (repara a nave)

    int tamanho = getTamanho();
    CelulaNave* head = getInicio();
    CelulaNave* inicio;

    CelulaNave* desenfilerada = new CelulaNave();

    inicio = head->getProxima();
    desenfilerada = inicio;
    head->setProxima(inicio->getProxima());
    setTamanho(tamanho--);

    if(tamanho == -1) setFim(head);

    int desenfileradaID = desenfilerada->getID();
    delete desenfilerada;

    return desenfileradaID;
}

void FilaOficina::limpa(){
    // remove tudo da fila, sem uso prático

    CelulaNave* ponteiroApagador;
    inicio = getInicio();

    ponteiroApagador = inicio->getProxima();

    while(ponteiroApagador != NULL){
        inicio->setProxima(ponteiroApagador->getProxima());
        delete ponteiroApagador;
        ponteiroApagador = inicio->getProxima();
    }
    setTamanho(0);
    setFim(inicio);
}

void FilaOficina::imprime(){
    // caminnha na fila imprimindo os valores das células

    CelulaNave* inicioDaFila = getInicio();
    CelulaNave* ponteiroImprime;

    ponteiroImprime = inicioDaFila->getProxima();

    while(ponteiroImprime != NULL){
        std::cout << ponteiroImprime->getID() << std::endl;
        ponteiroImprime = ponteiroImprime->getProxima();
    }
}

FilaOficina::~FilaOficina(){}