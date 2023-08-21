#include "Articulo.h"
#include <iostream>


Articulo::Articulo()
{
    setCodigo(" ");
    setDescripcion(" ");
    setPrecio(0.00);
    setStock(0);
    setEstado(1);

}

Articulo::Articulo(const char *codigo, const char *descripcion, float precio, int stock, bool estado)
{
    setCodigo(codigo);
    setDescripcion(descripcion);
    setPrecio(precio);
    setStock(stock);
    setEstado(estado);
}

void Articulo::Cargar()
{
    std::cout << "Ingrese un codigo (5 caracteres): ";
    std::cin >> codigo;
    std::cin.ignore();
    std::cout << "Ingrese una descripcion (30 caracteres): ";
    std::cin.getline(descripcion, 30);
    std::cout << "Ingrese el precio: ";
    std::cin >> precio;
    std::cout << "Ingrese el stock: ";
    std::cin >> stock;
    std::cout << "Ingrese el estado (1 para activo, 0 para inactivo): ";
    std::cin >> estado;

}

void Articulo::Mostrar()
{
    std::cout << "Codigo: " << codigo << std::endl;
    std::cout << "Descripcion: " << descripcion << std::endl;
    std::cout << "Precio: $" << precio << std::endl;
    std::cout << "Stock: " << stock << std::endl;
    std::cout << "Estado: " << (estado ? "Activo" : "Inactivo") << std::endl;
}

void Articulo::setCodigo(const char *codigo)
{
    strncpy(this->codigo, codigo, 5);
    this->codigo[5] = '\0';
}

void Articulo::setDescripcion(const char *descripcion)
{
    strncpy(this->descripcion, descripcion, 30);
    this->descripcion[30] = '\0';
}

void Articulo::setPrecio(float precio)
{
    this->precio = precio;
}

void Articulo::setStock(int stock)
{
    this->stock = stock;
}

void Articulo::setEstado(bool estado)
{
    this->estado = estado;
}

const char *Articulo::getCodigo()
{
    return codigo;
}

const char *Articulo::getDescripcion()
{
    return descripcion;
}

float Articulo::getPrecio()
{
    return precio;
}

int Articulo::getStock()
{
    return stock;
}

bool Articulo::getEstado()
{
    return estado;
}
