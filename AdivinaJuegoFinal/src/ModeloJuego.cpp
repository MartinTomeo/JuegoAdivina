#include "ModeloJuego.h"

ModeloJuego::ModeloJuego()
{
    srand(time(NULL));
    generarNumero();
}


bool ModeloJuego::generarNumero() {

    numeroAdivinar = rand() % 10 + 1;
    return true;

}

bool ModeloJuego::adivinar(unsigned int adivinar) {

    agregarNumeroBuffer(adivinar);
    return adivinar == getNumeroAdivinar();

}

unsigned int ModeloJuego::getNumeroAdivinar(){
    return numeroAdivinar;
}

bool ModeloJuego::depuradorDeCaracteres(unsigned int num)
{
    if(num>=1 && num<=10)
    {
        return true;
    }
    return false;
}


void ModeloJuego::agregarNumeroBuffer(unsigned int n)
{
    buffer.insert(n);

}

bool ModeloJuego::numeroEnBuffer(unsigned int n)
{
    return buffer.find(n) != buffer.end();
}

bool ModeloJuego::bufferVacio()
{
    return buffer.empty();
}
