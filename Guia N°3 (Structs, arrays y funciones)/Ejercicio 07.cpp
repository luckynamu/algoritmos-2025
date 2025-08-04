#include <iostream>
using namespace std;
/*Definir la estructura Auto con marca, modelo y precio. Leer un arreglo de 8 autos y
devolver el más caro con una función.*/
struct Auto{
    string marca;
    string modelo;
    double precio;
};
void leerAuto(Auto vector[], int longitud);
void masCaro(Auto vector[], int longitud);

int main(){
    Auto vectorAutos[8];
    leerAuto(vectorAutos, 8);
    masCaro(vectorAutos, 8);
    return 0;
}

void leerAuto(Auto vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "------------------------------" << endl;
        if (i > 0){
            cin.ignore();
        }
        cout << "Ingrese la marca del auto: ";
        getline(cin, vector[i].marca);
        cout << "Ingrese el modelo del auto: ";
        getline(cin, vector[i].modelo);
        do{
            cout << "Ingrese el precio del auto: ";
            cin >> vector[i].precio;
            if (vector[i].precio < 0){
                cout << "Precio invalido. Debe ser mayor a 0, intente nuevamente.";
            }
        }while (vector[i].precio < 0);
    }
}

void masCaro(Auto vector[], int longitud){
    string marcaMasCaro = vector[0].marca;
    string modeloMasCaro = vector[0].modelo;
    double precioMasCaro = vector[0].precio;
    for(int i = 1; i < longitud; i++){
        if (vector[i].precio > precioMasCaro){
            marcaMasCaro = vector[i].marca;
            modeloMasCaro = vector[i].modelo;
            precioMasCaro = vector[i].precio;
        }
    }
    cout << "El auto mas caro es el " << marcaMasCaro << " " << modeloMasCaro << " con un precio de $" << precioMasCaro;
}