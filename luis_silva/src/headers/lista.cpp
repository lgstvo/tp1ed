#include "lista.hpp"
#include <iostream>
#include <cstdio>

ListaCombate::ListaCombate(){
    this->primeira = new CelulaNave();
    this->ultima = this->primeira;
}

CelulaNave* ListaCombate::posiciona(int posicao, bool antes){
    CelulaNave* ponteiroPosicao = getPrimeira();
    int walker = 0;

    while(walker != posicao && ponteiroPosicao->getProxima() != NULL){
        ponteiroPosicao = ponteiroPosicao->getProxima();
        walker++;
    }

    if(!antes) ponteiroPosicao = ponteiroPosicao->getProxima();

    return ponteiroPosicao;
}

CelulaNave* ListaCombate::getPrimeira(){
    return this->primeira;
}

CelulaNave* ListaCombate::getUltima(){
    return this->ultima;
}

CelulaNave* ListaCombate::getPosicao(int posicao){
    CelulaNave *ponteiroIterativo = getPrimeira();
    int walker = 0;

    while(walker != posicao && ponteiroIterativo->getProxima() != NULL){
        ponteiroIterativo = ponteiroIterativo->getProxima();
        walker++;
    }
    return ponteiroIterativo;
}

void ListaCombate::setPrimeira(CelulaNave* nave){
    this->primeira = nave;
}

void ListaCombate::setUltima(CelulaNave* nave){
    this->ultima = nave;
}

void ListaCombate::insere(CelulaNave* nave){
    CelulaNave* ultima = getUltima();
    ultima->setProxima(nave);
}

CelulaNave* ListaCombate::removeNave(int naveID){
    primeira = getPrimeira();
    CelulaNave* ponteiroRemove = primeira->getProxima();
    CelulaNave* naveRemovida;
    int posicao = 0;
    
    while(ponteiroRemove->getID() != naveID){
        ponteiroRemove = ponteiroRemove->getProxima();
        posicao++;
    }

    ponteiroRemove = posiciona(posicao, 1);
    naveRemovida = ponteiroRemove->getProxima();
    ponteiroRemove->setProxima(naveRemovida->getProxima());
    naveRemovida->setProxima(NULL);
    return naveRemovida;
}

void ListaCombate::limpa(){
    CelulaNave* ponteiroLimpa = getPrimeira();
    CelulaNave* primeira = getPrimeira();
    ponteiroLimpa = ponteiroLimpa->getProxima();

    while(ponteiroLimpa->getProxima() != NULL){
        primeira->setProxima(ponteiroLimpa->getProxima());
        delete ponteiroLimpa;
        ponteiroLimpa = primeira->getProxima();
    }

    ultima = primeira;

}

void ListaCombate::imprime(){
    CelulaNave* ponteiroImprime = getPrimeira();
    int impressao;
    ponteiroImprime = ponteiroImprime->getProxima();
    while(ponteiroImprime->getProxima() != NULL){

        impressao = ponteiroImprime->getID();
        std::cout << impressao << std::endl;
        //printf("%d\n", impressao);

        ponteiroImprime = ponteiroImprime->getProxima();
    }

}

ListaCombate::~ListaCombate(){}