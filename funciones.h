
#ifndef FUNCIONES_HEADER
#define FUNCIONES_HEADER

#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

// Hacer que las funciones sean amigas de empresaX;
// Implementar un mostrarDatos en peliculas;

class Pelicula {
    public:
    Pelicula();
    void mostrarDatos() {
        cout << "a";
    }
    ~Pelicula();
};

class EmpresaX {
        vector <Pelicula> listado_peliculas;

    public:
    EmpresaX();
    friend void BuscarPelicula(EmpresaX const &x);
    friend void BuscarNombre(EmpresaX const &x);
    friend void BuscarAnio(EmpresaX const &x);
    friend void BuscarRanking(EmpresaX const &x);
    ~EmpresaX();
};



void BuscarPelicula();
void leerPelis(string nombre_archivo);
#endif