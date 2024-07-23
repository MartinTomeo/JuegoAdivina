#ifndef MODELOJUEGO_H
#define MODELOJUEGO_H
#include<stdlib.h>
#include "set"
#include "time.h"


class ModeloJuego
{
    private:
        int numeroAdivinar;
        std::set<int> buffer;

    public:
        ModeloJuego();
        bool generarNumero();
        bool adivinar(unsigned int);
        unsigned int getNumeroAdivinar();
        bool depuradorDeCaracteres(unsigned int);
        void agregarNumeroBuffer(unsigned int n);
        bool numeroEnBuffer(unsigned int n);
        bool bufferVacio();




};

#endif // MODELOJUEGO_H


