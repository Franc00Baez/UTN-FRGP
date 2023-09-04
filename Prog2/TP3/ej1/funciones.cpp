#include "funciones.h"

std::string returnString()
{
    std::string cad;

    std::getline(std::cin, cad);

    return cad;
}

int returnEntero()
{
    int ent;

    std::cin >> ent;

    return ent;
}

Fecha returnFecha()
{
    int d, m, a;
    Fecha aux;

    std::cout << "DIA: "; std::cin >> d;
    std::cout << "MES: "; std::cin >> m;
    std::cout << "ANIO: "; std::cin >> a;

    aux.setDia(d);
    aux.setMes(m);
    aux.setAnio(a);

    return aux;

}

void cargarVector(Empleado *e, int tam)
{
    Fecha aux;

    for(int i = 0; i < tam; i++)
    {
        std::cout << "DNI: "; e[i].setDNI(returnEntero());
        std::cin.ignore();
        std::cout << "Nombre: "; e[i].setNombre(returnString());
        std::cout << "Apellido: "; e[i].setApellido(returnString());
        std::cout << "Domicilio: "; e[i].setDomicilio(returnString());
        std::cout << "Email: "; e[i].setEmail(returnString());
        std::cout << "Nacimiento: " << std::endl; e[i].setNacimiento(returnFecha());
        std::cin.ignore();
        std::cout << "Cargo: "; e[i].setCargo(returnEntero());
        std::cin.ignore();
    }
}

void mostrarVector(Empleado *e, int tam)
{
    for(int i = 0; i < tam; i++)
    {
        std::cout << e[i].toString() << std::endl;
    }
}
