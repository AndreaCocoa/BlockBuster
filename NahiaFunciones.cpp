#include <iostream>
#include <vector>
using namespace std;

class Pelicula{
private:
    string nombre_pelicula;
    int anio_publicacion;
    int ejemplares_disponibles;
    int ranking = 5;
    int ID;
public:
    //Cuando el usuario no coloca el ranking, por defecto ranking=5
    Pelicula(string nombre_pelicula, int anio_publicacion, int ejemplares_disponibles){
        this -> nombre_pelicula = nombre_pelicula;
        this -> anio_publicacion= anio_publicacion;
        this -> ejemplares_disponibles = ejemplares_disponibles;
    };
    //Cuando coloca el ranking
    Pelicula(string nombre_pelicula, int anio_publicacion, int ejemplares_disponibles, int ranking){
        this -> nombre_pelicula = nombre_pelicula;
        this -> anio_publicacion= anio_publicacion;
        this -> ejemplares_disponibles = ejemplares_disponibles;
        this -> ranking = ranking;
    };

    int generarID(const vector<int>& idsGenerados) {
        int nuevoID;
        bool repetido;
        do {
            nuevoID = rand();  // Generar un ID aleatorio
            repetido = false;

            for (int id : idsGenerados) {
                if (id == nuevoID) {
                    repetido = true;
                    break;
                }
            }
        } while (repetido);  // Verifica si el ID ya existe en el vector

        ID= nuevoID;
        return ID;
    };
    //GETTERS
    string getNombre_pelicula(){
        return nombre_pelicula;
    }
    int getAnio_publicacion(){
        return anio_publicacion;
    }
    int getEjemplares_disponibles(){
        return ejemplares_disponibles;
    }

    int getRanking(){
        return ranking;
    }
    // SETTERS
};



class Usuario{
private:
    string dni;
    string nombre_usuario;
    string apellido_usuario;
    int peliculas_alquiladas = 0;

    vector<Usuario*> listado_usuarios;
    vector<Pelicula*> listado_peliculas;

public:
    //Constructor
    Usuario(){};
    Usuario(string dni, string nombre_usuario, string apellido_usuario){
        this -> dni = dni;
        this -> nombre_usuario = nombre_usuario;
        this -> apellido_usuario = apellido_usuario;
    };

    //Getters
    string getDNI(){
        return dni;
    }
    string getNombre(){
        return nombre_usuario;
    }
    string getApellido(){
        return apellido_usuario;
    }

    void registrarUsuario(Usuario* u1){
        listado_usuarios.push_back(u1);
    }

    void getListadoUsuario(){
        for(int i=0; i<listado_usuarios.size();i++){
            cout<<listado_usuarios.at(i)->getDNI()<<endl;
            cout<<listado_usuarios.at(i)->getNombre()<<endl;
            cout<<listado_usuarios.at(i)->getApellido()<<endl;
        }
    }

    void registrarPelicula(Pelicula* p1){
        listado_peliculas.push_back(p1);
    }

    void getListadoPelicula(){
        for(int i=0; i<listado_peliculas.size();i++){
            cout<< listado_peliculas.at(i)->getNombre_pelicula()<<endl;
            cout<< listado_peliculas.at(i)->getRanking()<<endl;
            cout<< listado_peliculas.at(i)->getAnio_publicacion()<<endl;
            cout<< listado_peliculas.at(i)->getEjemplares_disponibles()<<endl;
        }
    }
};


Usuario registrarUsuario(){
    string dni;
    string nombre_usuario;
    string apellido_usuario;

    cout<<"-----REGISTRAR USUARIO-----"<<endl;
    cout<<"DNI: ";
    cin>>dni;
    cout<<"Nombre: ";
    cin.ignore();
    getline(cin, nombre_usuario);
    cout<<"Apellido : ";
    cin.ignore();
    getline(cin, apellido_usuario);

    Usuario* usuario = new Usuario(dni, nombre_usuario, apellido_usuario);
    return *usuario;
}


Pelicula registrarPelicula(){
    string nombre_pelicula;
    int anio_publicacion;
    int ejemplares_disponibles;
    int ranking;
    int opcion;

    cout<<"-----REGISTRAR PELICULA-----"<<endl;
    cout<<"Nombre pelicula : ";
    cin.ignore();
    getline(cin, nombre_pelicula);

    cout<<"Anio : ";
    cin >> anio_publicacion;

    cout<<"Ejemplares : ";
    cin >> ejemplares_disponibles;

    do{
        cout<<"Agregar ranking 1- Si   2- No : ";
        cin >> opcion;
    }while(opcion<1 or opcion>2);

    if(opcion==1){
        do{
            cout << "Ranking : ";
            cin>>ranking;
        }while(ranking<0 || ranking >5);

        //hacer validacion
        Pelicula pelicula(nombre_pelicula, anio_publicacion, ejemplares_disponibles, ranking);
        return pelicula;

    }
    Pelicula pelicula(nombre_pelicula, anio_publicacion, ejemplares_disponibles);
    return pelicula;
}

int main() {
    vector<int>listaids;
    vector<int>listausuarios;
    Usuario* usuario= new Usuario();
    int nro_peliculas_registradas;

    Usuario usuarioRegistrado= registrarUsuario();
    usuario->registrarUsuario(&usuarioRegistrado);

    cout << "Imprimiendo usuario registrado : " << endl;
    usuario->getListadoUsuario();

    cout<<"Nro de peliculas por registrar : ";
    cin>> nro_peliculas_registradas;

    for(int j=0; j< nro_peliculas_registradas; j++) {
        Pelicula *p = new Pelicula(registrarPelicula());
        cout << endl;
        cout << "Imprimiendo pelicula registrada : " << endl;
        cout << "Nombre de pelicula : "<<p->getNombre_pelicula() << endl;
        cout << "Ejemplares disponibles : "<<p->getEjemplares_disponibles() << endl;
        cout << "Anio de publicacion : "<<p->getAnio_publicacion() << endl;
        cout << "Ranking : "<<p->getRanking() << endl;

        usuario->registrarPelicula(p);
    }

    usuario->getListadoPelicula();



    return 0;

}
