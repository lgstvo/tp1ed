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
        void um(PilhaGaragem&, FilaOficina&);
        void dois(PilhaGaragem&);
        void tres(FilaOficina&);
        void naveX(int, ListaCombate&, FilaOficina&);
};

#endif