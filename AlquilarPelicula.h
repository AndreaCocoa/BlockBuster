//
// Created by User on 28/06/2023.
//

#ifndef UNTITLED22_ALQUILARPELICULA_H
#define UNTITLED22_ALQUILARPELICULA_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void AlquilarPelicula(EmpresaX &x) {
    string dni;
    string nombre_pelicula;
    int cantidad_dias;
    int monto_final;

    cout << "Ingrese su DNI: ";
    cin >> dni;

    // Verificar si el usuario está registrado
    bool usuario_registrado = false;

    if (!usuario_registrado) {
        cout << "Usted no está registrado. Derivando a RegistrarUsuario()..." << endl;
        RegistrarUsuario();
    }

    cout << "Ingrese el nombre o ID de la película a alquilar: ";
    cin >> nombre_pelicula;

    // Buscar película
    Pelicula pelicula = BuscarPelicula(x, nombre_pelicula);

    if (pelicula.nombre.empty()) {
        cout << "La película no existe." << endl;
        return;
    }

    // Verificar disponibilidad
    if (pelicula.cantidad_disponible > 0) {
        cout << "Película disponible: " << pelicula.nombre << endl;

        cout << "Ingrese la cantidad de días de alquiler: ";
        cin >> cantidad_dias;

        // Calcular monto final según estrellas
        if (pelicula.estrellas >= 3) {
            monto_final = cantidad_dias * 5.4;
        } else {
            monto_final = cantidad_dias * 4.3;
        }

        // Actualizar cantidad_disponible
        pelicula.cantidad_disponible -= 1;

        cout << "Monto de alquiler: " << monto_final << endl;
        cout << "¡Alquiler realizado con éxito!" << endl;
    } else {
        cout << "La película no está disponible." << endl;
    }
}
#endif //UNTITLED22_ALQUILARPELICULA_H
