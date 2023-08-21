#pragma once
#include <cstring>

class Articulo
{
    public:
    Articulo();
    Articulo(const char *codigo, const char *descripcion, float precio, int stock, bool estado);
    
    void Cargar();
    void Mostrar();

    void setCodigo(const char *codigo);
    void setDescripcion(const char *descripcion);
    void setPrecio(float precio);
    void setStock(int stock);
    void setEstado(bool estado);

    const char*  getCodigo();
    const char*  getDescripcion();
    float        getPrecio();
    int          getStock();
    bool         getEstado();

    private:
    char codigo[5];
    char descripcion[30];
    float precio;
    int stock;
    bool estado;


};
