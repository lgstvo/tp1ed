#include "lista.hpp"
#include <iostream>
#include <cstdio>

ListaCombate::ListaCombate(){
    // Construtor

    this->primeira = new CelulaNave();
    this->ultima = this->primeira;
}

CelulaNave* ListaCombate::posiciona(int posicao, bool antes){
    // Faz a manipuação de ponteiros para posicionalos em determinada posição

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
    // Infelizmente, para pegar a posição X de uma nave é necessário
    // caminhar em um loop
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

void ListaCombate::insere(CelulaNave nave){

    CelulaNave* ultima = getUltima();
    CelulaNave* novaNave = new CelulaNave();
    novaNave->setID(nave.getID());

    ultima->setProxima(novaNave);
    novaNave->setProxima(NULL);
    setUltima(novaNave);
}

CelulaNave* ListaCombate::removeNave(int naveID){
    // remove a nave na posição naveID

    primeira = getPrimeira();
    CelulaNave* ponteiroRemove = primeira->getProxima();
    CelulaNave* naveRemovida = new CelulaNave();
    int posicao = 0;

    while(ponteiroRemove->getID() != naveID){
        ponteiroRemove = ponteiroRemove->getProxima();
        //std::cout << "ITERACAO " << posicao << " " << ponteiroRemove->getID() << " " << naveID << std::endl;
        posicao++;
    }

    ponteiroRemove = posiciona(posicao, 1);
    naveRemovida = ponteiroRemove->getProxima();
    ponteiroRemove->setProxima(naveRemovida->getProxima());
    naveRemovida->setProxima(NULL);
    
    return naveRemovida;
}

void ListaCombate::limpa(){
    // limpa a lista, sem utilidade prática

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
    // imprime a lista, útil para testes

    CelulaNave* ponteiroImprime = getPrimeira();
    int impressao;
    ponteiroImprime = ponteiroImprime->getProxima();
    while(ponteiroImprime != NULL){

        impressao = ponteiroImprime->getID();
        std::cout << impressao << std::endl;

        ponteiroImprime = ponteiroImprime->getProxima();
    }

}

ListaCombate::~ListaCombate(){}