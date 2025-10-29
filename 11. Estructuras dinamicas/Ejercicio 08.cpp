#include <iostream>
using namespace std;
/*Dada una cola (nodo = registro + puntero), desarrollar y codificar un procedimiento que
elimine 2 nodos de la misma (indicar con un parámetro 'S'/'N' si ello fue‚ o no posible)*/
struct Nodo{
    int info;
    Nodo *sgte;
};

void queue(Nodo*&frente, Nodo*&fin, int x);
int unqueue(Nodo*&frente, Nodo*&fin);
char eliminarNodos(Nodo*&frente, Nodo*&fin);

int main(){
    Nodo* frente = NULL;
    Nodo* fin = NULL;
    queue(frente, fin, 10);
    queue(frente, fin, 11);
    queue(frente, fin, 12);
    queue(frente, fin, 13);
    queue(frente, fin, 14);
    queue(frente, fin, 15);
    char exito = 'N';
    exito = eliminarNodos(frente, fin);
    cout << exito << endl;
    cout << "Cola final: ";

    while(frente != NULL && fin != NULL){
        int auxiliar = unqueue(frente, fin);
        cout << auxiliar << " ";
    }
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

char eliminarNodos(Nodo*&frente, Nodo*&fin){
    char exito = 'N';
    int i = 0;
    while(frente != NULL && fin != NULL && i < 2){
        unqueue(frente, fin);
        i++;
    }
    if(i == 2){
        exito = 'S';
    }
    return exito;
}