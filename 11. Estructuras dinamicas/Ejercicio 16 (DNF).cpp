#include <iostream>
using namespace std;

/*Dado un arreglo de N (< 30) colas (nodo = registro + puntero), desarrollar y codificar un
procedimiento que aparee las colas del arreglo en las mismas condiciones que las definidas
en el Ejercicio Nro. 12.*/

struct Nodo{
    int info;
    Nodo* sgte;
};

struct Arreglo{
    int info;
    Nodo* frente;
    Nodo* fin;
    bool procesado = false;
};

void queue(Nodo*&frente, Nodo*&fin, int x);
int unqueue(Nodo*&frente, Nodo*&fin);

int main(){
    Nodo* frente[30] = {NULL};
    Nodo* fin[30] = {NULL};
    Nodo* colaFrente = NULL;
    Nodo* colaFin = NULL;
}




void queue(Nodo*&frente, Nodo*&fin, int x){
    Nodo* p = new Nodo();
    p -> info = x;
    p -> sgte = NULL;
    if(frente == NULL){
        frente = p;
        fin = p;
    }
    else{
        fin -> sgte = p;
        fin = p;
    } 
}

int unqueue(Nodo*&frente, Nodo*&fin){
    int x;
    Nodo* p = frente;
    x = p -> info;
    frente = p -> sgte;
    if (frente == NULL){
        fin = NULL;
    }
    delete p;
    return x;
}

void apareo(Nodo* frenteColas[30], Nodo* finColas[30], Nodo*& frenteFinal, Nodo*& finFinal){

}