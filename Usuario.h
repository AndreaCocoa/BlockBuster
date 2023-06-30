#ifndef CLASE_USUARIO
#define CLASE_USUARIO

#include <vector>
#include "Pelicula.h"

using namespace std;

class Usuario {
private:
    string dni;
    string nombre;
    string apellido;
    vector<Pelicula> peliculas;

public:
    // Constructor
    Usuario(string dni, string nombre, string apellido) : dni(dni), nombre(nombre), apellido(apellido) {}

    // Setters
    void setDni(string dni);
    void setNombre(string nombre);
    void setApellido(string apellido);

    // Getters
    string getDni() const;
    string getNombre() const;
    string getApellido() const;
    // Métodos
    void alquilarPelicula(const Pelicula& pelicula);
    void devolverPelicula(const Pelicula& pelicula);
};

#endif