/*
Nombre: Esteban Quispitupa Romani
Curso: Bootcamp Programación Cero a POO
Clase: 10 - Examen 1 (C++)
Fecha: 13/06/2026
*/
/* 
Tema: Sistema de registro y análsis de notas de estudiantes

Entrada:
Cantidad de estudiantes: nombres
Nombre de cada estudiante: nota
Nota de cada estudiante: cantidad
Opción del menú
Nombre a buscar

Proceso: 
Validar entradas
Guardar nombres y notas en arreglos
Mostrar lista de estudiantes y sus notas
Recorrer arreglos para calcular promedio genearl
Encontrar mayor y menor nota
Contar aprobados y desaprobados
Buscar estudiante por nombre
Repetir menú hasta que el usuario decida salir

Salida:
Mensaje del menú
Listado de estudiantes y notas
Promedio general de notas
Nombre y nota de los estudiantes con mayor y menor nota
Cantidad de estudiantes aprobados y desaprobados
Resultado de busqueda del estudiante
Mensaje de salida del programa
*/

#include <iostream>
using namespace std;

// Función de menú
int mostrarMenu() {
    int opcion;
    cout << "Menu:" << endl;
    cout << "1. Registrar estudiante y nota" << endl;
    cout << "2. Mostrar listado de estudaintes sus notas" << endl;
    cout << "3. Mostrar promedio general" << endl;
    cout << "4. Mostrar nota mayor y nota menor" << endl;
    cout << "5. Mostrar cantidad de aprobados y desaprobados" << endl;
    cout << "6. Buscar estudiante por nombre" << endl;
    cout << "7. Salir" << endl;
    cout << "Ingrese su opcion: ";
    cin >> opcion;
    
    while (opcion < 1 || opcion > 7) {
        cout << "Opcion invalida. Ingrese nuevamente: ";
        cin >> opcion;
    }
    return opcion;
}

// Función para registrar estudiantes
void registrarEstudiantes(string nombres[], double notas[], int &cantidad) {
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> cantidad;

    while (cantidad < 1 || cantidad > 20) {
        cout << "Cantidad invalida. Ingrese nuevamente: ";
        cin >> cantidad;
    }

for (int i = 0 ; i < cantidad; i++) {
    cout << "Estudiante" << i + 1 << endl;
    cout << "Ingrese nombre: ";
    cin >> nombres[i];

    while (nombres[i] = "") {
        cout << "Nombre inválido. Ingrese nuevamente: ";
        cin >> nombres[i];
    }
}

while (notas[i] < 0 || notas[i] > 20) {
    cout << "Nota inválida. Ingrese nuevamente: ";
    cin >> notas[i];
}
} 


// Función para mostrar listado de estudiantes
void MostrarListado(string nombres[], double notas[], int cantidad) {
    if (cantidad == 0) {
        cout << "No hay estudiantes registrados." << endl;
    } else {
        cout << "Listado de estudiantes y sus notas:" << endl;
        for (int i = 0; i < cantidad; i++) {
            cout << "Estudiante: " << nombres[i] << " - Nota: " << notas[i] << endl;
        }
    }
}


// Función para calcular promedio general
void mostrarPromedio(double notas[], int cantidad) {
double suma = 0;
double promedio; 

if (cantidad == 0) {
    cout << "No hay estudiantes registrados para calcular el promedio." << endl;
} else {
    for (int i = 0; i < cantidad; i++) {
        suma += notas[i];
    }
    promedio = suma / cantidad;
    cout << "El promedio general de las notas es: " << promedio << endl;
}
}

// Función para encontrar nota mayor y menor
void mostrarMayorMenor(double notas[], string nombres[], int cantidad) {
     double mayor;
     double menor;
     string nombreMayor;
     string nombreMenor;

     if (cantidad == 0) {
        cout << "No hay estudiantes registrados para encontrar la nota mayor y menor." << endl;
        } else {
            mayor = notas[0];
            menor = notas[0];
            nombreMayor = nombres[0];
            nombreMenor = nombres[0];

            for (int i = 1; i < cantidad; i++) {
                if (notas[i] > mayor) {
                    mayor = notas[i];
                    nombreMayor = nombres[i];
                }
                if (notas[i] < menor) {
                    menor = notas[i];
                    nombreMenor = nombres[i];
                }
            }
        }
    cout << "La nota mayor es: " << mayor << " del estudiante: " << nombreMayor << endl;
    cout << "La nota menor es: " << menor << " del estudiante: " << nombreMenor << endl;}

// Función para contar aprobados y desaprobados


// Función para buscar estudiante por nombre

// Función principal
   int main() {
    string nombres [20];
    double notas [20];
    int cantidad = 0;
    int opcion;

    do{
        opcion = mostrarMenu();

        switch (opcion) {
            case 1:
                registrarEstudiantes(nombres, notas, cantidad);
                break;
            case 2:
                MostrarListado(nombres, notas, cantidad);
                break;
            case 3:
                mostrarPromedio(notas, cantidad);
                break;
            case 4:
                mostrarMayorMenor(notas, nombres, cantidad);
                break;
            case 5:
                // contarAprobadosDesaprobados(notas, cantidad);
                break;
            case 6:
                // buscarEstudiante(nombres, notas, cantidad);
                break;
            case 7:
                cout << "Saliendo del programa. ¡Hasta luego!" << endl;
                break;
        }
    } while (opcion != 7);
     return 0;
   }
  
