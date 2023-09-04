#include "empleado.h"

Empleado::Empleado()
{
    _dni = 0;
    _cargo = 1;
    _nombre = " ";
    _apellido = " ";
    _domicilio = " ";
    _email = " ";

}

Empleado::Empleado(int _dni, int _cargo, std::string _nombre, std::string _apellido, std::string _domicilio, std::string _email, Fecha _nacimiento)
{
    this -> _dni = _dni;
    this -> _cargo = _cargo;
    this -> _nombre = _nombre;
    this -> _apellido = _apellido;
    this -> _domicilio = _domicilio;
    this -> _email = _email;
    this -> _nacimiento = _nacimiento;
}

void Empleado::setDNI(int _dni)
{
    this -> _dni = _dni;
}

void Empleado::setCargo(int _cargo)
{
    if(_cargo > 0 && _cargo <= 5)
    {
        this -> _cargo = _cargo;

    }else { this -> _cargo = -1;}
}

void Empleado::setNombre(std::string _nombre)
{
    this -> _nombre = _nombre;
}

void Empleado::setApellido(std::string _apellido)
{
    this -> _apellido = _apellido;
}

void Empleado::setDomicilio(std::string _domicilio)
{
    this -> _domicilio = _domicilio;
}

void Empleado::setEmail(std::string _email)
{
    this -> _email = _email;
}

void Empleado::setNacimiento(Fecha _nacimiento)
{
    this -> _nacimiento = _nacimiento;
}

int Empleado::getDNI()
{
    return _dni;
}

int Empleado::getCargo()
{
    return _cargo;
}

std::string Empleado::getNombre()
{
    return _nombre;
}

std::string Empleado::getApellido()
{
    return _apellido;
}

std::string Empleado::getDomicilio()
{
    return _domicilio;
}

std::string Empleado::getEmail()
{
    return _email;
}

Fecha Empleado::getNacimiento()
{
    return _nacimiento;
}

std::string Empleado::toString()
{
    std::string cad;

    cad = getNombre() + " " + getApellido() + "\n";
    cad += std::to_string(getDNI()) + "\n";
    cad += _nacimiento.toString() + "\n";
    cad += getDomicilio() + "\n";
    cad += getEmail() + "\n";
    cad += std::to_string(getCargo()) + "\n";

    return cad;
    


}
