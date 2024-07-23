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

bool ModeloJuego::adivinar(unsigned int num) {

    agregarNumeroBuffer(num);
    return num == getNumeroAdivinar();

}

unsigned int ModeloJuego::getNumeroAdivinar(){
    return numeroAdivinar;
}

bool ModeloJuego::depuradorDeNumero(unsigned int num)
{
    if(num>=1 && num<=10)
    {
        return true;
    }
    return false;
}


void ModeloJuego::agregarNumeroBuffer(unsigned int num)
{
    buffer.insert(num);

}

bool ModeloJuego::numeroEnBuffer(unsigned int num)
{
    return buffer.find(num) != buffer.end();
}

bool ModeloJuego::bufferVacio()
{
    return buffer.empty();
}


