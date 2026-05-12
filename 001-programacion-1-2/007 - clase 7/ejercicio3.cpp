/*
Arreglos ID: busqueda secuencial en arreglos
Clase 7 - Ejercicio 3
Autor: Esteban Quispitupa
fecha: 06 de mayo de 2026

Enunciado: Realizar un programa en c++ que permita ingresar 6 números enteros en un arreglo.
Luego pedir al usuario un número adicional ara buscar dentro del arreglo

El programa debe indicar:
    si el número fue encontrado
    qué posición se encuentra. 

Si el número no se encuentra, debe mostrar un mensaje indicando que el número no se encuentra en el arreglo.
*/

/* 
PSEUDOCÓDIGO
Proceso: ejercicioBusquedaSecuencial
    Definir números como Entero
    Definir i, buscado, como Entero
    Definir encontrado como Lógico
    Dimensión números[6]

    Para i= 0 Hasta 5 hacer
        Escribir "Ingrese el número: ", i + 1, " : "
        Leer números[i]
    FinPara

    Escribir "Ingrese el número a buscar: "
    Leer buscado

    encontrado = falso
    posición = -1

    Para i = 0 Hasta 5 hacer
        Si números[i] = buscado y encotnrado = falso entonces
            encontrado = verdadero
            posición = i
        FinSi
    FinPara
    
    Si encontrado = verdadero entonces
        Escribir "Número encontrado en la posición: ", posición
    Sino
        Escribir "Número no encontrado en el arreglo"
    FinSi
finProceso
*/

#include <iostream>
using namespace std;
int main() {
    int numeros[6];
    int i;
    int buscado;
    int posición = -1;
    bool encontrado = false;

    for (i = 0; i <6; i++)
    {
        cout << "Ingrese el número: " << i + 1 << " : ";
        cin >> numeros[i];
    }

    cout << endl;

    cout << "Ingrese el número a buscar: ";
    cin >> buscado;
    for ( i = 0; i< 6; i++) {
        if (numeros[i] == buscado && encontrado == false) {
            encontrado = true;
            posición = i;
        }
    }
    cout << endl;

    if (encontrado == true) {
        cout << "Número encontrado en la posición: " << posición << endl;
    } else {
        cout << "Número no encontrado en el arreglo" << endl;
    }
     return 0;
}
   