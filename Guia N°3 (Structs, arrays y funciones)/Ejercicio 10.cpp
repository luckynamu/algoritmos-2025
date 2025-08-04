#include <iostream>
using namespace std;
/*Crear una estructura Factura con número, cliente y importe total. Leer un arreglo de 10
facturas y mostrar la de mayor importe total.*/
struct Factura{
    int numero;
    string cliente;
    float importeTotal;
};
void leerFacturas(Factura vector[], int longitud);
void importeMayor(Factura vector[], int longitud);

int main(){
    Factura vectorFacturas[10];
    leerFacturas(vectorFacturas, 10);
    importeMayor(vectorFacturas, 10);
    return 0;
}

void leerFacturas(Factura vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "-----------------------------" << endl;
        do{
            cout << "Ingrese el numero de factura: ";
            cin >> vector[i].numero;
            if (vector[i].numero < 0){
                cout << "El numero de factura no puede ser negativo, intentelo nuevamente" << endl;
            }
        }while (vector[i].numero < 0);
        cin.ignore();
        cout << "Ingrese el nombre del cliente: ";
        getline(cin, vector[i].cliente);
        do{
            cout << "Ingrese el importe total de la factura: ";
            cin >> vector[i].importeTotal;
            if (vector[i].importeTotal <= 0){
                cout << "El importe no puede ser negativo ni 0, intentelo nuevamente" << endl;
            }
        }while (vector[i].importeTotal <= 0);
    }
}

void importeMayor(Factura vector[], int longitud){
    int indiceMayor[longitud];
    float importeMayor = vector[0].importeTotal;
    indiceMayor[0] = 0;
    int j = 1;
    for (int i = 1; i < longitud; i++){
        if (vector[i].importeTotal > importeMayor){
            importeMayor = vector[i].importeTotal;
            j = 0;
            indiceMayor[j] = i;
        }
        if (vector[i].importeTotal == importeMayor){
            indiceMayor[j] = i;
            j++;
        }
    }
    if (j > 1){
        cout << "Las facturas de mayor importe total ($" << importeMayor << ")" << endl;
        for (int k = 0; k < j; k++){
            cout << "Numero de factura: " << vector[indiceMayor[k]].numero << endl;
            cout << "Cliente: " << vector[indiceMayor[k]].cliente << endl;
            cout << "----------------------------------------------" << endl;
        }
    }
    else{
        cout << "La factura de mayor importe total ($" << importeMayor << ")" << endl;
        cout << "Numero de factura: " << vector[indiceMayor[0]].numero << endl;
        cout << "Cliente: " << vector[indiceMayor[0]].cliente;
    }
}