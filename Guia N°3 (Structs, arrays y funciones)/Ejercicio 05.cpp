#include <iostream>
using namespace std;
/*Leer un arreglo de estructura Libro (título, autor, año). Mostrar todos los libros cuyo año
de edición sea posterior a 2015.*/
struct Libro{
    string titulo;
    string autor;
    int anio;
};
void leerLibros(Libro vector[], int longitud);
void mostrarLibrosRecientes(Libro vector[], int longitud, int anio);

int main(){
    Libro vectorLibros[5];
    leerLibros(vectorLibros, 5);
    cout << "Libros publicados despues del 2015: " << endl;
    mostrarLibrosRecientes(vectorLibros, 5, 2015);
    return 0;
}

void leerLibros(Libro vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        if (i > 0){
            cin.ignore();
        }
        cout << "Ingrese el titulo del libro: ";
        getline(cin, vector[i].titulo);
        cout << "Ingrese el autor del libro: ";
        getline(cin, vector[i].autor);
        cout << "Ingrese el anio de edicion: ";
        cin >> vector[i].anio;
    }
}

void mostrarLibrosRecientes(Libro vector[], int longitud, int anio){
    for (int i = 0; i < longitud; i++){
        if (vector[i].anio > anio){
            cout << vector[i].titulo << " de " << vector[i].autor << " (" << vector[i].anio << ")" << endl;
        }
    }
}