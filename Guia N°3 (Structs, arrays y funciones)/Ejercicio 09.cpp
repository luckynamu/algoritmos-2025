#include <iostream>
using namespace std;
/*Leer 10 Productos y permitir mediante una función buscar un producto por su código.
Si se encuentra, mostrar sus datos. La estructura producto tiene codigo (int),
descripción (string), stock(int) y precio (float).*/
struct Producto{
    int codigo;
    string descripcion;
    int stock;
    float precio;
};
void leerProductos(Producto vector[], int longitud);
void buscarProducto(Producto vector[], int longitud, int codigoProducto);

int main(){
    Producto vectorProductos[3];
    leerProductos(vectorProductos, 3);
    int codigoBuscar;
    cout << "Ingrese el codigo del producto que quiere buscar: ";
    cin >> codigoBuscar;
    buscarProducto(vectorProductos, 3, codigoBuscar);
    return 0;
}

void leerProductos(Producto vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "-----------------------------------" << endl;
        do{
            cout << "Ingrese el codigo del producto: ";
            cin >> vector[i].codigo;
            if(vector[i].codigo <= 0){
                cout << "El codigo debe ser mayor a 0, intentelo nuevamente." << endl;
            }
        }while(vector[i].codigo <= 0);
        cin.ignore();
        cout << "Ingrese la descripcion del producto: ";
        getline(cin, vector[i].descripcion);
        do{
            cout << "Ingrese el stock del producto: ";
            cin >> vector[i].stock;
            if(vector[i].stock < 0){
                cout << "El stock no puede ser un numero negativo, intentelo nuevamente." << endl;
            }
        }while (vector[i].stock < 0);
        do{
            cout << "Ingrese el precio del producto: ";
            cin >> vector[i].precio;
            if(vector[i].precio <= 0){
                cout << "El precio no puede ser negativo ni cero, intentelo nuevamente." << endl;
            }
        }while (vector[i].precio <= 0);
    }
}

void buscarProducto(Producto vector[], int longitud, int codigoProducto){
    bool productoEncontrado = false;
    for (int i = 0; i < longitud; i++){
        if (codigoProducto == vector[i].codigo){
            cout << "Producto encontrado!" << endl;
            cout << "Descripcion: " << vector[i].descripcion << endl;
            cout << "Stock: " << vector[i].stock << endl;
            cout << "Precio: $" << vector[i].precio;
            productoEncontrado = true;
            break;
        }
    }
    if (!productoEncontrado){
        cout << "Producto no encontrado";
    }
}