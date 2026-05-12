/*
* El arreglo guarda datos
* el índice dice en qué posición del arreglo se encuentra el dato
* el for nos ayuda a recorrer el arreglo
*/

/*
plantilla base

*/
#include <iostream>
using namespace std;
int main() {
    int datos[5];
    int i;
    for (i = 0; i < 5; i++) {
        cin >> datos[i];
    }
    /* primera vuelta: datos[0] se guarda ahí, segunda vuelta: datos[1], etc. */
    for (i = 0; i < 5; i++) {
        cout << datos[i] << endl;
    }
    return 0;
}