#include <iostream>
using namespace std;
void bubbleSort(int array[], int longitud){
    for (int i = 0; i < longitud; i++ ){
        for (int j = 0; j < longitud - i - 1; j++){
            if (array[j] > array[j+1]){
                int auxiliar = array[j];
                array[j] = array[j+1];
                array[j+1] = auxiliar;
            }
        }
    }
}
//ORDENAMOS DE FORMA CRECIENTE INDIVIDUALMENTE CADA FILA DE LA MATRIZ USANDO BUBBLE SORT
void bubbleSortMatrizFila(int matriz[][4], int filas){
    for (int i = 0; i < filas; i++){
        bubbleSort(matriz[i], 4);
    }
}
