#ifndef NAVE
#define NAVE

class CelulaNave{

    private:
        int identificacao;
        CelulaNave *proxima;

    public:

        CelulaNave();
        CelulaNave(int identificacao);
        ~CelulaNave();

        int getID();

};

#endif