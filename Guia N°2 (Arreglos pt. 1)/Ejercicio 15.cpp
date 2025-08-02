#include <iostream>
using namespace std;
/*Leer un vector de 10 números enteros y determinar si el vector es simétrico (es decir, si el primer
elemento es igual al último, el segundo al penúltimo, etc.).*/
void cargarVector(int vector[], int longitud);
bool esSimetrico(int vector[], int longitud);

int main(){
    int vectorNumeros[10];
    cargarVector(vectorNumeros, 10);
    if(esSimetrico(vectorNumeros, 10)){
        cout << "El vector es simetrico";
    }
    else{
        cout << "El vector no es simetrico";
    }
    return 0;
}

void cargarVector(int vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "Ingrese un numero: "; //El mensaje puede variar
        cin >> vector[i]; //Si tengo un struct, vector.parteDelStruct[i]
    }
}

bool esSimetrico(int vector[], int longitud){
    bool simetrico = true;
    for (int i = 0; i < longitud; i++){
        if(vector[i] != vector[longitud - 1 - i]){
            simetrico = false;
            break;
        }
    }
    return simetrico;
}