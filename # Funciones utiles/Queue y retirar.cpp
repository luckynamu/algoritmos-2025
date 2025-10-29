#include <iostream>
using namespace std;

struct Nodo {
    int info;
    Nodo *sgte;
};

void queue(Nodo*&frente, Nodo*&fin, int x){
    Nodo* p = new Nodo();
    p -> info = x;
    p -> sgte = NULL;
    if(frente == NULL){
        frente = p;}
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
