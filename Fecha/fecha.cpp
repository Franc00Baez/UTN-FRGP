#include "fecha.h"
#include <iostream>
#include <ctime> 

/**
 * Constructor por default.
*/
Fecha::Fecha()
{
    time_t t = time(NULL);
    struct tm *f = localtime(&t);
    _dia = f->tm_mday;
    _mes = f->tm_mon + 1;
    _anio = f->tm_year + 1900;
    _diaSemana = f->tm_wday;
}
/**
 * Constructor por parametros.
 * @param int d = DIA.
 * @param int m = MES.
 * @param int a = AÑO.
 */
Fecha::Fecha(int d, int m, int a)
{
    if(d > 0 && d <= dias_en_mes(m, a) && m > 0 && m <= 12 && a > 0 && a <= ANIO_DEFAULT)
    {
        setDia(d);
        setMes(m);
        setAnio(a);
        _diaSemana = -1;
    }else 
    {
        setDia(1);
        setMes(1);
        setAnio(ANIO_DEFAULT);
        _diaSemana = -1;
    }
    
}
void Fecha::agregarDias(int dias)
{
    if(dias > 0)
    {
        for(int i = 0; i < dias; i++)
        {
            agregarDia();
        }
    }else if(dias < 0) 
    {
        for(int i = 0; i < - dias; i++)
        {
            restarDia();
        }
    }
}

std::string Fecha::to_string()
{
    std::string dd;
    std::string mm;
    std::string aaaa = std::to_string(_anio);

    if(_dia < 10)
    {
        dd = "0" + std::to_string(_dia);
    }else dd = std::to_string(_dia);

    if(_mes < 10)
    {
        mm = "0" + std::to_string(_mes);
    }else mm = std::to_string(_mes);



    return dd + "/" + mm + "/" + aaaa;
}

void Fecha::setDia(int d)
{
    _dia = d;   
}

void Fecha::setMes(int m)
{
    _mes = m;
}

void Fecha::setAnio(int a)
{
    _anio = a;
}

int Fecha::getDia()
{
        return _dia;
}

int Fecha::getMes()
{
        return _mes;
}

int Fecha::getAnio()
{
        return _anio;
}

std::string Fecha::getNombreDia()
{
        std::string nombres[7] = {"Domingo", "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado"};
        if(_diaSemana >= 0 && _diaSemana <= 6 ) 
        {
            return nombres[_diaSemana];
        }
        else{ return "";}
}

//protected 

/**
 * Funcion protected de la clase fecha, calcula la cantidad de dias que tiene que haber segun el mes y el año,
 * teniendo encuenta año bisiesto.
 * @param int m = MES
 * @param int a = AÑO
*/
int Fecha::dias_en_mes(int m, int a)
{
    int cantDias = 31; //Enero, Marzo, Mayo, Julio, Agosto, Octubre, Diciembre. 

    if(m == 4 || m == 6 || m == 9 || m == 11)
    {
        cantDias = 30; //Abril, Junio, Septiembre, Noviembre.
    } else if(m == 2)
    {
        if((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
        {
            cantDias = 29; //Febrero año bisiesto.
        }else
        {
            cantDias = 28; //Febrero año no bisiestos.
        }
    }

    return cantDias;
}

/**
 * Funcion protected: 
 *  Agrega 1 dia, calcula cambio de mes y de año.
*/
void Fecha::agregarDia()
{
    if(_dia == dias_en_mes(_mes, _anio))
    {
        _dia = 1;

        if(_mes == 12)
        {
            _mes = 1;
            _anio ++;

        }else _mes ++;

    }else _dia ++;
}

/**
 * Funcion protected: 
 *  Resta 1 dia, calcula cambio de mes y de año.
*/
void Fecha::restarDia()
{
    if(_dia == 1)
    {
      if(_mes == 1)
      {
        _dia = dias_en_mes(12, _anio - 1);
        _mes = 12;
        _anio --;

      }else
      {
        _dia = dias_en_mes(_mes -1, _anio);
        _mes --;
      }
    }else _dia --; 

}
