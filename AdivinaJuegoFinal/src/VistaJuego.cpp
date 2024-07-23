#include "VistaJuego.h"

void VistaJuego::mensajeBienvenida(){
    std::cout << "Adivina el numero!!!" << std::endl;
}

void VistaJuego::mensajeAdivinanza(){
    std::cout << "Que numero es: ";
}

void VistaJuego::mensajeResultado(bool esCorrecto){
    switch (esCorrecto) {
        case true:
            std::cout << "Felizitaciones lo adivinaste!!!" << std::endl;
            break;
        case false:
            std::cout << "Fallaste" << std::endl;
            break;
        default:
            std::cout<<"error"<<std::endl;
    }
}

void VistaJuego::mensajeNumeroAlto(){
    std::cout << "Numero muy alto" << std::endl;
}

void VistaJuego::mensajeNumeroBajo(){
    std::cout << "Numero muy bajo" << std::endl;
}

void VistaJuego::mensajeNumeroValido(){
    std::cout << "Numero Invalido" << std::endl;
}

void VistaJuego::mensajeDuplicado(){
    std::cout << "Numero ya fue ingresado" << std::endl;
}

void VistaJuego::mensajeErrorLimites(){
    std::cout<<"Error en los limites ingresados"<<std::endl;
}

void VistaJuego::mensajeIntroducirLimSup(){
    std::cout<<"Introduce limite superior: ";
}

void VistaJuego::mensajeIntroducirLimInf(){
    std::cout<<"Introduce limite Inferior: ";
}
