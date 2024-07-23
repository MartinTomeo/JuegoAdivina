#ifndef VISTAJUEGO_H
#define VISTAJUEGO_H
#include <iostream>
#include <string>

class VistaJuego
{
    public:
        void mensajeBienvenida();
        void mensajeAdivinanza();
        void mensajeResultado(bool);
        void mensajeNumeroAlto();
        void mensajeNumeroBajo();
        void mensajeNumeroValido();
        void mensajeDuplicado();
        void mensajeIntroducirLimSup();
        void mensajeIntroducirLimInf();
        void mensajeErrorLimites();


};

#endif // VISTAJUEGO_H


