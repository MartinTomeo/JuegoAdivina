#include "ControladorJuego.h"
#include <limits>

ControladorJuego::ControladorJuego(ModeloJuego& m, VistaJuego& v) : modelo(m), vista(v) {}

void ControladorJuego::empezar() {
    vista.mensajeBienvenida();
    bool adivinaCorrecto = false;
    unsigned int adivinanza;

    while (!adivinaCorrecto) {
        vista.mensajeAdivinanza();

         while (!(std::cin >> adivinanza)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            vista.mensajeNumeroValido();
            vista.mensajeAdivinanza();
        }

        if(!modelo.depuradorDeNumero(adivinanza))
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
