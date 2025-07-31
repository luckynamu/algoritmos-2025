#include <iostream>
using namespace std;
//Declaro mi struct (uso libro de ejemplo)
struct Libro{
    string titulo;
    string autor;
    int anio;
};
void cargarLibro(Libro &librito){ //lo paso por referencia &librito para que se copie bien
    cout << "Ingresa el titulo del libro: ";
    //Para strings con espacios, uso getline
    getline(cin, librito.titulo);
    cout << "Ingresa el autor del libro: ";
    getline(cin, librito.autor);
    cout << "Ingresa el anio de publicacion: ";
    cin >> librito.anio;
}