#ifndef CLASE_EMPRESAX
#define CLASE_EMPRESAX

#include <iostream>
#include <vector>
#include "Pelicula.cpp"

using namespace std;

class EmpresaX {
    string nombre;
    string direccion;
    string ruc;
    vector <Pelicula> listado_peliculas;
public:
    EmpresaX(string _nombre, string _direccion, string _ruc, vector <Pelicula> v);
    void mostrarDatos();
    ~EmpresaX();
};

#endif