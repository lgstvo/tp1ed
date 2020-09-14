#ifndef GARAGEM
#define GARAGEM

#include "headers/celula.hpp"
sdvdvlkasdmlfaksdnksd
adsfkasdfads
fdasdf
dasfsadd
class PilhaGaragem{

    private:
        int tamanho;
        static const int MAXTAM = 50001
        CelulaNave garagemDeNaves[MAXTAM];

    public:
        
        PinhaGaragem();
        PilhaGaragem(int tamanho);

        int getTamanho();
        CelulaNave* getGaragem();
        CelulaNave getTamanho();

        void setTamanho(int tamanho);
        
        void empilha(CelulaNave nave);
        CelulaNave desempilha();
        void imprime();

};

#endif