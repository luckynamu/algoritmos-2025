#include <iostream>
using namespace std;
/*Crear una estructura Libro con título, autor y anio. Crear una función para imprimir sus datos.*/
struct Libro{
    string titulo;
    string autor;
    int anio;
};
void cargarLibro(Libro &librito);
void imprimirLibro (Libro librito);
int main(){
    Libro book;
    cargarLibro(book);
    imprimirLibro(book);
    return 0;
}

void imprimirLibro (Libro librito){
    cout << "Titulo: " << librito.titulo << endl;
    cout << "Autor: " << librito.autor << endl;
    cout << "Anio: " << librito.anio;
}
void cargarLibro(Libro &librito){
    cout << "Ingresa el titulo del libro: ";
    getline(cin, librito.titulo);
    cout << "Ingresa el autor del libro: ";
    getline(cin, librito.autor);
    cout << "Ingresa el anio de publicacion: ";
    cin >> librito.anio;
}
