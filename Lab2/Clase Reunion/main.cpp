#include <iostream>
using namespace std;
#include "reunion.h"

int main(){

    Reunion reunion[2];

    FechaHorario fecha_hora_1(1, 10, 2023, 0, 0, 19);
    std::string lugar_1 = "Buenos Aires";
    std::string tema_1 = "Programacion en C++";
    reunion[0].setFechaHorario(fecha_hora_1);
    reunion[0].setLugar(lugar_1);
    reunion[0].setTema(tema_1);
    reunion[0].setDuracion(90);
    reunion[0].setIntegrantes("Brian", "Lara");
    reunion[0].setIntegrantes("Angel", "Simon");

    FechaHorario fecha_hora_2(1, 4, 2023, 0, 0, 19);
    std::string lugar_2 = "Internet";
    std::string tema_2 = "Estadistica y programacion";
    reunion[1].setFechaHorario(fecha_hora_2);
    reunion[1].setLugar(lugar_2);
    reunion[1].setTema(tema_2);
    reunion[1].setDuracion(100);
    reunion[1].setIntegrantes("Franco", "Baez");

    std::cout << "FECHA Y HORA\t\tLUGAR\t\tTEMA\t\tDURACION\t\tPARTICIPANTES\n";

    for(int i = 0; i < 2; i++)
    {
        std::cout << reunion[i].getFechaHorario().toString() + "\t" + reunion[i].getLugar() + "\t" + reunion[i].getTema() + "\t" << reunion[i].getDuracion() << "\t\t";
        for(int j = 0; j < reunion[i].getCantidadIntegrantes(); j++)
        {
            if(j < reunion[i].getCantidadIntegrantes() - 1)
            {
                std::cout << reunion[i].getIntegrante(j) + ", ";

            }else { std::cout << reunion[i].getIntegrante(j); }
        }
        std::cout << "\n";
    }

    return 0;
    
}