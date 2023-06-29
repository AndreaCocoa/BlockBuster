#include "funciones.h"

int main() {
    vector<string> titulos;
    vector<string> anios;
    vector <int> cantidad;
    vector<int> ranking;
    fstream archivo("peliculas.txt", ios::in);

    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo." << endl;
    }

    else {
        string linea;
        while(getline(archivo, linea)) {
            cout << linea << endl;
            vector <int> indices;

            for (int i = 0; i < linea.length(); i++) {
                if (linea[i]==',') {
                    indices.push_back(i);
                }
            }

            //Imprimir nombres;
            // cout << linea.substr(0, indices[0]) << endl;
            titulos.push_back(linea.substr(0, indices[0]));

            //Imprimir anios;
            // cout << linea.substr(indices[0]+1, indices[1]-indices[0]-1) << endl;
            anios.push_back(linea.substr(indices[0]+1, indices[1]-indices[0]-1));

            //Imprimir cantidad de ejemplares
            // cout << linea.substr(indices[1]+1, indices[2]-indices[1]-1) << endl;
            cantidad.push_back(stoi(linea.substr(indices[1]+1, indices[2]-indices[1]-1)));

            // Finalmente imprimir rankings;
            // cout << linea.substr(indices[2]+1, indices[3]-indices[2]-1) << endl;
            ranking.push_back(stoi(linea.substr(indices[2]+1, indices[3]-indices[2]-1)));
        }

    }

    for (int i = 0; i < titulos.size(); i++) {
        cout << titulos[i] << " " << anios[i] << " " << cantidad[i] << " " << ranking[i] << endl;
    }


    archivo.close();
    return 0;
}