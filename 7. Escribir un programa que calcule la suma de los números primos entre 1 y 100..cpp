#include <iostream>
//Escribir un programa que calcule la suma de los números pares entre 1 y 50.
using namespace std;

int main() {
    int suma = 0;

    for (int i = 2; i <= 100; i++) {
        bool esPrimo = true;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                esPrimo = false;
                break;
            }
        }

        if (esPrimo) {
            suma = suma + i;
        }
    }

    cout << "La suma de los numeros primos entre 1 y 100 es: " << suma << endl;
    return 0;
}

	

