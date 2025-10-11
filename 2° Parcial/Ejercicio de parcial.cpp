#include <iostream>
using namespace std;
int main(){
    int numeros[10] = {101, 102, 103, 104, 105};
    int *ptr;
    ptr = numeros;
    *(ptr+9) = *ptr + *(numeros+3);
    for(int i = 0; i < 10; i++){
        *(numeros+i) = *(ptr+i) +1;
    }
    for(int i = 0; i < 10; i++){
        cout << numeros[i] << endl;
    }
    return 0;
}