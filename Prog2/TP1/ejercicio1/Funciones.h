#pragma once
#include "Articulo.h"

void cargarVector(Articulo *vArt, int tam);
void listarVector(Articulo *vArt, int tam);
void PuntoC(Articulo *vArt, int tam);
int PuntoD(Articulo *vArt, int tam, const char *codigo);
Articulo PuntoE(Articulo *vArt, int tam, const char *codigo);
int PuntoF(Articulo *vArt, int tam, int stock);
void PuntoG(Articulo *vArt, int tam, float porcentaje);
void Menu(Articulo *vArt, int tam);