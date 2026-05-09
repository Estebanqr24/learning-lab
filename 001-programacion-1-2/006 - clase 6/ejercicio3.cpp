/*
Ejercicio 1
Clase 6- Ejercicio 1: Contador con While

Autor: Esteban Quispitupa
Fecha: o4 de mayo de 2026

Enunciado: Elaborar un programa en c++ que muestre un menu repetitivo con las siguientes opcioneS:
 1. Sumar dos numeros
 2. Mostrar la tabla de multiplicar de un numero
    3. Salir

El programa debe repetirse hasta que el usuario elija la opcion 3
Si el usuario ingresa una opcion invalida, el programa debe mostrar un mensaje de error
y volver a mostrar el menu
E/P/S 

Entrada: 
    Una opción del menu
    segun las opciones
        dos numeros para sumar
        o un numero para mostrar su tabla de multiplicar

Proceso:
Mostrar el menu
Leer la opcion
Si la opcion es 1:
    pedri dos numeros
    sumarlos
    mostrar el reultado
Si la opcion es 2:
    pedir un numero
    mostrar us tabla del 1 al 10
si la opcion es 3:
    mostrar un mensaje de salida
si la opcion es invalida
    mostrar un mensaje de error
Repetir mientras la opcion sea diferente de 3

salida
    resultado de la suma
    tabla dwe multiplicar
    mensaje de salida
    mensaje de error por opcion invalida
*/
/*
Pseudocódigo
    Definir opcion, num1, num2, num 3, numero, i como entero

    hacer 
    escribir " Menu: "
    escribir "1. suma dos numeros"
    escribir "2. Mostrar la tabla de multiplicar de un numero"
    escribir "3. Salir"
    escribir "Ingrese una opcion: "
    leer opcion

    si opcion = 1 entonces
        escribir "Ingrese el primer numero: "
        leer num1
        escribir "Ingrese el segundo numero: "
        leer num2
        num3 = num1 + num2
        escribir "El resultado de la suma es: ", num3
    sino si opcion = 2 entonces
        escribir "ingrese un número: "
        Leer numero

    
        Para i=1 hasta 10 hacer
            escribir numero, " x ", i, " = ", numero * i
        Fin Para
        Sino
          si opcion = 3 entonces
            escribir "Saliendo del programa..."
            sino
                escribir "Opcion invalida. Por favor, ingrese una opcion valida."
        Finsi
    Finsi
    finSi
    Mientras opcion != 3
    FinProceso
    

*/
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    int opcion;

    do {
        cout << "Menu" << endl;
        cout << "1. Sumar dos numeros" << endl;
        cout << "2. Mostrar la tabla de multiplicar de un numero" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            int num1, num2;
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
            cout << "El resultado de la suma es: " << (num1 + num2) << endl;
        } else if (opcion == 2) {
            int numero;
            cout << "Ingrese un numero: ";
            cin >> numero;
            for (int i = 1; i <= 10; i++) {
                cout << numero << " x " << i << " = " << (numero * i) << endl;
            }
        } else if (opcion == 3) {
            cout << "Saliendo del programa..." << endl;
        } else {
            cout << "Opcion invalida. Por favor, ingrese una opcion valida." << endl;
        }

        cout << endl;
    } while (opcion != 3);

    return 0;
}