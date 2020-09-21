#ifndef OFICINA_DE_REPARO
#define OFICINA_DE_REPARO

#include "celula.hpp"

class FilaOficina{
    /*
    FilaOficina se refere às máquinas que foram avariadas em combate e precisam
    de reparos. Reparos são feitos em oficinas, o que essencialmente são filas,
    por isso o nome FilaOficina
    */
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

        void setInicio(CelulaNave* nave);
        void setFim(CelulaNave* nave);

        void setTamanho(int tamanho);

        void enfilera(CelulaNave nave);

        CelulaNave* removeNave();
        void limpa();
        void imprime();

};

#endif