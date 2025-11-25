#include <iostream>
using namespace std;
/*Dadas dos colas COLA y COLB (nodo = registro + puntero), desarrollar y codificar un
procedimiento que genere una única cola COLAB a partir de ellas. (Primero los nodos de COLA y luego los de COLB)*/
struct Nodo{
    int info;
    Nodo *sgte;
};
void queue(Nodo*&frente, Nodo*&fin, int x);
int unqueue(Nodo*&frente, Nodo*&fin);
void agregarCola(Nodo*& frente, Nodo*& fin, Nodo*& frenteNueva, Nodo*& finNueva);
void mostrarCola(Nodo*& frente, Nodo*& fin);

int main(){
    Nodo* frenteA = NULL;
    Nodo* finA = NULL;
    Nodo* frenteB = NULL;
    Nodo* finB = NULL;
    Nodo* frenteAB = NULL;
    Nodo* finAB = NULL;

    queue(frenteA, finA, 10);
    queue(frenteA, finA, 11);
    queue(frenteA, finA, 12);
    queue(frenteA, finA, 13);
    queue(frenteB, finB, 1);
    queue(frenteB, finB, 2);
    queue(frenteB, finB, 3);
    queue(frenteB, finB, 4);

    agregarCola(frenteA, finA, frenteAB, finAB);
    agregarCola(frenteB, finB, frenteAB, finAB);

    mostrarCola(frenteAB, finAB);
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

void agregarCola(Nodo*& frente, Nodo*& fin, Nodo*& frenteNueva, Nodo*& finNueva){
    while(frente != NULL){
        queue(frenteNueva, finNueva, unqueue(frente, fin));
    }
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