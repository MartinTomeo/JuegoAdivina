#ifndef MODELOJUEGO_H
#define MODELOJUEGO_H
#include<stdlib.h>
#include "set"
#include "time.h"


class ModeloJuego
{
    private:
        unsigned int numeroAdivinar;
        std::set<unsigned int> buffer;

    public:
        ModeloJuego();
        bool generarNumero(unsigned int, unsigned int);
        bool adivinar(unsigned int);
        unsigned int getNumeroAdivinar();
        bool depuradorDeNumero(unsigned int, unsigned int, unsigned int);
        void agregarNumeroBuffer(unsigned int);
        bool numeroEnBuffer(unsigned int);
        bool bufferVacio();
        bool controlLimites(unsigned int, unsigned int);





};

#endif // MODELOJUEGO_H


