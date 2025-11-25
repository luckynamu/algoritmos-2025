#include <iostream>
using namespace std;
/*Dadas dos colas COLA y COLB (nodo = registro + puntero), desarrollar y codificar un
procedimiento que genere una única cola COLAB a partir de ellas. (Primero los nodos de COLA y luego los de COLB)*/
struct Nodo{
    int info;
    Nodo *sgte;
};