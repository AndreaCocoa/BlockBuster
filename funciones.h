
#ifndef FUNCIONES_HEADER
#define FUNCIONES_HEADER

#include <vector>
#include <iostream>
#include <fstream>
#include "EmpresaX.h"
#include "Usuario.h"
#include "Pelicula.h"

using namespace std;

// Hacer que las funciones sean amigas de empresaX;
// Implementar un mostrarDatos en peliculas;

Pelicula registrarPelicula();
Usuario registrarUsuario();
Pelicula BuscarPelicula(EmpresaX x, string nombre);
void BuscarNombre(EmpresaX const &x);
void BuscarAnio(EmpresaX const &x);
void BuscarRanking(EmpresaX const &x);
void BuscarPelicula(EmpresaX const &x);
void AlquilarPelicula(EmpresaX &x);
void DevolverPelicula(EmpresaX &x);

#endif