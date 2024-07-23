#include "ModeloJuego.h"

ModeloJuego::ModeloJuego()
{
    srand(time(NULL));

}


bool ModeloJuego::generarNumero(unsigned int sup, unsigned int inf) {

    numeroAdivinar = rand() % sup + inf ;
    return true;

}

bool ModeloJuego::adivinar(unsigned int num) {

    agregarNumeroBuffer(num);
    return num == getNumeroAdivinar();

}

unsigned int ModeloJuego::getNumeroAdivinar(){
    return numeroAdivinar;
}

bool ModeloJuego::depuradorDeNumero(unsigned int num, unsigned int limInf, unsigned int limSup)
{
    if(num>=limInf && num<=limSup)
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


bool ModeloJuego::controlLimites(unsigned int limSup, unsigned int limInf)
{
    if(limSup<=limInf)
    {
        return false;
    }
    return true;

}
