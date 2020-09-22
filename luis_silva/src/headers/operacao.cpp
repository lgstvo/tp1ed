#include "operacao.hpp"
#include <iostream>
#include <cstdio>

Operacao::Operacao(){

}

void Operacao::zero(PilhaGaragem &Garagem, ListaCombate &EmCombate){
    CelulaNave naveK;
    naveK = Garagem.desempilha(); // Retorna uma CelulaNave
    EmCombate.insere(naveK); // Recebe e empilha a CelulaNave
    std::cout << "nave " << naveK.getID() << " em combate" << std::endl;
}

void Operacao::um(PilhaGaragem &Garagem, FilaOficina &Oficina){
    int naveKID;
    naveKID = Oficina.removeNave();
    Garagem.empilha(naveKID);
    std::cout << "nave " << naveKID << " consertada" << std::endl;
}

void Operacao::dois(PilhaGaragem &Garagem){
    Garagem.imprime();
}

void Operacao::tres(FilaOficina &Oficina){
    Oficina.imprime();
}

void Operacao::naveX(int naveX, ListaCombate &EmCombate, FilaOficina &Oficina){
    int naveKID;
    naveKID = EmCombate.removeNave(naveX);
    Oficina.enfilera(naveKID);
    std::cout << "nave " << naveKID << " avariada" << std::endl;
}