#include <iostream>
using namespace std;
/*Leer un arreglo de 20 elementos del tipo Persona con nombre, DNI y edad. Calcular el
promedio de edad y mostrar las personas mayores al promedio.*/
struct Persona{
    string nombre;
    int dni;
    int edad;
};
void leerPersonas(Persona vector[], int longitud);
double promedioEdad(Persona vector[], int longitud);

int main(){
    Persona vectorPersonas[20];
    leerPersonas(vectorPersonas, 20);
    double edadPromedio = promedioEdad(vectorPersonas, 20);
    cout << "Personas mayores al promedio de edad (" << edadPromedio << ")" << endl;
    for (int i = 0; i < 20; i++){
        if (vectorPersonas[i].edad > edadPromedio){
            cout << "--------------------------------" << endl;
            cout << "Nombre: " << vectorPersonas[i].nombre << endl;
            cout << "DNI: " << vectorPersonas[i].dni << endl;
            cout << "Edad: " << vectorPersonas[i].edad << endl;
        }
    }
    return 0;
}

double promedioEdad(Persona vector[], int longitud){
    double promedio = 0;
    int sumaEdades = 0;
    for (int i = 0; i < longitud; i++){
        sumaEdades += vector[i].edad;
    }
    promedio = sumaEdades/(double)longitud;
    return promedio;
}

void leerPersonas(Persona vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "----------------------" << endl;
        if(i > 0){
            cin.ignore();
        }
        cout << "Ingrese el nombre de la persona: ";
        getline(cin, vector[i].nombre);
        do{
            cout << "Ingrese el DNI de la persona: ";
            cin >> vector[i].dni;
            if(vector[i].dni <= 0){
                cout << "DNI invalido (debe ser mayor a 0), intentelo nuevamente" << endl;
            }
        }while (vector[i].dni <= 0);
        do{
            cout << "Ingrese la edad de la persona: ";
            cin >> vector[i].edad;
            if (vector[i].edad < 0){
                cout << "Edad invalida (debe ser mayor o igual a 0), intentelo nuevamente" << endl;
            }
        }while (vector[i].edad < 0);
    }
}