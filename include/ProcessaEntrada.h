#ifndef PROCESSAENTRADA_H
#define PROCESSAENTRADA_H

#include <iostream>
#include <list>
#include <string>
#include <map>
#include <unordered_map>
#include <sstream>

using namespace std;

class ProcessaEntrada
{


    unordered_map<string, int> alturasCifrasEntrada; // contem as alturas e seus correspondentes numericos
    map<string, list<int> > dicionarioDeQualidadesMusicais; // todas as qualidades musicais ficam aqui


    list<string> alturasCifras;
    list<int> alturasConvertidas;
    list<int> duracoes;


    public:
        ProcessaEntrada();
        virtual ~ProcessaEntrada();

        void converteAlturasParaInteiros(list<string> &entradas);

        list<int> retornaAlturasNumericas();
        list<int> retornaDuracoes();
        list<string> retornaAlturasString();

        void verificaEntrada(string listaDeEntrada, int opcaoDeEntrada);

        int mostraValorMIDIAlturas(string altura);

    protected:

    private:
        void separaListas(string listaDeEntrada, list<string> &listaAlturas);
        void separaListas(string listaDeEntrada, list<int> &listaDuracoes);

};

#endif // PROCESSAENTRADA_H