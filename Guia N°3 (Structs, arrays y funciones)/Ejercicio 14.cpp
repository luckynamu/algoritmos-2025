#include <iostream>
using namespace std;
/*Crear una estructura Jugador con nombre, equipo, goles. Leer 15 jugadores y mostrar el
máximo goleador de cada equipo.*/
struct Jugador{
    string nombreJugador;
    string equipo;
    int goles;
};
void cargarJugadores(Jugador vector[], int longitud);
void cargarEquipos(Jugador jugadores[], string vectorEquipos[], int longitudJugadores, int &cantEquipos);

int main(){
    Jugador vectorJugadores[15];
    string equipos[15];
    cargarJugadores(vectorJugadores, 15);
    int cantidadDeEquipos;
    cargarEquipos(vectorJugadores, equipos, 15, cantidadDeEquipos);
    for (int i = 0; i < cantidadDeEquipos; i++){
        Jugador maxGoleador = {"Vacio", "Vacio", 0};
        for (int j = 0; j < 10; j++){
            if (vectorJugadores[j].equipo == equipos[i]){
                if (vectorJugadores[j].goles > maxGoleador.goles){
                    maxGoleador = vectorJugadores[j];
                }
            }
        }
        cout << "El mayor goleador del equipo " << equipos[i] << " es: " << maxGoleador.nombreJugador << " con " << maxGoleador.goles << " goles" << endl;
    }
    return 0;
}

void cargarJugadores(Jugador vector[], int longitud){
    for (int i= 0; i < longitud; i++){
        cout << "----------------------" << endl;
        if(i > 0){
            cin.ignore();
        }
        cout << "Ingrese el nombre del jugador: ";
        getline(cin, vector[i].nombreJugador);
        cout << "Ingrese el equipo al que pertenece el jugador: ";
        getline(cin, vector[i].equipo);
        do{
            cout << "Ingrese la cantidad de goles que hizo el jugador: ";
            cin >> vector[i].goles;
            if (vector[i].goles < 0){
                cout << "La cantidad de goles no puede ser negativa, intentelo nuevamente" << endl;
            }
        }while (vector[i].goles < 0);
    }
}

void cargarEquipos(Jugador jugadores[], string vectorEquipos[], int longitudJugadores, int &cantEquipos){
    cantEquipos = 0;
    for (int i = 0; i < longitudJugadores; i++){
        bool existe = false;
        for (int j = 0; j < cantEquipos; j++){
            if(vectorEquipos[j] == jugadores[i].equipo){
                existe = true;
                break;
            }
        }
        if (!existe){
            vectorEquipos[cantEquipos] = jugadores[i].equipo;
            cantEquipos++;
        }
    }
}