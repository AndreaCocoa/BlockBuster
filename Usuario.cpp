#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pelicula {
};

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
    void setDni(string dni) {
        this->dni = dni;
    }

    void setNombre(string nombre) {
        this->nombre = nombre;
    }

    void setApellido(string apellido) {
        this->apellido = apellido;
    }

    // Getters
    string getDni() const {
        return dni;
    }

    string getNombre() const {
        return nombre;
    }

    string getApellido() const {
        return apellido;
    }

    // Métodos
    void alquilarPelicula(const Pelicula& pelicula) {
        peliculas.push_back(pelicula);
        cout << "La película \"" << pelicula.getTitulo() << "\" ha sido alquilada." << endl;
    }

    void devolverPelicula(const Pelicula& pelicula) {
        for (auto it = peliculas.begin(); it != peliculas.end(); ++it) {
            if (it->getTitulo() == pelicula.getTitulo()) {
                peliculas.erase(it);
                cout << "La película \"" << pelicula.getTitulo() << "\" ha sido devuelta." << endl;
                return;
            }
        }
        cout << "El usuario no tiene alquilada la película \"" << pelicula.getTitulo() << "\"." << endl;
    }
};