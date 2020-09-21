#ifndef COMBATE
#define COMBATE

#include "celula.hpp"

class ListaCombate{
    /*
    ListaCombate se refere às naves que estão lutando. Qualquer nave pode ser
    incapacitada, necessitando de reparos, logo é necessário um TAD flexível
    para poder representar com fluidez a entrada e saída de naves, portando
    a lista é suficientemente adequada.
    */
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

        void insere(CelulaNave nave);

        CelulaNave* removeNave(int naveID);
        void limpa();
        void imprime();
};

#endif