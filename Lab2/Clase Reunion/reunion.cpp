#include "reunion.h"
#include <iostream>

Reunion::Reunion()
{
    _cantidad_participantes = 0;
    _lugar = " ";
    _tema = " ";
    _duracion = 0;
}

void Reunion::setIntegrantes(std::string nuevo_nombre, std::string nuevo_apellido)
{
    _integrante[_cantidad_participantes].setNombre(nuevo_nombre);
    _integrante[_cantidad_participantes].setApellido(nuevo_apellido);
    _cantidad_participantes++;

}

std::string Reunion::getIntegrante(int integrante_index)
{
    std::string integrante; 
    
    if(integrante_index < _cantidad_participantes)
    {
        std::string nombre = _integrante[integrante_index].getNombre();
        std::string apellido = _integrante[integrante_index].getApellido();

        integrante = nombre + " " + apellido;
    }


    return integrante; 

}

int Reunion::getCantidadIntegrantes()
{
    return _cantidad_participantes;
}

void Reunion::setFechaHorario(FechaHorario fecha_horario)
{
    this->fecha_horario = fecha_horario;
}

void Reunion::setLugar(std::string lugar)
{
    _lugar = lugar;
}

void Reunion::setTema(std::string tema)
{
    _tema = tema;
}

void Reunion::setDuracion(int duracion)
{
    if(duracion >= 0)
    {
        _duracion = duracion;
    }

}

FechaHorario Reunion::getFechaHorario()
{
    return fecha_horario;
}

std::string Reunion::getLugar()
{
    return _lugar;
}

std::string Reunion::getTema()
{
    return _tema;
}

int Reunion::getDuracion()
{
    return _duracion;
}
