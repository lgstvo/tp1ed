#include "headers/lista.hpp"
#include <iostream>
#include <cstdio>

ListaCombate::ListaCombate(){
    this->primeira = new CelulaNave();
    this->ultima = this->primeira;
}

CelulaNave* ListaCombate::posiciona(int posicao, bool antes){
    CelulaNave* ponteiroPosicao = getPrimeira();
    int walker = 0;

    while(walker != posicao && ponteiroPosicao->proxima != NULL){
        ponteiroPosicao = ponteiroPosicao->proxima;
        walker++;
    }

    if(!antes) ponteiroPosicao = ponteiroPosicao->proxima;

    return ponteiroPosicao;
}

CelulaNave ListaCombate::getPrimeira(){
    return this->primeira;
}

CelulaNave ListaCombate::getUltima(){
    return this->ultima;
}

CelulaNave ListaCombate::getPosicao(int posicao){
    CelulaNave *ponteiroIterativo = getPrimeira();
    int walker = 0;

    while(walker != posicao && ponteiroIterativo->proxima != NULL){
        ponteiroIterativo = ponteiroIterativo->proxima
        walker++;
    }
    return ponteiroIterativo
}

void ListaCombate::setPrimeira(CelulaNave* nave){
    this->primeira = nave;
}

void ListaCombate::setUltima(CelulaNave* nave){
    this->ultima = nave;
}

void ListaCombate::insere(CelulaNave nave){
    CelulaNave* ultima = getUltima();
    ultima->proxima = nave;
}

CelulaNave ListaCombate::removeNave(int naveID){
    primeira = getPrimeira();
    CelulaNave* ponteiroRemove = primera->proxima;
    CelulaNave naveRemovida;
    posicao = 0
    
    while(ponteiroRemove->getID() != naveID){
        ponteiroRemove = ponteiroRemove->proxima;
        posicao++;
    }

    ponteiroRemove = posiciona(posicao, 1);
    naveRemovida = ponteiroRemove->proxima;
    ponteiroRemove->proxima = naveRemovida->proxima;
    naveRemovida->proxima = NULL;
    return naveRemovida;
}

void ListaCombate::limpa(){
    CelulaNave* ponteiroLimpa = getPrimeira();
    CelulaNave* primeira = getPrimeira();
    CelulaNave* ultima = getUltima();
    ponteiroLimpa = ponteiroLimpa->proxima;

    while(ponteiroLimpa->proxima != NULL){
        primeira->proxima = ponteiroLimpa->proxima;
        delete ponteiroLimpa;
        ponteiroLimpa = primeira->proxima;
    }

    ultima = primeira;

}

void ListaCombate::imprime(){
    CelulaNave* ponteiroImprime = getPrimeira();
    int impressao;
    ponteiroImprime = ponteiroImprime->proxima;
    while(ponteiroImprime->proxima != NULL){

        impressao = ponteiroImprime->getID();
        std::cout << impressao << std::endl;
        //printf("%d\n", impressao);

        ponteiroImprime = ponteiroImprime->proxima;
    }

}