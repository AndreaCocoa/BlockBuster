#include "EmpresaX.h"

EmpresaX::EmpresaX(string _nombre, string _direccion, string _ruc, vector <Pelicula> v) {
    this -> nombre = _nombre;
    this -> direccion = _direccion;
    this -> ruc = _ruc;
    this -> listado_peliculas = v;

}
void EmpresaX::mostrarDatos() {
    cout << "------- INFORMACION DE LA EMPRESA -------" << endl;
    cout << "NOMBRE: " << this -> nombre << endl;
    cout << "DIRECCION: " << this -> direccion << endl;
    cout << "RUC: " << this -> ruc << endl;
    cout << "-----------------------------------------" << endl;
}

EmpresaX::~EmpresaX() = default;