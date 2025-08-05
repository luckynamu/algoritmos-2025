#include <iostream>
using namespace std;
/*Crear una estructura Curso con nombre, cantidad de alumnos y promedio general. Leer
5 cursos y ordenar el arreglo por promedio de forma descendente.*/
struct Curso{
    string nombre;
    int cantidadAlumnos;
    float promedioGeneral;
};
void leerCurso(Curso vector[], int longitud);
void ordenarPorPromedioMayorAMenor(Curso array[], int longitud);
void mostrarCursos(Curso vector[], int longitud);

int main(){
    Curso vectorCursos[5];
    leerCurso(vectorCursos, 5);
    ordenarPorPromedioMayorAMenor(vectorCursos, 5);
    cout << "Cursos ordenados por promedio de forma descendente: " << endl;
    mostrarCursos(vectorCursos, 5);
    return 0;
}

void leerCurso(Curso vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "---------------------" << endl;
        if (i > 0){
            cin.ignore();
        }
        cout << "Ingrese el nombre del curso: ";
        getline(cin, vector[i].nombre);
        do{
            cout << "Ingrese la cantidad de alumnos: ";
            cin >> vector[i].cantidadAlumnos;
            if (vector[i].cantidadAlumnos <= 0){
                cout << "La cantidad de alumnos no puede ser negativa ni cero, intentelo nuevamente" << endl;
            }
        }while (vector[i].cantidadAlumnos <= 0);
        do{
            cout << "Ingrese el promedio general del curso: ";
            cin >> vector[i].promedioGeneral;
            if (vector[i].promedioGeneral < 0){
                cout << "El promedio general no puede ser negativo, intentelo nuevamente" << endl;
            }
        }while (vector[i].promedioGeneral < 0);
    }
}

void ordenarPorPromedioMayorAMenor(Curso array[], int longitud){
    for (int i = 0; i < longitud; i++ ){
        for (int j = 0; j < longitud - i - 1; j++){
            if (array[j].promedioGeneral < array[j+1].promedioGeneral){
                Curso auxiliar = array[j];
                array[j] = array[j+1];
                array[j+1] = auxiliar;
            }
        }
    }
}

void mostrarCursos(Curso vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "---------------------" << endl;
        cout << "Curso: " << vector[i].nombre << endl;
        cout << "Cantidad de alumnos: " << vector[i].cantidadAlumnos << endl;
        cout << "Promedio general: " << vector[i].promedioGeneral << endl;
    }
}