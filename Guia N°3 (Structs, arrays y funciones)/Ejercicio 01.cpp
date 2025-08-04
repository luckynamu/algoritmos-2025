#include <iostream>
using namespace std;
/*Definir la estructura Producto con campos: codigo (int), nombre (string) y precio (float).
Leer 15 productos por teclado usando una función y mostrar sus datos con otra función.*/
struct Producto{
    int codigo;
    string nombre;
    float precio;
};
void leerProductos(Producto vector[], int longitud);
void mostrarProductos(Producto vector[], int cantidad);

int main(){
    Producto vectorProductos[15];
    leerProductos(vectorProductos, 15);
    mostrarProductos(vectorProductos, 15);
    return 0;
}

void leerProductos(Producto vector[], int longitud){
    for(int i = 0; i < longitud; i++){
        cout << "(Producto " << i+1 << ")" << endl;
        cout << "Ingresa el codigo del producto: ";
        cin >> vector[i].codigo;
        cin.ignore();
        cout << "Ingresa el nombre del producto: ";
        getline(cin, vector[i].nombre);
        cout << "Ingresa precio del producto: ";
        cin >> vector[i].precio;
    }   
}

void mostrarProductos(Producto vector[], int cantidad){
    for (int i = 0; i < cantidad; i++) {
        cout << "(Producto " << i + 1 << ")" << endl;
        cout << "Codigo: " << vector[i].codigo << endl;
        cout << "Producto: " << vector[i].nombre << endl;
        cout << "Precio: $" << vector[i].precio << endl;
    }
}
