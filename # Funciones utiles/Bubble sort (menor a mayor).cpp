#include <iostream>
using namespace std;
// Algoritmo de bubble sort (menor a mayor)
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
//De mayor a menor
void bubbleSort(int array[], int longitud){
    for (int i = 0; i < longitud; i++ ){
        for (int j = 0; j < longitud - i - 1; j++){
            if (array[j] < array[j+1]){
                int auxiliar = array[j];
                array[j] = array[j+1];
                array[j+1] = auxiliar;
            }
        }
    }
}