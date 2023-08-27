#pragma once
#include "fechahorario.h"
#include "persona.h"

class Reunion
{
    public:
    //Constructores
    Reunion();
    ~Reunion();

    //Metodos
    void setIntegrantes(Persona integrante, int indice);
    Persona getIntegrante(int integrante_index);
    int getCantidadIntegrantes();

    void setFechaHorario(FechaHorario fecha_horario);
    void setFechaHorario(Fecha fecha, Horario horario);
    void setLugar(std::string lugar);
    void setTema(std::string tema);
    void setDuracion(int duracion);
    void crearVectorIntegrantes(int cantidad);

    std::string toString();

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
    Persona * _integrante;

};