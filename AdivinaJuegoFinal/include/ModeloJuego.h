#ifndef MODELOJUEGO_H
#define MODELOJUEGO_H
#include<stdlib.h>
#include "set"
#include "time.h"


class ModeloJuego
{
    private:
        unsigned int numeroAdivinar;
        std::set<int> buffer;
    public:
        ModeloJuego();
        bool generarNumero();
        bool adivinar(unsigned int);
        unsigned int getNumeroAdivinar();
        bool depuradorDeNumero(unsigned int);
        void agregarNumeroBuffer(unsigned int);
        bool numeroEnBuffer(unsigned int);
        bool bufferVacio();





};

#endif // MODELOJUEGO_H


