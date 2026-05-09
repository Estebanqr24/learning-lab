/*
Ejercicio 1
Clase 6- Ejercicio 1: Contador con While

Autor: Esteban Quispitupa
Fecha: o4 de mayo de 2026

Enunciado: Elaborar un programa en c++ que solicite el usuaio un numero entero positivo N y muestre en patanlla
 los numeros 
desde 1 hasta n usando un bucle while
Si el usuario ingresa un valor menor o igual a 0, el programa ebe mostrar un mensaje de error y terminar

E/P/S 

Entrada: 
    Un número entero positivo

Proceso:
    Leer el valor de N
    Verificar si N es mayor que 0
    Si N no es mayor, mostramos un mensaje de error
    Si N es mayor, usamos un contado que inicie 1
    Mostrar el valor del contador
    Aumentar el contador en 1 en cada vuelta
    Repetir mientras el contador sea menor o igual a N

    Salida:
    Los números desde 1 hsata N
    Mostrar un mensaje de error si el numero ingresado no es valido

    Pseudocódigo
    Definir N, contador como Entero
    Escribir "Ingrese un número entero postiivo: "
    Leer N 
    Si N <= 0 Entonces
        Escribir "Error: El número debe ser mayor que 0."
    Si no
        contador = 1

        Mientras contador <= N Hacer
        Escribir contador
        contador = contador + 1
        Fin Mientras
    FinSI
    FinProceso
    */
   #include <iostream>
   using namespace std;
   int main () {
    // declaración de variables
    int N, cont; 
    cout << "Ingrese un numero entero positivo: ";
    cin >> N;
    //validamos número mayor de 0
    if (N <=0) {
        cout << "Error: El numero debe ser mayor que 0." << endl;
    } else {
        //Inicializar el contador en 1
        cont = 1;
        // Repetimos mientras el contador sea menor o igual a N
        while (cont <= N) { 
            cout<< cont << endl;
            cont = cont + 1; // Incrementamos el contador en 1
        }
    }
    return 0;
    }

