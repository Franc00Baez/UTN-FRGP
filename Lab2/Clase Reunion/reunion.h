#pragma once
#include "fechahorario.h"
#include "persona.h"

class Reunion
{
    public:
    //Constructores
    Reunion();

    //Metodos
    void setIntegrantes(std::string nuevo_integrante, std::string nuevo_apellido);
    std::string getIntegrante(int integrante_index);
    int getCantidadIntegrantes();

    void setFechaHorario(FechaHorario fecha_horario);
    void setLugar(std::string lugar);
    void setTema(std::string tema);
    void setDuracion(int duracion);

    FechaHorario getFechaHorario();
    std::string getLugar();
    std::string getTema();
    int getDuracion();

    private:
    FechaHorario fecha_horario;
    int _cantidad_participantes;
    std::string _lugar;
    std::string _tema;
    int _duracion;
    Persona _integrante[5] = {};

};