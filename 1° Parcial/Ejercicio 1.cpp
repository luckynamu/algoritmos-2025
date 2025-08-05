#include <iostream>
using namespace std;
/*Enunciado:
Tenemos 30 jugadores de básquet. A cada uno se le conoce su nombre y su habilidad, un
número entre 1 y 100. Queremos formar 3 equipos de 10 jugadores cada uno de forma
equilibrada.
Cómo se hace la asignación:
Primero, ordenamos a los jugadores desde el de mayor habilidad hasta el de menor.
Luego, vamos asignando al primer jugador al Equipo 1, el segundo al Equipo 2, el tercero
al Equipo 3, el cuarto al Equipo 1, y así sucesivamente (en orden cíclico).
Desarrolle una función llamada asignar que reciba un vector con los jugadores y sus
habilidades y devuelva una matriz de 10 filas y que contenga en cada en la primera
columna el listado de jugadores del equipo 1 (nombre y habilidad) en la segunda columna
los del equipo dos y en la tercera los del equipo 3 y utilizar esta función en el programa
solicitados.*/
struct Jugador {
char nombre[30];
int habilidad;
};
void cargarVector(Jugador vector[], int longitud);
void ordenarPorHabilidad(Jugador vector[], int longitud);
void asignar(Jugador vector[], Jugador matriz[10][3]);
void mostrarEquipos(Jugador matriz[][3], int filas);

int main(){
    Jugador vectorJugadores[30];
    Jugador matrizEquipos[10][3];
    cargarVector(vectorJugadores, 30);
    ordenarPorHabilidad(vectorJugadores, 30);
    asignar(vectorJugadores, matrizEquipos);
    mostrarEquipos(matrizEquipos, 10);
    return 0;
}

void cargarVector(Jugador vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "-------------------------" << endl;
        cout << "Ingrese el nombre del jugador: ";
        cin >> vector[i].nombre;
        do{
            cout << "Ingrese la habilidad del jugador (1 a 100): ";
            cin >> vector[i].habilidad;
            if (vector[i].habilidad < 1 || vector[i].habilidad > 100){
                cout << "Numero de habilidad invalido, intentelo nuevamente" << endl;
            }
        }while (vector[i].habilidad < 1 || vector[i].habilidad > 100);
    }
}

void ordenarPorHabilidad(Jugador vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        for (int j = 0; j < longitud - i - 1; j++){
            if (vector[j].habilidad < vector[j+1].habilidad){
                Jugador auxiliar = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = auxiliar;
            }
        }
    }
}

void asignar(Jugador vector[], Jugador matriz[10][3]){
    int k = 0;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 3; j++){
            matriz[i][j] = vector[k];
            k++;
        }
    }
}

void mostrarEquipos(Jugador matriz[][3], int filas){// filas = 10
    for (int j = 0; j < 3; j++){
        cout << "Equipo: " << j+1 << endl;
        for (int i = 0; i < filas; i++){
            cout << "- " << matriz[i][j].nombre << " (" << matriz[i][j].habilidad << ")" << endl;
        }
    }
} 