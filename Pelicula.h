#ifndef CLASE_PELICULA
#define CLASE_PELICULA

#include <iostream>
#include <string>

using namespace std;

class Pelicula {
private:
    string nombre;
    string anio_publicacion;
    int cantidad_ejemplares;
    int ranking;

public:
    Pelicula();
    Pelicula(string nombre, string anio_publicacion, int cantidad_ejemplares, int ranking);  
    Pelicula::Pelicula(string nombre_pelicula, string anio_publicacion, int ejemplares_disponibles);
    void mostrarDatos();
    ~Pelicula();

    // Getters
    string getNombre();
    string getAnio_publicacion();
    int getCantidad_ejemplares();
    int getRanking();

    friend void DevolverPelicula(EmpresaX &x);
    friend void AlquilarPelicula(EmpresaX &x);
};

#endif