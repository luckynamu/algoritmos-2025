#include <iostream>
#include <cstring>
using namespace std;

struct Nodo{
    int info;
    Nodo* sgte;
};

bool colaVacia(Nodo* frente){
    return(frente == NULL);
}

void queue(Nodo*& frente, Nodo*& fin, int dato){
    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->info = dato;
    nuevo_nodo->sgte = NULL;
    if(colaVacia(frente)){
        frente = nuevo_nodo;
    }
    else{
        fin->sgte = nuevo_nodo;
    }
    fin = nuevo_nodo;
}

int unqueue(Nodo*& frente, Nodo*& fin){
    int dato = frente->info;
    Nodo* aux = frente;
    frente = frente->sgte;
    if(frente == NULL){
        fin = NULL;
    }
    delete aux;
    return dato;
}

/*a) Cuando una cola supera cierta cantidad de personas automáticamente se la divide en dos. Para hacer la
división, se genera una nueva cola donde los miembros de la primera cola quedan intercalados uno
en la cola original y el siguiente en la cola nueva y así sucesivamente.
Desarrolle una función llamada Split que reciba como parámetro los punteros a una la cola y los punteros a
una cola vacía y devuelva la cola original y la nueva cola con la lógica descripta en el punto a). Nota la
cantidad de elementos de la cola original puede ser par o impar.*/

void Split(Nodo*& frenteOriginal, Nodo*& finOriginal, Nodo*& frenteNueva, Nodo*& finNueva){
    int a, b;
    int i = 1;
    Nodo* frenteAuxiliar = NULL;
    Nodo* finAuxiliar = NULL;
    while(!colaVacia(frenteOriginal)){
        a = unqueue(frenteOriginal, finOriginal);
        if(i % 2 != 0){
            queue(frenteAuxiliar, finAuxiliar, a);
        }
        else{
            queue(frenteNueva, finNueva, a);
        }
        i++;
    }
    while(!colaVacia(frenteAuxiliar)){
        b = unqueue(frenteAuxiliar, finAuxiliar);
        queue(frenteOriginal, finOriginal, b);
    }
}

/*b) Cuando dos colas determinadas tienen menos de cierta cantidad de individuos
se las unifica y de las dos colas se hace una sola que generalmente es la primera de las dos colas.
Para hacerlo se intercalan las personas entre sí para que de alguna manera conserven el orden que
tienen en la con original esto quiere decir que se ubica a la primera persona en la cola uno, luego la
primera de la cola dos después, la segunda la cola uno, la segunda de cola dos y así sucesivamente
hasta armar una nueva cola.
Desarrolle una función llamada UnSplit que reciba como parámetro los punteros a dos colas y devuelva la
primera cola con la lógica descripta en el punto b). La función debe actualizar los punteros a las dos colas. La
primera cola quedará con los elementos de las dos colas intercalados y la segunda cola que debe quedar
vacía. Nota: la cantidad de elementos de cada una de las colas puede no ser la misma, es decir que al invocar a la
función puede ser que las colas uno y dos tenga distinta cantidad de elementos.*/

void UnSplit(Nodo*& frenteUno, Nodo*& finUno, Nodo*& frenteDos, Nodo*& finDos){
    int a, b, c;
    Nodo* frenteAuxiliar = NULL;
    Nodo* finAuxiliar = NULL;
    while(!colaVacia(frenteUno) && !colaVacia(frenteDos)){
        a = unqueue(frenteUno, finUno);
        queue(frenteAuxiliar, finAuxiliar, a);
        a = unqueue(frenteDos, finDos);
        queue(frenteAuxiliar, finAuxiliar, a);
    }
    while(!colaVacia(frenteUno)){
        b = unqueue(frenteUno, finUno);
        queue(frenteAuxiliar, finAuxiliar, b);
    }
    while(!colaVacia(frenteDos)){
        b = unqueue(frenteDos, finDos);
        queue(frenteAuxiliar, finAuxiliar, b);
    }
    while(!colaVacia(frenteAuxiliar)){
        c = unqueue(frenteAuxiliar, finAuxiliar);
        queue(frenteUno, finUno, c);
    }
}

struct Gol{
    int numeroPartido;
    int numeroEquipo;
    char nombreEquipo[50];
    char nombreJugador[50];
    float minutoGol;
};

