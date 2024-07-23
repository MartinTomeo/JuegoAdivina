#include "ControladorJuego.h"

ControladorJuego::ControladorJuego(ModeloJuego& m, VistaJuego& v) : modelo(m), vista(v) {}

void ControladorJuego::empezar() {
    vista.mensajeBienvenida();
    bool adivinaCorrecto = false;
    unsigned int adivinanza;

    while (!adivinaCorrecto) {
        vista.mensajeAdivinanza();
        std::cin >> adivinanza;
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
