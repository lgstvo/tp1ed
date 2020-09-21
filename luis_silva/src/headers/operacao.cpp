#include "operacao.hpp"
#include <iostream>
#include <cstdio>

void Operacao::Operacao(){

}

void Operacao::zero(PilhaGaragem &Garagem, ListaCombate &EmCombate){
    /*
    *TRECHO TIRADO DO DOCUMENTO OFICIAL DA ESPECIFICAÇÃO DO TP1*
	indica que o imperador deseja enviar a nave mais apta das que
	estão aguardando para o combate. Ao ser enviada, a mensagem
	“nave K em combate” deve ser impressa na saída, na qual K é
	 o identificador da nave.
	*/

    CelulaNave = naveK;
    naveK = Garagem.desempilha(); // Retorna uma CelulaNave
    EmCombate.insere(naveK); // Recebe e empilha a CelulaNave
    std::cout << "nave " << naveK.getID() << " em combate" << std::endl;
}

void Operacao::um(PilhaGaragem &Garagem, FilaOficina &Oficina){
    /* 
    *TRECHO TIRADO DO DOCUMENTO OFICIAL DA ESPECIFICAÇÃO DO TP1*
	indica que a equipe de manutenção informou que uma nave avariada
	foi consertada. Lembre-se que a nave consertada é sempre a com
	maior prioridade, aquela que primeiro chegou avariada. Ao ser
    consertada, a mensagem “nave K consertada” deve ser impressa na saída,
	na qual K é o identificador da nave.
	*/

    CelulaNave* naveK = new CelulaNave();
    naveK = Oficina.removeNave();
    Garagem.empilha(naveK->getID());
    std::cout << "nave " << naveK->getID() << " consertada" << std::endl;
    delete naveK;
}

void Operacao::dois(PilhaGaragem &Garagem){
    /*
    *TRECHO TIRADO DO DOCUMENTO OFICIAL DA ESPECIFICAÇÃO DO TP1*
	indica que o imperador deseja obter uma impressão do identificador de
    todas as naves aguardando para entrar em combate, da mais apta para a menos apta. 
	*/

    Garagem.imprime();
}

void Operacao::tres(FilaOficina &Oficina){
    /*
    *TRECHO TIRADO DO DOCUMENTO OFICIAL DA ESPECIFICAÇÃO DO TP1*
    indica que o imperador deseja obter uma impressão do identificador de todas as
	naves avariadas que estão aguardando para serem consertadas.
    */

    Oficina.imprime();
}

void Operacao::naveX(int naveX, ListaCombate &EmCombate, FilaOficina &Oficina){
    /*
    *TRECHO TIRADO DO DOCUMENTO OFICIAL DA ESPECIFICAÇÃO DO TP1*
    indica que a nave de identificador X, que estava em combate,
	foi avariada. Ao ser avariada, a mensagem “nave K avariada” 
	deve serimpressa na saéda, na qual K é o identificador da nave
    */

    CelulaNave* naveK;
    naveK = EmCombate.removeNave(naveX);
    Oficina.enfilera(&naveK);
    std::cout << "nave " << naveK->getID << " avariada" << std::endl;
}