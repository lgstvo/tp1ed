#ifndef COMBATE
#define COMBATE

#include "celula.hpp"

class ListaCombate{

    private:
        CelulaNave* primeira;
        CelulaNave* ultima;
        CelulaNave* posiciona(int posicao, bool antes);

    public:
        ListaCombate();
        ~ListaCombate();

        CelulaNave* getPrimeira();
        CelulaNave* getUltima();
        CelulaNave* getPosicao(int posicao);

        void setPrimeira(CelulaNave* nave);
        void setUltima(CelulaNave* nave);

        void insere(CelulaNave* nave);

        CelulaNave* removeNave(int naveID);
        void limpa();
        void imprime();
};

#endif