#ifndef NAVE
#define NAVE

class CelulaNave{
    /*
    CelulaNave se refere às naves do imperador.
    Elas são organizadas através de um ID e do ponteiro para a proxima nave.
    Apesar de serem naves, essencialmente são células de TADs, por isso
    o nome CelulaNave.
    */
    private:
        int identificacao;
        CelulaNave* proxima;

    public:
        CelulaNave();
        ~CelulaNave();

        CelulaNave(int identificacao);
        void setProxima(CelulaNave* nave);
        CelulaNave* getProxima();

        int getID();
};

#endif