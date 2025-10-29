#include <iostream>
using namespace std;
/*Definir una función INVERSA que evalúe dos conjuntos de caracteres separados por un
punto y retorne True si los conjuntos son inversos (ej: ABcDe.eDcBA) o False si no lo son.
Los conjuntos deben ingresarse por teclado. (Definir parámetros y codificar).*/
struct Nodo{
    char info;
    Nodo *sgte;
};

void push(Nodo*&, char);
char pop(Nodo* &);
bool sonInversos(Nodo*& pilaOriginal);

int main(){
    char caracter;
    Nodo* Pila1 = NULL;
    string conjuntosOriginales = "";

    cout << "Ingresa los dos conjuntos de caracteres separados por un punto: ";
    while ((caracter = cin.get()) != '\n'){
        push(Pila1, caracter);
        conjuntosOriginales += caracter;
    }

    if(sonInversos(Pila1)){
        cout << "Los conjuntos " << conjuntosOriginales << " son inversos";
    }
    else{
        cout << "Los conjuntos " << conjuntosOriginales << " NO son inversos";
    }
    return 0;
}

//Funcion PUSH      
void push(Nodo*&Pila, char x){
    Nodo*p = new Nodo();
    p-> info = x;
    p-> sgte = Pila;
    Pila = p;
    return;
    }
   
//Funcion POP  
char pop(Nodo* & Pila){
    if (Pila == NULL){
        return '\0';
    } 
    char x;
    Nodo* p = Pila;
    x = p->info;
    Pila = p->sgte;
    delete p;
    return x;
}

bool sonInversos(Nodo*& pilaOriginal){
    Nodo* pilaAux = NULL;
    char elemento;
    while (pilaOriginal != NULL){
        elemento = pop(pilaOriginal);
        if (elemento == '.') {
            break;
        }
        push(pilaAux, elemento);
    }

    while(pilaOriginal != NULL && pilaAux != NULL){
        if(pop(pilaOriginal) != pop(pilaAux)){
            return false;
        }
    }
    if (pilaOriginal == NULL && pilaAux == NULL){
        return true;
    }
    else{
    return false;
    }
}