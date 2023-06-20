// Header con declaracion de funciones
#include "funciones.h"


// Estas funciones deben ser amigas de EmpresaX!

void BuscarNombre(EmpresaX const &x) {
    string nombre;
    cout << "Ingrese nombre a buscar: ";
    getline(cin, nombre);

    for (int i = 0; i < x.listado_peliculas.size(); i++){
        if (x.listado_peliculas[i].getNombre()==nombre) {
            x.listado_peliculas[i].mostrarDatos();
        }
    }
}

void BuscarAnio(EmpresaX const &x) {
    int anio;
    cout << "Ingrese anio de publicacion a buscar: ";
    cin >> anio;

    for (int i = 0; i < x.listado_peliculas.size(); i++){
        if (x.listado_peliculas[i].getAnio_Publicacion()==anio) {
            x.listado_peliculas[i].mostrarDatos();
        }
    }
}

void BuscarRanking(EmpresaX const &x) {

    int ranking, menor_igual;

    cout << "Ingrese ranking a buscar: ";
    cin >> ranking;
    cout << "(1) Mayor igual\n(2) Menor igual" << endl;
    cout << "Elija una opcion (1/2): ";
    cin >> menor_igual;

    switch (menor_igual)
    {
    case 1:
        for (int i = 0; i < x.listado_peliculas.size(); i++) {
            if (x.listado_peliculas[i].getRanking()>=ranking) {
                x.listado_peliculas[i].mostrarDatos();
            }
        }
        break;

    case 2:
        for (int i = 0; i < x.listado_peliculas.size(); i++) {
            if (x.listado_peliculas[i].getRanking()>=ranking) {
                x.listado_peliculas[i].mostrarDatos();
            }
        }
        break;

    default:
    cout << "Opcion no valida. Regresando al menu." << endl;
        break;
    }
    
}


void BuscarPelicula(EmpresaX const &x) {
    int opcion;
    cout << "BUSCAR PELICULA por:" << endl;
    cout << "(1) Nombre"<< endl;
    cout << "(2) Anio" << endl;
    cout << "(3) Ranking" << endl;

    do {
        cout << "Seleccione una opcion: ";
        cin >> opcion;
    } while (opcion > 3 || opcion < 0);

    switch (opcion)
    {
    case 1:
        BuscarNombre(x);
        break;
    
    case 2:
        BuscarAnio(x);
        break;
    case 3:
        BuscarRanking(x);
        break;
    default:
        break;
    }
    
}