

#ifndef UNTITLED22_DEVOLVERPELICULA_H
#define UNTITLED22_DEVOLVERPELICULA_H
#include "AlquilarPelicula.h"
void DevolverPelicula(EmpresaX &x) {

    string nombre_pelicula;
    int ranking_nuevo;

    cout << "Ingrese el nombre o ID de la película a devolver: ";
    cin >> nombre_pelicula;

    // Buscar la película en el listado
    Pelicula pelicula = BuscarPelicula(x, nombre_pelicula);

    if (pelicula.nombre.empty()) {
        cout << "La película no existe o no se ha solicitado un alquiler." << endl;
        return;
    }

    cout << "Ingrese el ranking nuevo de la película: ";
    cin >> ranking_nuevo;

    if(ranking_nuevo < 0 or ranking_nuevo > 5) {
        cout << "Ranking dado no se encuentra entre 1 y 5. "<<endl;
        cout << "Ingrese el ranking nuevo de la película: ";
        cin >> ranking_nuevo;
    }

    // Actualizar el ranking de la película
    pelicula.estrellas = ranking_nuevo;

    char respuesta;
    cout << "¿Está de acuerdo con la devolución de la película? (S/N): ";
    cin >> respuesta;

    if (respuesta == 'S' || respuesta == 's') {
        // Aumentar la cantidad disponible de la película en 1
        pelicula.cantidad_disponible += 1;
        cout << "Devolución exitosa." << endl;
    } else {
        cout << "No se realizó la devolución." << endl;
    }
}
#endif //UNTITLED22_DEVOLVERPELICULA_H
