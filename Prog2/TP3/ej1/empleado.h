#pragma once
#include <string>
#include <iostream>
#include "fecha.h"


class Empleado
{
    public:
    Empleado();
    Empleado(int _dni, int _cargo, std::string _nombre, std::string _apellido, std::string _domicilio, std::string _email, Fecha _nacimiento);

    void setDNI(int _dni);    
    void setCargo(int _cargo);
    void setNombre(std::string _nombre);
    void setApellido(std::string _apellido);
    void setDomicilio(std::string _domicilio);
    void setEmail(std::string _email);    
    void setNacimiento(Fecha _nacimiento);

    int getDNI();
    int getCargo();
    std::string getNombre();
    std::string getApellido();
    std::string getDomicilio();
    std::string getEmail();
    Fecha getNacimiento(); 

    std::string toString();

    private:
    int _dni, _cargo;
    std::string _nombre, _apellido, _domicilio, _email;
    Fecha _nacimiento;


};