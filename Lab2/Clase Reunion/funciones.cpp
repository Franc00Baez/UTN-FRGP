#include "funciones.h"
#include <iostream>

void showVector(Reunion r[], int tam)
{
    std::cout << "FECHA Y HORARIO" << "\t\t" << "LUGAR" << "\t\t" << "TEMA" << "\t\t" << "DURACION" << "\t\t" << "INTEGRANTES" << std::endl;
    for(int i = 0; i < tam; i++)
    {
        std::cout << r[i].toString() << std::endl;
    }
}

Persona returnPersona()
{
    std::string name;
    std::string lastname;

    std::cout << "Ingrese Nombre: "; 
    std::cin >> name;
    std::cin.ignore();
    std::cout << "Ingrese apellido: ";
    std::cin >> lastname;
    std::cin.ignore();

    Persona p(name, lastname);

    return p;

    
}

FechaHorario returnFechaHorario()
{
    int a, b, c;

    std::cout << "DIA: ";  std::cin >> a;
    std::cout << "MES: ";  std::cin >> b;
    std::cout << "ANIO: "; std::cin >> c;

    Fecha date(a, b, c);
    std::cout << std::endl;

    std::cout << "SEC: ";  std::cin >> a;
    std::cout << "MIN: ";  std::cin >> b;
    std::cout << "HS: "; std::cin >> c;

    Horario time(a, b, c);

    FechaHorario date_time(date, time);
    std::cout << std::endl;

    return date_time;

}


void readVector(Reunion *r, int tam)
{   
    int d, integrantes;
    std::string tema, lugar;



    for(int i = 0; i < tam; i++)
    {
        r[i].setFechaHorario(returnFechaHorario());
        std::cin.ignore();
        std::cout << "Ingresa lugar: ";
        std::getline(std::cin, lugar);
        r[i].setLugar(lugar);
        std::cout << "Ingrese duracion: ";
        std::cin >> d;
        r[i].setDuracion(d);
        std::cout << "Ingrese tema: ";
        std::cin.ignore();
        std::getline(std::cin, tema);
        r[i].setTema(tema);

        std::cout << "Ingrese cantidad de participantes: ";
        std::cin >> integrantes; 
        r[i].crearVectorIntegrantes(integrantes);

        for(int j = 0; j < integrantes; j++)
        {
            r[i].setIntegrantes(returnPersona(), j);
        }





    }

}

void puntoA(Reunion *r, int tam)
{
    int pos, max = 0;

    for(int i = 0; i < tam; i++)
    {
        if(r[i].getDuracion() >= max)
        {
            max = r[i].getDuracion();
            pos = i;
        }
    }

    Persona p;

    for(int i = 0; i < r[pos].getCantidadIntegrantes(); i++)
    {
        p = r[pos].getIntegrante(i);
        std::cout << p.getNombre() + p.getApellido() << std::endl;

    }
}

void puntoB(Reunion *r, int tam)
{
    std::vector <std::string> p1, p2;
    Fecha actual;

    for(int i = 0; i < tam; i++)
    {
        if(r[i].getFechaHorario().getFecha().getAnio() == actual.getAnio())
        {   
            p1.push_back(r[i].getTema());
        }else if(r[i].getFechaHorario().getFecha().getAnio() > actual.getAnio())
        {
            p2.push_back(r[i].getTema());
        }
    }

    std::cout << "Temas year " << actual.getAnio()  << std::endl;
    for(std::string t:p1)
    {
        std::cout << t << std::endl;
    }

    std::cout << "Temas year " << actual.getAnio() + 1 << std::endl;
    for(std::string t:p2)
    {
        std::cout << t << std::endl;
    }
}

void puntoC(Reunion *r, int tam)
{
    Horario aux(0, 0, 20);

    for(int i = 0; i < tam; i++)
    {
        if(r[i].getFechaHorario().getHorario().getHora() >= aux.getHora() )
        {
            std::cout << r[i].toString() << std::endl;
        }
    }
}
