#include "ControladorJuego.h"
#include <limits>

ControladorJuego::ControladorJuego(ModeloJuego& m, VistaJuego& v) : modelo(m), vista(v) {}

void ControladorJuego::empezar() {
    vista.mensajeBienvenida();
    bool adivinaCorrecto = false;
    unsigned int adivinanza;
    unsigned int limSup;
    unsigned int limInf;
    vista.mensajeIntroducirLimSup();
    std::cin>>limSup;
    vista.mensajeIntroducirLimInf();
    std::cin>>limInf;

    if(!modelo.controlLimites(limSup,limInf))
    {
        vista.mensajeErrorLimites();
    }
    else
    {


        modelo.generarNumero(limSup, limInf);


        while (!adivinaCorrecto) {
            vista.mensajeAdivinanza();

            while (!(std::cin >> adivinanza)) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                vista.mensajeNumeroValido();
                vista.mensajeAdivinanza();
            }

            if(!modelo.depuradorDeNumero(adivinanza, limInf, limSup))
            {
                vista.mensajeNumeroValido();
            }
            else if(modelo.numeroEnBuffer(adivinanza) && !modelo.bufferVacio())
            {
                vista.mensajeDuplicado();
            }
            else
            {
                adivinaCorrecto = modelo.adivinar(adivinanza);
                vista.mensajeResultado(adivinaCorrecto);

                if (!adivinaCorrecto) {
                    if (adivinanza > modelo.getNumeroAdivinar()) {
                        vista.mensajeNumeroAlto();
                    }
                    else
                    {
                    vista.mensajeNumeroBajo();
                    }
                }
            }

        }
    }
}

