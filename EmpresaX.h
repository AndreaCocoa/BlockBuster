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
    vector <Usuario> usuarios;
public:
    EmpresaX(string _nombre, string _direccion, string _ruc, vector <Pelicula> v);
    void mostrarDatos();
    ~EmpresaX();

    // amigas
    friend void BuscarNombre(EmpresaX const &x);
    friend void BuscarAnio(EmpresaX const &x);
    friend void BuscarRanking(EmpresaX const &x);
    friend Pelicula BuscarPelicula(EmpresaX x, string nombre);
    friend void AlquilarPelicula(EmpresaX &x);
};

#endif