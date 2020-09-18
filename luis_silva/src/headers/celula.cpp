#include "celula.hpp"
#include <iostream>

CelulaNave::CelulaNave(){
    this->identificacao = -1;
    this->proxima = NULL;
}

CelulaNave::CelulaNave(int identificacao){
    this->identificacao = identificacao;
    this->proxima = NULL;
}

int CelulaNave::getID(){
    return this->identificacao;
}

CelulaNave* CelulaNave::getProxima(){
    return this->proxima;
}

void CelulaNave::setProxima(CelulaNave* nave){
    this->proxima = nave;
}

CelulaNave::~CelulaNave(){}