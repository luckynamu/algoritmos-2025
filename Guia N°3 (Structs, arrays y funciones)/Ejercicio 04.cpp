#include <iostream>
#include <cmath>
using namespace std;

/*Crear una estructura llamada Punto con coordenadas x e y. Leer 4 puntos y mostrar la
distancia entre cada par consecutivo usando una función que calcule distancia.*/
struct Punto{
    int x;
    int y;
};
void calcularDistancia(Punto vector[], int longitud);
void leerPunto(Punto vector[], int longitud);

int main(){
    Punto vectorPuntos[4];
    leerPunto(vectorPuntos, 4);
    calcularDistancia(vectorPuntos, 4);
    return 0;
}

void calcularDistancia(Punto vector[], int longitud){
    float distancia = 0;
    for (int i = 0; i < longitud - 1; i++){
        cout << "La distancia entre (" << vector[i].x << "," << vector[i].y << ") y (" << vector[i+1].x << "," << vector[i+1].y << ") es: ";
        int sumaCuadrados = pow(vector[i].x - vector[i+1].x, 2) + pow(vector[i].y - vector[i+1].y, 2);
        distancia = sqrt(sumaCuadrados);
        cout << distancia << endl;
    }
}

void leerPunto(Punto vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "Ingrese la coordenada x del punto: ";
        cin >> vector[i].x;
        cout << "Ingrese la coordenada y del punto: ";
        cin >> vector[i].y;
    }
}