#include <iostream>
using namespace std;
/*Leer un arreglo de 10 productos (Producto tiene producto, stock y precio). Calcular el
valor total del inventario (precio * stock por producto) con una función.*/
struct Producto{
    string producto;
    int stock;
    float precio;
};
float totalInventario(int stock, float precio);
void cargarProductos(Producto vector[], int longitud);

int main(){
    Producto vectorProductos[5];
    cargarProductos(vectorProductos, 5);
    for (int i = 0; i < 5; i++){
        float totalProducto = totalInventario(vectorProductos[i].stock, vectorProductos[i].precio);
        cout << "---------------------------" << endl;
        cout << "Producto: " << vectorProductos[i].producto << endl;
        cout << "Stock: " << vectorProductos[i].stock << endl;
        cout << "Precio: $" << vectorProductos[i].precio << endl;
        cout << "Valor total del inventario: $" << totalProducto << endl; 
    }
    return 0;
}

void cargarProductos(Producto vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "----------------------" << endl;
        if (i > 0){
            cin.ignore();
        }
        cout << "Ingrese el nombre del producto: ";
        getline(cin, vector[i].producto);
        do
        {
            cout << "Ingrese el stock del producto: ";
            cin >> vector[i].stock;
            if (vector[i].stock < 0){
                cout << "El stock no puede ser negativo, intentelo nuevamente." << endl;
            }
        } while (vector[i].stock < 0);
        do{
            cout << "Ingrese el precio del producto: ";
            cin >> vector[i].precio;
            if (vector[i].precio <= 0){
                cout << "El precio del producto no puede ser negativo ni cero, intentelo nuevamente." << endl;
            }
        }while (vector[i].precio <= 0);
    }
}

float totalInventario(int stock, float precio){
    float total = precio * stock;
    return total;
}