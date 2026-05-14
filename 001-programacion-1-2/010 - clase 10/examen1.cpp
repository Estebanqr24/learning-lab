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
void registrarEstudiantes(string nombres[], float notas[], int &cantidad) {
    cout << "Ingrese el nombre del estudiante: ";
    cin >> cantidad;

    while (cantidad < 1 || cantidad > 20) {
        cout << "Cantidad invalida. Ingrese nuevamente: ";
        cin >> cantidad;
    }
}

for (int i = 0 ; i < cantidad; i++) {
    cout << "Estudiante" << i + 1 << endl;
    cout << "Ingrese nombre: ";
    cin >> nombres[i];

    while (nombres[i] = "") {
        cout << "Nombre inválido. Ingrese nuevamente: ";
        cin >> nombres[i];
    }


while (notas[i] < 0 || notas[i] > 20) {
    cout << "Nota inválida. Ingrese nuevamente: ";
    cin >> notas[i];
}
} 


// Función para mostrar listado de estudiantes
void MostrarListado(string nombres[], float notas[], int cantidad) {
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


// Función para encontrar nota mayor y menor


// Función para contar aprobados y desaprobados


// Función para buscar estudiante por nombre

// Función principal
   
