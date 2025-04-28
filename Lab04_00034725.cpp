#include <iostream>
using namespace std;

int main(){
    // Declaracion de las variables
    int numero;

    cout << "Escriba un numero entero" << endl;
    cin >> numero;
    // Verificar si el numero es positivo, negativo o igual a cero

    if (numero > 0) {
        cout << "El numero es positivo" << endl;
        }
    
    // Si el número es mayor a 0, entonces sera positivo

    else if(numero < 0) {
        cout << "El numero es negativo" << endl;
    }
    // Si el número es menor a 0, entonces sera negativo

    else if(numero == 0) {
        cout << "El numero es cero" << endl;
    }
    // Si el número es igual a cero, entonces sera cero 
    return 0;
}