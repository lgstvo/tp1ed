#ifndef GARAGEM
#define GARAGEM

#include "celula.hpp"

class PilhaGaragem{
    /*
    PilhaGaragem se refere às naves que foram escolhidas pelo 
    imperador para fazer parte do combate.
    As naves na pilha não estão em combate ainda, por isso estão na "garagem",
    mas essencialmente é uma pilha, por isso o nome PilhaGaragem.
    */
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