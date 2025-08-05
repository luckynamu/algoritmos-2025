#include <iostream>
using namespace std;
//Declaramos el struct que estemos usando
struct Jugador{
    string nombreJugador;
    string equipo;
    int goles;
};
/*Datos necesarios: vector con elementos del struct, el vector que querramos cargar con el tipo de dato que necesitemos y ambas
longitudes. La longitud del vector que vamos a cargar debe ser pasada por referencia &*/
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