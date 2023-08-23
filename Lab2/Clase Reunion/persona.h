#pragma once 
#include <string>

class Persona
{
    public:
    Persona();
    Persona(std::string nombre, std::string apellido);

    void setNombre(std::string nombre);
    void setApellido(std::string apellido);
    std::string getNombre();
    std::string getApellido();


    private:
    std::string _nombre;
    std::string _apellido;

    
};