/*
Arreglos ID
Autor: Esteban Quispitupa
fecha: 06 de mayo de 2026
*/

/*
Enunciado:
Realizar un programa en c++ que permita ingresar 5 ntoas enteras en un arreglo. Luego el programa debe mostrar todas las notas 
indicando también la posición en la que fueron guaradadas.
*/

/* 
Pseucódigo
Proceso: ejercicioNotas
    Definir notas como Entero
    Definir i como Entero
    Dimensión nota[5]

    Para i = 0 Hasta 5 hacer
        Escribir "Ingrese la nota: ", 1+1, " : "
        Leer notas[i]
        FinPara
Escribir " Notas registradas"

Para i = 0 hasta 4 hacer
    Escribir "Posición", i, ":", notas[i]
    FinPara
finProceso

*/

#include <iostream>
using namespace std;
int main () {
    int notas[5];
    int i;
    for (i = 0; i < 5; i++) {
        cout << "Ingrese la nota: " << i + 1 << " : ";
        cin >> notas[i];
}
cout << endl;
cout << "Notas registradas" << endl;

for  (i = 0; i < 5; i++) {
    cout << "Posición" << i << " : " << notas[i] << endl;
}
return 0;
}