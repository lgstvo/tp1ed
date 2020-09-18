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

        int getID();
};

#endif