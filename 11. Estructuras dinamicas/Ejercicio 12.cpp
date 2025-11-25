#include <iostream>
using namespace std;
/*Dadas dos colas COLA y COLB (nodo = registro + puntero), desarrollar y codificar un
procedimiento que genere otra cola COLAB por apareo del campo ARRIBO del registro
(define orden creciente en ambas).
Nota: COLA y COLB dejan de ser útiles después del apareo.*/

struct Nodo {
    int info;
    Nodo *sgte;
};

void queue(Nodo*&frente, Nodo*&fin, int x);
int unqueue(Nodo*&frente, Nodo*&fin);
void apareoColas(Nodo*& frenteA, Nodo*& frenteB, Nodo*& finA, Nodo*& finB, Nodo*& frenteAB, Nodo*& finAB);
void mostrarCola(Nodo*& frente, Nodo*& fin);

int main(){
    Nodo* frenteA = NULL;
    Nodo* finA = NULL;
    Nodo* frenteB = NULL;
    Nodo* finB = NULL;
    Nodo* frenteAB = NULL;
    Nodo* finAB = NULL;

    queue(frenteA, finA, 5);
    queue(frenteA, finA, 10);
    queue(frenteA, finA, 20);
    queue(frenteA, finA, 30);
    queue(frenteA, finA, 45);
    queue(frenteB, finB, 2);
    queue(frenteB, finB, 12);
    queue(frenteB, finB, 28);
    queue(frenteB, finB, 40);

    apareoColas(frenteA, frenteB, finA, finB, frenteAB, finAB);
    cout << "Cola resultante (AB):" << endl;
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

void apareoColas(Nodo*& frenteA, Nodo*& frenteB, Nodo*& finA, Nodo*& finB, Nodo*& frenteAB, Nodo*& finAB){
    //Asumiendo que las colas ya estan cargadas.
    int a, b;
    bool hayA = false;
    bool hayB = false;

    if(frenteA != NULL){
        a = unqueue(frenteA, finA);
        hayA = true;
    }
    if(frenteB != NULL){
        b = unqueue(frenteB, finB);
        hayB = true;
    }

    while(hayA && hayB){
        if(a < b){
            queue(frenteAB, finAB, a);
            hayA = false;
            if(frenteA != NULL){
                a = unqueue(frenteA, finA);
                hayA = true;
            }
        }
        else{
            queue(frenteAB, finAB, b);
            hayB = false;
            if(frenteB != NULL){
                b = unqueue(frenteB, finB);
                hayB = true;
            }
        }
    }

    if(hayA){
        queue(frenteAB, finAB, a);
        while(frenteA != NULL){
            queue(frenteAB, finAB, unqueue(frenteA, finA));
        }
    }

    if(hayB){
        queue(frenteAB, finAB, b);
        while(frenteB != NULL){
            queue(frenteAB, finAB, unqueue(frenteB, finB));
        }
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