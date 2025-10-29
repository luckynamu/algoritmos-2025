#include <iostream>
#include <cstring>
using namespace std;
//Compara el uso de arr[i] y *(arr + i).
int main(){
    int vectorNumeros[5] = {2, 4, 6, 8, 10};
    for(int i = 0; i < 5; i++){
        cout << vectorNumeros[i] << " ";
    }
    for(int j = 0; j < 5; j++){
        cout << *(vectorNumeros + j) << " ";
    }
    return 0;
}