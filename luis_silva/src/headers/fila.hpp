#ifndef OFICINA_DE_REPARO
#define OFICINA_DE_REPARO

#include "headers/celula.hpp"

class FilaOficina{

    private:
        int tamanho;
        CelulaNave* inicio;
        CelulaNave* fim;

    public:
        FilaOficina();
        ~FilaOficina();

        CelulaNave* getInicio();
        CelulaNave* getFim();
        int getTamanho();

        void setTamanho(int tamanho);

        void enfilera(CelulaNave nave);

        CelulaNave removeNave();
        void limpa();

};

#endif