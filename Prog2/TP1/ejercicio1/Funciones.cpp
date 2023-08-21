#include "Funciones.h"
#include <iostream>

void cargarVector(Articulo *vArt, int tam)
{
    for(int i = 0; i < tam; i++)
    {
        vArt[i].Cargar();
        std::cout << std::endl;
    }
}

void listarVector(Articulo *vArt, int tam)
{
    for(int i = 0; i < tam; i++)
    {
        vArt[i].Mostrar();
        std::cout << std::endl;
    }
}

void PuntoC(Articulo *vArt, int tam)
{
    float aux;
    std::cout << "Ingrese un precio de referencia: ";
    std::cin >> aux;

    for(int i = 0; i < tam; i++)
    {
        if(vArt[i].getPrecio() >= aux)
        {
            vArt[i].Mostrar();
            std::cout << std::endl;
        }
    }

}

int PuntoD(Articulo *vArt, int tam, const char *codigo)
{

    for(int i = 0; i < tam; i++)
    {
        if(strcmp(vArt[i].getCodigo(), codigo) == 0)
        {
            return i;
        }

    }

    return -1;
}

Articulo PuntoE(Articulo *vArt, int tam, const char *codigo)
{
    for(int i = 0; i < tam; i++)
    {
        if(strcmp(vArt[i].getCodigo(), codigo) == 0)
        {
            return vArt[i];
        }

    }

    return Articulo(" ", " ",0.00, -1, 1);
}

int PuntoF(Articulo *vArt, int tam, int stock)
{
    int cant = 0;

    for(int i = 0; i < tam; i++)
    {
        if(vArt->getStock() < stock)
        {
            cant++;
        }

    }

    return cant;
}

void PuntoG(Articulo *vArt, int tam, float porcentaje)
{
    for(int i = 0; i < tam; i++)
    {
        vArt[i].setPrecio(vArt[i].getPrecio() * porcentaje);
    }
}
