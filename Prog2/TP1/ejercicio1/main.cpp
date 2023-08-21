#include <iostream>
#include "Articulo.h"
#include "Funciones.h"

const int tam = 3;


int main()
{
    Articulo p1[tam], p2;

    cargarVector(p1, tam);
    listarVector(p1,tam);
    PuntoC(p1, tam);
    std::cout << "POSICION: " << PuntoD(p1, tam, "yyyyy") << std::endl;
    p2 = PuntoE(p1, tam, "ttttt");
    std::cout << "REGRESO PUNTO E: " << std::endl;
    p2.Mostrar();


    return 0;
}