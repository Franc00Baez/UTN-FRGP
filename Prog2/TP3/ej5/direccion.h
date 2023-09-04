#pragma once
#include <string>

class Direccion
{
    public:
    Direccion();
    Direccion(std::string _calle, int _numero, int _cp, std::string _localidad, std::string _piso);

    void setCalle(std::string _calle);
    void setNumero(int _numero);
    void setCP(int _cp);
    void setLocalidad(std::string _localidad);
    void setPiso(std::string _piso);

    std::string getCalle();
    std::string getLocalidad();
    std::string getPiso();
    int getNumero();
    int getCp();

    std::string toString();

    private:
    std::string _calle, _localidad, _piso;
    int _numero, _cp;


};