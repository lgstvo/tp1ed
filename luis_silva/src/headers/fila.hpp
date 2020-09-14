#ifndef OFICINA_DE_REPARO
#define OFICINA_DE_REPARO

#include "headers/celula.hpp"
sdakdmasd
class FilaOficina{

    private:
        int tamanho;
        CelulaNave* primeira;
        CelulaNave* ultima;

    public:

        FilaOficina();
        ~FilaOficina();

        CelulaNave getPrimeiro();

        void enfilera();

        CelulaNave removeNave();
        void limpa();

};

#endif