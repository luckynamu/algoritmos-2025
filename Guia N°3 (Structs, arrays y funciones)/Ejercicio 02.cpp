#include <iostream>
using namespace std;
/*Leer un arreglo de 15 elementos del tipo Alumno con campos: legajo (int), nombre
(string) y promedio (float). Mostrar sólo los alumnos con promedio mayor a 7.*/
struct Alumno{
    int legajo;
    string nombre;
    float promedio;
};
void leerAlumnos(Alumno vector[], int longitud);

int main(){
    Alumno vectorAlumnos[15];
    leerAlumnos(vectorAlumnos, 15);
    cout << "Alumnos con promedio mayor a 7: " << endl;
    for (int i = 0; i < 15; i++){
        if (vectorAlumnos[i].promedio > 7){
            cout << vectorAlumnos[i].nombre << " (" << vectorAlumnos[i].legajo << ")" << ", promedio: " << vectorAlumnos[i].promedio << endl;
        }
    }
    return 0;
}

void leerAlumnos(Alumno vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        do{
            cout << "Ingrese el legajo del alumno: ";
            cin >> vector[i].legajo;
            if (vector[i].legajo < 0){
                cout << "Legajo invalido (debe ser mayor a 0)" << endl;
            }
        }while(vector[i].legajo < 0);
        cin.ignore();
        
        do{
            cout << "Ingrese el nombre del alumno: ";
            getline(cin, vector[i].nombre);
            if (vector[i].nombre.empty()){
                cout << "El nombre del alumno no puede estar vacio" << endl;
            }
        }while(vector[i].nombre.empty());
        
        do{
            cout << "Ingrese el promedio del alumno: ";
            cin >> vector[i].promedio;
            if (vector[i].promedio < 0 || vector[i].promedio > 10){
                cout << "Ingrese un promedio valido (entre 0 y 10)" << endl;
            }
        }while(vector[i].promedio < 0 || vector[i].promedio > 10);
    }
}