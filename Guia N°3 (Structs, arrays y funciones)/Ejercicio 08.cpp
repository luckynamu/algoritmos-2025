#include <iostream>
using namespace std;
/*Crear una estructura Estudiante con nombre, legajo y tres notas. Calcular promedio
por estudiante con una función y mostrar cuáles aprobaron (promedio ≥ 6).*/
struct Estudiante{
    string nombre;
    int legajo;
    float notas[3];
};
void cargarEstudiante(Estudiante vector[], int longitud);
float calcularPromedio(float conjuntoNotas[], int longitud);

int main(){
    Estudiante vectorEstudiantes[4];
    cargarEstudiante(vectorEstudiantes, 4);
    cout << "Estudiantes que aprobaron (promedio mayor o igual a 6)" << endl;
    for (int i = 0; i < 4; i++){
        float promedioDelEstudiante = calcularPromedio(vectorEstudiantes[i].notas, 3);
        if (promedioDelEstudiante >= 6){
            cout << vectorEstudiantes[i].nombre << " (" << vectorEstudiantes[i].legajo << "), promedio: " << promedioDelEstudiante << endl;
        }
    }
    return 0;
}

void cargarEstudiante(Estudiante vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "---------------------------" << endl;
        if (i > 0){
            cin.ignore();
        }
        cout << "Ingrese nombre y apellido del estudiante: ";
        getline(cin, vector[i].nombre);
        do{
            cout << "Ingrese el legajo: ";
            cin >> vector[i].legajo;
            if (vector[i].legajo < 0){
                cout << "El legajo debe ser mayor a 0, intentelo nuevamente." << endl;
            }
        }while (vector[i].legajo < 0);
        for (int j = 0; j < 3; j++){
            do{
                cout << "Ingrese la nota " << j+1 << ": ";
                cin >> vector[i].notas[j];
                if (vector[i].notas[j] < 0 || vector[i].notas[j] > 10){
                    cout << "La nota ingresada debe estar entre 0 y 10, intentelo nuevamente.";
                }
            }while (vector[i].notas[j] < 0 || vector[i].notas[j] > 10);
        }
    }
}

float calcularPromedio(float conjuntoNotas[], int longitud){
    float promedio = 0;
    float sumaNotas = 0;
    for (int i = 0; i < longitud; i++){
        sumaNotas += conjuntoNotas[i];
    }
    promedio = sumaNotas/(float)longitud;
    return promedio;
}