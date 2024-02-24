#include <iostream>
using namespace std;

int main() {
    // Estructuras de control (IF - IF ELSE):

    // Ver si el usuario es mayor de edad
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 18) {
        cout << "Eres mayor de edad." << endl;
    } else {
        cout << "Eres menor de edad." << endl;
    }

    // cuál de dos números es mayor:
    float num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "El primer numero es mayor." << endl;
    } else if (num2 > num1) {
        cout << "El segundo numero es mayor." << endl;
    } else {
        cout << "Los numeros son iguales." << endl;
    }

    // si un número entero es par o impar:
    int num;
    cout << "Ingrese un numero entero: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "El numero es par." << endl;
    } else {
        cout << "El numero es impar." << endl;
    }

    // Estructuras de control iterativas (FOR - WHILE):

    // Calcular el factorial de un número
    int numero;
    cout << "Ingrese un numero para calcular su factorial: ";
    cin >> numero;
    int factorial = 1;
    int i = 1;

    while (i <= numero) {
        factorial *= i;
        i++;
    }

    cout << "El factorial de " << numero << " es " << factorial << endl;

    // Mostrar todos los números impares desde 1
    int n;
    cout << "Ingrese un numero mayor a 10 y menor que 30: ";
    cin >> n;

    for (int j = 1; j <= n; j += 2) {
        cout << j << " ";
    }
    cout << endl;

    // Mostrar todos los números impares desde 1 hasta un número dado usando un bucle while:
    int m;
    cout << "Ingrese un numero mayor a 10 y menor que 30: ";
    cin >> m;
    int k = 1;

    while (k <= m) {
        cout << k << " ";
        k += 2;
    }
    cout << endl;

    return 0;
}
