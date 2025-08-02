#include <iostream>
using namespace std;
/*Dado un vector de 20 elementos, buscar la subsecuencia más larga de números iguales consecutivos y
mostrar cuál es ese valor y cuántas veces se repite consecutivamente.*/
void cargarVector(int vector[], int longitud);
void mostrarVector(int vec[], int cantidad);

int main(){
    int vectorNumeros[20];
    cargarVector(vectorNumeros, 20);
    int valorMasRepetido[20];
    int repeticionesMasRepetido = 0;
    int contadorRep = 1;
    int j = 0;
    for (int i = 1; i < 20; i++){
        if (vectorNumeros[i-1] == vectorNumeros[i]){
            contadorRep++;
        }
        else{
            if(contadorRep > repeticionesMasRepetido){
                j = 0;
                valorMasRepetido[j] = vectorNumeros[i-1];
                repeticionesMasRepetido = contadorRep;
                j++;
            }
            else if (contadorRep == repeticionesMasRepetido){
                valorMasRepetido[j] = vectorNumeros[i-1];
                j++;
            }
            contadorRep = 1;
        }
    }

    if (contadorRep > repeticionesMasRepetido){
        j = 0;
        valorMasRepetido[j] = vectorNumeros[19];
        repeticionesMasRepetido = contadorRep;
        j++;
    }
        else if (contadorRep == repeticionesMasRepetido){
            valorMasRepetido[j] = vectorNumeros[19];
            j++;
        }
        
    if (repeticionesMasRepetido > 1){
        if (j > 1){
            cout << "Los numeros que tienen las subsecuencias mas largas de repeticiones son: " << endl;
            mostrarVector(valorMasRepetido, j);
            cout << "Se repiten " << repeticionesMasRepetido << " veces";
        }
        else{
            cout << "El numero que tiene la subsecuencia mas larga de repeticiones es el: " << valorMasRepetido[0] << endl;
            cout << "Se repite " << repeticionesMasRepetido << " veces";
        }
    }
    else{
        cout << "No hay subsecuencia mas larga ya que todos los numeros se repiten una sola vez";
    }
    return 0;
}

void cargarVector(int vector[], int longitud){
    for (int i = 0; i < longitud; i++){
        cout << "Ingrese un numero: "; //El mensaje puede variar
        cin >> vector[i]; //Si tengo un struct, vector.parteDelStruct[i]
    }
}

void mostrarVector(int vec[], int cantidad){
    for (int i = 0; i < cantidad; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}