struct Goleador{
    char nombreJugador[50];
    char nombreEquipo[50];
    int goles;
};

/*Se desea obtener el listado ordenado de mayor a menor de los goleadores del campeonato nombre del
jugador equipo al que pertenece cantidad de goles en forma descendente (por cantidad de goles).
d) Desarrolle una función llamada registraGol a la que se le envía el nombre de un vector, la cantidad de
elementos que tiene el vector, el nombre de un jugador y su equipo. La función debe actualizar el
en vector un nuevo gol para el jugador informado. Si el jugador no está en el vector lo va a agregar
y va a registrar un gol, y si ya está en el vector va a adicionar un gol más a los que ya tiene.
e) Escriba el programa main que lea el archivo de goles que utilice la función registraGol y que emita
la lista ordenada de goleadores del campeonato*/
int cantidadGoles(FILE* archivo);
void registraGol(Goleador vectorJugadores[], int& longitud, char jugador[50], char equipo[50]);
void bubbleSort(Goleador array[], int longitud);
int main(){
    FILE* archivoGoles = fopen("Ruta de acceso", "rb");
    if(!archivoGoles){
        cout << "No se pudo abrir el archivo./n";
        return 0;
    }
    //Hago una primera leída para determinar la cantidad de registros y así definir mi vector.
    int longitudVectorJugadores = cantidadGoles(archivoGoles);
    Goleador vectorGoleadores[longitudVectorJugadores];
    int cantidadJugadores = 0;
    fseek(archivoGoles, 0, SEEK_SET);
    Gol goleadores;
    while(fread(&goleadores, sizeof(Gol), 1, archivoGoles) == 1){
        registraGol(vectorGoleadores, cantidadJugadores, goleadores.nombreJugador, goleadores.nombreEquipo);
    }
    bubbleSort(vectorGoleadores, cantidadJugadores);
    cout << "Jugador" << '\t' << "Equipo" << '\t' << "Goles" << endl;
    cout << "----------------------------------------------------------------------------------------------------" << endl;
    for(int i = 0; i < cantidadJugadores; i++){
        cout << vectorGoleadores[i].nombreJugador << '\t';
        cout << vectorGoleadores[i].nombreEquipo << '\t';
        cout << vectorGoleadores[i].goles << endl;
    }
    return 0;
}

int cantidadGoles(FILE* archivo){
    int goles = 0;
    Gol registro;
    while(fread(&registro, sizeof(Gol), 1, archivo) == 1){
        goles++;
    }
    return goles;
}

void registraGol(Goleador vectorJugadores[], int& longitud, char jugador[50], char equipo[50]){
    bool existe = false;
    for(int i = 0; i < longitud; i++){
        if(strcmp(vectorJugadores[i].nombreJugador, jugador) == 0){
            existe = true;
            vectorJugadores[i].goles++;
            break;
        }
    }
    if(!existe){
        strcpy(vectorJugadores[longitud].nombreJugador, jugador);
        strcpy(vectorJugadores[longitud].nombreEquipo, equipo);
        vectorJugadores[longitud].goles = 1;
        longitud++;
    }
}

void bubbleSort(Goleador array[], int longitud){
    for (int i = 0; i < longitud; i++ ){
        for (int j = 0; j < longitud - i - 1; j++){
            if (array[j].goles < array[j+1].goles){
                Goleador auxiliar = array[j];
                array[j] = array[j+1];
                array[j+1] = auxiliar;
            }
        }
    }
}

/*¿Que hace el siguiente código?
int bb(FILE* f, int X){
    int principio = 0;
    int ultimo = cantRegistros(f) - 1;
    int medio;
    Tr r; //El struct en el que están basados los registros del archivo.
    while(principio <= ultimo){
        medio = (principio + ultimo)/2; //En la primer vuelta me posiciono a la mitad del archivo.
        fseek(f, medio*sizeof(r), SEEK_SET);
        fread(&r, sizeof(r), 1, f);
        if(r. campo == X){
            return medio; //La posición (índice) del elemento X en el archivo.
        } 
        else if(X > r.campo){
            principio = medio + 1; //Si el elemento es mayor significa que está en el medio de arriba del archivo.
        }
        else{
            ultimo = medio -1; //Si X es menor al medio, significa que está en el medio de abajo del archivo.
        }
    return -1;
}
*/