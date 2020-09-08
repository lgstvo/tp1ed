#include "headers/celula.hpp"

CelulaNave::CelulaNave(int identificacao){
    this->identificacao = identificacao;
}

int CelulaNave::getID(){
    return this->identificacao;
}