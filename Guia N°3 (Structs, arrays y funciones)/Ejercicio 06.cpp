#include <iostream>
using namespace std;
/*Leer un arreglo de 10 elementos del tipo Venta con campos: dia (int), monto (float).
Calcular el total vendido en días pares mediante una función.*/
struct Venta{
    int dia;
    float monto;
};
float ventasDiasPares(Venta vector[], int longitud);
void leerVenta(Venta vector[], int longitud);

int main(){
    Venta vectorVentas[10];
    leerVenta(vectorVentas, 10);
    float totalVentaPares = ventasDiasPares(vectorVentas, 10);
    cout << "El total vendido en dias pares fue de: $" << totalVentaPares;
    return 0;
}

void leerVenta(Venta vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "-----------------------" << endl;
        do{
            cout << "Ingrese el dia de la venta: ";
            cin >> vector[i].dia;
            if (vector[i].dia < 1 || vector[i].dia > 31){
                cout << "El dia debe estar entre 1 y 31, intentelo nuevamente." << endl;
            }
        }while(vector[i].dia < 1 || vector[i].dia > 31);
        do{
            cout << "Ingrese el monto de la venta: ";
            cin >> vector[i].monto;
            if (vector[i].monto < 0){
                cout << "Monto invalido, debe ser un numero positivo." << endl;
            }
        }while(vector[i].monto < 0);
    }
}

float ventasDiasPares(Venta vector[], int longitud){
    float totalVendido = 0;
    for (int i = 0; i < longitud; i++){
        if(vector[i].dia % 2 == 0){
            totalVendido += vector[i].monto;
        }
    }
    return totalVendido;
}