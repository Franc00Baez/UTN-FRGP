#include <iostream>
#include "Articulo.h"
#include "Funciones.h"

const int tam = 3;


int main()
{
    Articulo p1[tam];

    Menu(p1, tam);


    return 0;
}

/*Hacer una clase de nombre Articulo con las siguientes propiedades:
Código (char[5]), Descripción (char[30])
Precio (float), Stock(int), Estado(bool)

Y los siguientes métodos:
Cargar()
Mostrar()
Gets() para todas las propiedades
Sets() para todas las propiedades
Un constructor con parámetros por omisión
Un constructor para asignar valor sólo a la descripción
 
A partir de la clase Articulo del ejercicio anterior desarrollar las siguientes funciones:
a)     Cargar un vector de 10 artículos
b)     Listar todos los artículos del vector.
c)     Listar todos los artículos cuyo precio sea mayor a un valor que se ingresa por teclado.
d)     A partir de un valor de código recibido como parámetro, devolver la posición del objeto que contiene ese código. De no encontrarlo devolver -1.
e)     Igual a la función del punto anterior, pero debe devolver el objeto completo que contiene el código. De no encontrar el código la función debe devolver un objeto Articulo con un valor de -1 en el stock.
f)     Dado un valor de stock que se recibe como parámetro devolver la cantidad de artículos cuyo stock sea inferior a ese valor recibido.
g)     Dado un porcentaje de incremento que se recibe como parámetro, modificar el precio unitario de todos los objetos.
       Todas las funciones reciben el vector de Articulo y la cantidad de elementos del vector, además de los parámetros específicos.
       Desarrollar un proyecto de CodeBlock con un menú que llame a cada una de las funciones.
*/