#include <iostream>
#include <cstring>
using namespace std;
//Intercambia valores de dos variables usando punteros.
int main(){
    int x = 10;
    int y = 20;
    int *ptrX = &x;
    int *ptrY = &y;
    int auxiliar;
    auxiliar = *ptrX;
    *ptrX = *ptrY;
    *ptrY = auxiliar;
    cout << "X era 10 antes y ahora es: " << x << " (20)" << endl;
    cout << "Y era 20 antes y ahora es: " << y << " (10)";
    return 0;
}