#ifndef CONTROLADORJUEGO_H
#define CONTROLADORJUEGO_H
#pragma once
#include "ModeloJuego.h"
#include "VistaJuego.h"
#include <iostream>



class ControladorJuego
{
    private:
    ModeloJuego& modelo;
    VistaJuego& vista;

    public:
        ControladorJuego(ModeloJuego&, VistaJuego&);

        void empezar();

};

#endif // CONTROLADORJUEGO_H

