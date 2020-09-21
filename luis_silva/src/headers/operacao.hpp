#ifndef OPERATIONS
#define OPERATIONS

#include "celula.hpp"
#include "fila.hpp"
#include "lista.hpp"
#include "pilha.hpp"

class Operacao{
    /*
    A classe Operação encapsula grande parte do processo de organização da batalha.
    Aqui ficam definidas as operações que serão executadas pelo imperador.
    */
    public:
        Operacao();

        void zero(PilhaGaragem&, ListaCombate&);
        void um(PilhaGaragem&, ListaCombate&, FilaOficina&);
        void dois(PilhaGaragem&, ListaCombate&, FilaOficina&);
        void tres(PilhaGaragem&, ListaCombate&, FilaOficina&);
        void naveX(int naveX, PilhaGaragem&, ListaCombate&, FilaOficina&);
}

#endif