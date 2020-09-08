#ifndef COMBATE
#define COMBATE

#include "headers/celula.hpp"

class ListaCombate{

    private:
        int tamanho;
        CelulaNave* primeira;
        CelulaNave* ultima;
        CelulaNave* posiciona(int posicao, bool antes);

    public:

        ListaCombate();
        ~ListaCombate();

        CelulaNave getPosicao();

        void insere();

        CelulaNave removeNave(int naveID);
        void limpa();

};

#endif