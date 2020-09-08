#ifndef OFICINA_DE_REPARO
#define OFICINA_DE_REPARO

#include "headers\celula.hpp"

class FilaOficina{

    private:
        int tamanho;
        CelulaNave* primeira;
        CelulaNave* ultima;
        CelulaNave* posiciona(int posicao, bool antes);

    public:

        FilaOficina();
        ~FilaOficina();

        CelulaNave getPrimeiro();
        CelulaNave getUltimo();
        CelulaNave getPosicao();

        void enfilera();
        
        CelulaNave removeNave();
        void limpa();

};

#endif