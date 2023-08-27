#include "reunion.h"
#include <iostream>


Reunion::Reunion()
{
    _integrante = nullptr;
    _duracion = 0;
    _tema = "";
    _lugar = "";
}

Reunion::~Reunion()
{
    if(_cantidad_participantes > 0)
    {
        delete []_integrante;
    }
}


Persona Reunion::getIntegrante(int integrante_index)
{
    if (integrante_index >= 0 && integrante_index <= _cantidad_participantes -1){
    return _integrante[integrante_index];
  }
  else{
    return _integrante[0];
  }
}

int Reunion::getCantidadIntegrantes()
{
    return _cantidad_participantes;
}

void Reunion::setFechaHorario(FechaHorario fecha_horario)
{
    this->fecha_horario = fecha_horario;
}

void Reunion::setFechaHorario(Fecha fecha, Horario horario)
{
    fecha_horario.setFecha(fecha);
    fecha_horario.setHorario(horario);
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

void Reunion::crearVectorIntegrantes(int cantidad)
{
    if(cantidad > 0)
    {
        _integrante = nullptr;
        _integrante = new Persona[cantidad];
        if(_integrante == nullptr)
        {
            _cantidad_participantes = 0;
        }
        else
        {
            _cantidad_participantes = cantidad;
        } 
    }else 
    {
        _cantidad_participantes = 0;
    }
}

std::string Reunion::toString()
{
   std::string aux = fecha_horario.toString();
   aux += "\t\t" + getLugar();
   aux += "\t\t" + getTema();
   aux += "\t\t" + std::to_string(_duracion);
   for(int i=0; i < _cantidad_participantes; i++)
   {
    aux += "\t" + _integrante[i].getApellido();
    aux += " "+ _integrante[i].getNombre();
   }

   return aux;
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


void Reunion::setIntegrantes(Persona integrante, int indice)
{
    _integrante[indice] = integrante;
}