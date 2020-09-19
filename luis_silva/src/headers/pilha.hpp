#ifndef GARAGEM
#define GARAGEM

#include "celula.hpp"

class PilhaGaragem{

    private:
        int tamanho;
        static const int MAXTAM = 50001;
        CelulaNave garagemDeNaves[MAXTAM];

    public:
        PilhaGaragem();
        PilhaGaragem(int tamanho);

        int getTamanho();
        CelulaNave* getGaragem();
        CelulaNave getTopo();

        void setTamanho(int tamanho);
        
        void empilha(int idNave);
        CelulaNave desempilha();
        void imprime();

};

#endif