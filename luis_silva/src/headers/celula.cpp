#include "headers/celula.hpp"

int CelulaNave::CelulaNave(int identificacao){
    this->identificacao = identificacao;
}

int CelulaNave::getID(){
    return this->identificacao;
}