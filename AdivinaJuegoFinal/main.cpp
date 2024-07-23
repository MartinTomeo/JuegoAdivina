#include "ModeloJuego.h"
#include "VistaJuego.h"
#include "ControladorJuego.h"
//#include<tau/tau.h>


int main() {
    ModeloJuego modelo;
    VistaJuego vista;
    ControladorJuego controlador(modelo, vista);
    controlador.empezar();
    return 0;
}


/*
TAU_MAIN()
TEST (TestModelo, Modelo)
{
    ModeloJuego m;//llama generar numero
    CHECK(m.generarNumero(10, 1)==true);//chequeo generar numero
    CHECK(m.getNumeroAdivinar()>=1);//chequeo el techo del numero que genero el constructor
    CHECK(m.getNumeroAdivinar()<=10);//chequeo el techo del numero generado


    //adivinar
    CHECK(m.adivinar(m.getNumeroAdivinar())==true);//chequeo que adivinar devuelva true cuando coinside con el numeroAdivinar
    CHECK(m.adivinar(!m.getNumeroAdivinar())==false);//chequeo que devuelva false cuando no coincide con numeroAdivinar
    CHECK(m.bufferVacio()==false);
    m.adivinar(5);
    CHECK(m.numeroEnBuffer(5)==true);

    //depuradorDeCaracteres
    CHECK(m.depuradorDeNumero(40,100, 200)==false);
    CHECK(m.depuradorDeNumero(4,1, 20)==true);
    CHECK(m.depuradorDeNumero('c', 1, 20)==false);

    //bufferVacio && agregarNumeroBuffer
    ModeloJuego mo;
    CHECK(mo.bufferVacio()==true);
    mo.agregarNumeroBuffer(1);
    mo.agregarNumeroBuffer(2);
    mo.agregarNumeroBuffer(3);
    mo.agregarNumeroBuffer(4);
    mo.agregarNumeroBuffer(4);
    CHECK(mo.bufferVacio()==false);

    //numeroEnBuffer
    CHECK(mo.numeroEnBuffer(1)==true);
    CHECK(mo.numeroEnBuffer(2)==true);
    CHECK(mo.numeroEnBuffer(3)==true);
    CHECK(mo.numeroEnBuffer(4)==true);
    CHECK(mo.numeroEnBuffer(5)==false);


    CHECK(mo.controlLimites(10, 10)==false);
    CHECK(mo.controlLimites(1, 10)==false);
    CHECK(mo.controlLimites(10, 1)==true);



}
*/


