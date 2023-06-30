#include "Usuario.h"

Usuario::Usuario(string dni, string nombre, string apellido) : dni(dni), nombre(nombre), apellido(apellido) {}

// Setters
void Usuario::setDni(string dni) {
    this->dni = dni;
}

void Usuario::setNombre(string nombre) {
    this->nombre = nombre;
}

void Usuario::setApellido(string apellido) {
    this->apellido = apellido;
}

// Getters
string Usuario::getDni() const {
    return dni;
}

string Usuario::getNombre() const {
    return nombre;
}

string Usuario::getApellido() const {
    return apellido;
}

void Usuario::alquilarPelicula(const Pelicula& pelicula) {
    peliculas.push_back(pelicula);
    cout << "La película \"" << pelicula.getTitulo() << "\" ha sido alquilada." << endl;
}

void Usuario::devolverPelicula(const Pelicula& pelicula) {
    for (auto it = peliculas.begin(); it != peliculas.end(); ++it) {
        if (it->getTitulo() == pelicula.getTitulo()) {
            peliculas.erase(it);
            cout << "La película \"" << pelicula.getTitulo() << "\" ha sido devuelta." << endl;
            return;
        }
    }
    cout << "El usuario no tiene alquilada la película \"" << pelicula.getTitulo() << "\"." << endl;
}

