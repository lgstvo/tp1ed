#ifndef GARAGEM
#define GARAGEM

#include "headers\celula.hpp"

class PilhaGaragem{

    private:
        int tamanho;
        CelulaNave garagemDeNaves[50001];

    public:
        
        PinhaGaragem();
        PilhaGaragem(int tamanho);

        CelulaNave getTopo();

        void setTamanho(int tamanho);
        
        void empilha();
        void desempilha();
        void imprime();

};

#endif