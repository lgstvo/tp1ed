#include "headers/celula.hpp"

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