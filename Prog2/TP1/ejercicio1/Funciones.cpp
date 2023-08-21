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
        if(vArt[i].getStock() < stock)
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

void Menu(Articulo *vArt, int tam)
{
    int eleccion;
    bool B = true;
    Articulo aux;
    do{
        system("CLS");
        std::cout << "\tMENU" << std::endl;
        std::cout << "1.Cargar Vector de Articulos." << std::endl;
        std::cout << "2.Listar Vector de Articulos." << std::endl;
        std::cout << "3.Punto C." << std::endl;
        std::cout << "4.Punto D." << std::endl;
        std::cout << "5.Punto E." << std::endl;
        std::cout << "6.Punto F." << std::endl;
        std::cout << "7.Punto G." << std::endl;
        std::cout << "0.Salir." << std::endl;
        std::cin >> eleccion;

        switch (eleccion)
        {
        case 1:
            system("CLS");
            cargarVector(vArt, tam);
            std::cout << std::endl;
            system("PAUSE");
            system("CLS");
            break;
        case 2:
            system("CLS");
            listarVector(vArt, tam);
            std::cout << std::endl;
            system("PAUSE");
            system("CLS");
            break;
        case 3:
            system("CLS");
            PuntoC(vArt, tam);
            std::cout << std::endl;
            system("PAUSE");
            system("CLS");
            break;
        case 4:
            system("CLS");
            std::cout << "La posicion del articulo dentro del vector es: " << PuntoD(vArt, tam, "yyyyy");
            std::cout << std::endl;
            system("PAUSE");
            system("CLS");
            break;
        case 5:
            system("CLS");
            aux = PuntoE(vArt, tam, "yyyyy");
            std::cout << "Articulo con el codigo seleccionado: " << std::endl;
            aux.Mostrar();
            std::cout << std::endl;
            system("PAUSE");
            system("CLS");
            break;
        case 6:
            system("CLS");
            std::cout<< "Cantidad de articulos con un stock menor al indicado: " << PuntoF(vArt, tam, 300);
            std::cout << std::endl;
            system("PAUSE");
            system("CLS");
            break;
        case 7:
            system("CLS");
            PuntoG(vArt, tam, 1.25);
            std::cout <<"Incremento exitoso." << std::endl;
            system("PAUSE");
            system("CLS");
            break;
        case 0:
            std::cout << "\nGracias por su visita." << std::endl;
            system("PAUSE");
            B = false;
            break;
        
        default:
            std::cout << "#ERROR# -- Ingresaste un numero incorrecto." << std::endl;
            std::cout << "Porfavor ingrese un numero valido." << std::endl;
            system("PAUSE");
            system("CLS");
            break;
        }


    }while(B != false);
}
