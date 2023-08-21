#include "Articulo.h"
#include <iostream>

///FUNCION PARA LEER CADENAS.
void cargarCadena(char *palabra, int tamano){

    int i=0;

    fflush(stdin);

    for (i=0; i<tamano; i++){

        palabra[i]=std::cin.get();

        if (palabra[i]=='\n'){

            break;

        }

    }

    palabra[i]='\0';

    fflush(stdin);

}

void Articulo::Cargar()
{
    std::cout << "Ingrese un codigo (5 caracteres): ";
    cargarCadena(codigo, 5);
    std::cout << "Ingrese una descripcion (30 caracteres): ";
    cargarCadena(descripcion, 30);
    std::cout << "Ingrese el precio: ";
    std::cin >> precio;
    std::cout << "Ingrese el stock: ";
    std::cin >> stock;
    std::cout << "Ingrese el estado (1 para activo, 0 para inactivo): ";
    std::cin >> estado;

}

void Articulo::Mostrar()
{
    std::cout << "Codigo: " << codigo << std::endl;
    std::cout << "Descripcion: " << descripcion << std::endl;
    std::cout << "Precio: $" << precio << std::endl;
    std::cout << "Stock: " << stock << std::endl;
    std::cout << "Estado: " << (estado ? "Activo" : "Inactivo") << std::endl;
}

void Articulo::setCodigo(const char *codigo)
{
    strncpy(this->codigo, codigo, 5);
    this->codigo[5] = '\0';
}

const char *Articulo::getCodigo()
{
    return codigo;
}

