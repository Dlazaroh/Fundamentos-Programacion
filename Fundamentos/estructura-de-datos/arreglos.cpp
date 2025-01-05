#include <iostream>
using namespace std;

int main() {
    // Declaración e inicialización de un arreglo de enteros
    int numeros[5] = {1, 2, 3, 4, 5};
    
    // Acceso e impresión de los elementos del arreglo
    for(int i = 0; i < 5; i++) {
        cout << "Elemento en index " << i << ": " << numeros[i] << endl;
    }
    
    return 0;
}
//Los arreglos son útiles para almacenar múltiples valores del mismo tipo en una sola variable.