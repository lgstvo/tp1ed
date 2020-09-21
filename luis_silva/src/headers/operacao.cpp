#include "operacao.hpp"
#include <iostream>
#include <cstdio>

void Operacao::Operacao(){

}

void Operacao::zero(PilhaGaragem &Garagem, ListaCombate &EmCombate){
    CelulaNave = naveK;
    naveK = Garagem.desempilha(); // Retorna uma CelulaNave
    EmCombate.insere(naveK); // Recebe e empilha a CelulaNave
    std::cout << "nave " << naveK.getID() << " em combate" << std::endl;
}

void Operacao::um(PilhaGaragem &Garagem, ListaCombate &EmCombate, FilaOficina &Oficina){
    CelulaNave* naveK = new CelulaNave();
    naveK = Oficina.removeNave();
    Garagem.empilha(naveK->getID());
    std::cout << "nave " << naveK->getID() << " consertada" << std::endl;
    delete naveK;
}

void Operacao::dois(PilhaGaragem &Garagem, ListaCombate &EmCombate, FilaOficina &Oficina){
    Garagem.imprime();
}

void Operacao::tres(PilhaGaragem &Garagem, ListaCombate &EmCombate, FilaOficina &Oficina){
    Oficina.imprime();
}

void Operacao::naveX(int naveX, PilhaGaragem &Garagem, ListaCombate &EmCombate, FilaOficina &Oficina){
    CelulaNave* naveK;
    naveK = EmCombate.removeNave(naveX);
    Oficina.enfilera(&naveK);
    std::cout << "nave " << naveK->getID << " avariada" << std::endl;
}