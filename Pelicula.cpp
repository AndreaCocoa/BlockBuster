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
    Pelicula(string nombre, string anio_publicacion, int cantidad_ejemplares, int ranking)
            : nombre(nombre), anio_publicacion(anio_publicacion), cantidad_ejemplares(cantidad_ejemplares), ranking(ranking) {}

    
    void mostrarDatos() {
        cout << "N " << nombre << endl;
        cout << "Año " << anio_publicacion << endl;
        cout << "Cantidad " << cantidad_ejemplares << endl;
        cout << "Rank " << ranking << endl;
    }
};