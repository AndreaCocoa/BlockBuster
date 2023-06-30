#include "Pelicula.h"

Pelicula::Pelicula() = default;

Pelicula::Pelicula(string nombre, string anio_publicacion, int cantidad_ejemplares, int ranking)
: nombre(nombre), anio_publicacion(anio_publicacion), cantidad_ejemplares(cantidad_ejemplares), ranking(ranking) {}

Pelicula::Pelicula(string nombre_pelicula, string anio_publicacion, int ejemplares_disponibles){
    this -> nombre = nombre_pelicula;
    this -> anio_publicacion= anio_publicacion;
    this -> cantidad_ejemplares = ejemplares_disponibles;
}

void Pelicula::mostrarDatos() {
    cout << "N " << nombre << endl;
    cout << "Año " << anio_publicacion << endl;
    cout << "Cantidad " << cantidad_ejemplares << endl;
    cout << "Rank " << ranking << endl;
}

string Pelicula::getNombre() {
    return this -> nombre;
}
string Pelicula::getAnio_publicacion() {
    return this -> anio_publicacion;
}
int Pelicula::getCantidad_ejemplares() {
    return this -> cantidad_ejemplares;
}
int Pelicula::getRanking() {
    return this -> ranking;
}

Pelicula::~Pelicula() = default;