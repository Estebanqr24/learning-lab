/*
Ejercicio 1
Clase 6- Ejercicio 1: Contador con While

Autor: Esteban Quispitupa
Fecha: o4 de mayo de 2026

Enunciado: Elaborar un programa en c++ que solicite al usuario 5 numeros enteros, calcule la suma total
de esos números usando un bucle for. Al final el programa debe mostrar el resultado acumulado

E/P/S 

Entrada: 
    5 números enteros

Proceso:
    Inicializar una variable suma en 0
    Repetir 5 veces:
        Solicitar al usuario que ingrese un número entero
        Leer el número ingresado
        Sumar el número ingresado a la variable suma

Salida:
    La suma total de los 5 números ingresados
    */
/*
Proceso sumarcinconumeros
    Definir i, número, suma como Entero
    suma = 0
    Para i = 1 Hasta 5 Hacer
        Escribir "Ingrese un número entero: "
        Leer número
        suma = suma + número
Fin Para
Escribir "La suma total es: ", suma
FinProceso
*/

#include <iostream>
using namespace std;
int main() {
    int  i, num, sum;
    sum = 0;
    for (i = 1; i <= 5; i++) {
        cout << "Ingrese el numero " << i << ":";
        cin >> num; 
        sum = sum + num;
    }
    cout << "La suma total es: "<< sum << endl;
    return 0;
}

