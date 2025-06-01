#include <iostream>
using namespace std;
/*Cree un programa que simule un sistema de login simple: el usuario debe ingresar un nombre de
usuario y contraseña y verificar si coinciden con datos previamente almacenados en variables.*/
int main(){
    string usuario = "matute2003";
    string contrasenia = "Admin1234";
    string usuarioIngresado, contraseniaIngresada;
    cout << "Ingrese su usuario: ";
    cin >> usuarioIngresado;
    cout << "Ingrese su contrasenia (distingue mayusculas): ";
    cin >> contraseniaIngresada;
    if (usuarioIngresado != usuario || contraseniaIngresada != contrasenia){
        cout << "Error, usuario o contrasenia incorrectos";
    }
    else{
        cout << "BIENVENIDO " << usuario << " :D";
    }
    return 0;   
}