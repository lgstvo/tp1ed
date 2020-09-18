#ifndef NAVE
#define NAVE

class CelulaNave{

    private:
        int identificacao;
        CelulaNave *proxima;

    public:
        CelulaNave();
        ~CelulaNave();

        CelulaNave(int identificacao);
        void setProxima(CelulaNave* nave);
        CelulaNave* getProxima();

        int getID();
};

#endif