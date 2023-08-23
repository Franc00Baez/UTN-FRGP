#include "persona.h"
#include <iostream>

Persona::Persona()
{
    setNombre(" ");
    setApellido(" ");  
}

Persona::Persona(std::string nombre, std::string apellido)
{
    setNombre(nombre);
    setApellido(apellido);
}

void Persona::setNombre(std::string nombre)
{
    _nombre = nombre;
}

void Persona::setApellido(std::string apellido)
{
    _apellido = apellido;
}

std::string Persona::getNombre()
{
    return _nombre;
}

std::string Persona::getApellido()
{
    return _apellido;
}
