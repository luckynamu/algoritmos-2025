#include <iostream>
using namespace std;
/*Dada una cola (nodo = registro + puntero), desarrollar y codificar una función que devuelva
la cantidad de nodos que tiene.*/
struct Nodo{
    int info;
    Nodo *sgte;
};
void queue(Nodo*&frente, Nodo*&fin, int x);
int unqueue(Nodo*&frente, Nodo*&fin);
void push(Nodo*&Pila, int x);
int pop(Nodo* & Pila);
int cantidadNodos(Nodo*& frente, Nodo*& fin);
void mostrarCola(Nodo*& frente, Nodo*& fin);

int main(){
    Nodo* frenteA = NULL;
    Nodo* finA = NULL;
    queue(frenteA, finA, 10);
    queue(frenteA, finA, 15);
    queue(frenteA, finA, 20);
    queue(frenteA, finA, 25);
    queue(frenteA, finA, 30);
    queue(frenteA, finA, 35);

    int nodosCola = cantidadNodos(frenteA, finA);
    cout << "La cola tiene " << nodosCola << " elementos." << endl;
    cout << "---------------------- Cola -------------------------" << endl;
    mostrarCola(frenteA, finA);
    return 0;
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

void push(Nodo*&Pila, int x){
    Nodo*p = new Nodo();
    p-> info= x;
    p-> sgte= Pila;
    Pila = p;
    return;
}

int pop(Nodo* & Pila){
    int x;
    Nodo* p = Pila;
    x = p->info;
    Pila = p->sgte;
    delete p;
    return x;
}

//Devuelve la cantidad de nodos que tiene una cola, sin dejarla inutilizada.
int cantidadNodos(Nodo*& frente, Nodo*& fin){
    int i = 0;
    int a;
    Nodo* pilaAuxiliar = NULL;
    Nodo* pilaAuxiliar2 = NULL;
    while(frente != NULL){
        a = unqueue(frente, fin);
        push(pilaAuxiliar, a);
        i++;
    }

    while(pilaAuxiliar != NULL){
        push(pilaAuxiliar2, pop(pilaAuxiliar));
    }

    while(pilaAuxiliar2 != NULL){
        queue(frente, fin, pop(pilaAuxiliar2));
    }
    return i;
}

void mostrarCola(Nodo*& frente, Nodo*& fin){
    if(frente == NULL){
        cout << "(Cola vacia)" << endl;
        return;
    }
    while(frente != NULL){
        cout << unqueue(frente, fin) << " ";
    }
    cout << endl;
}