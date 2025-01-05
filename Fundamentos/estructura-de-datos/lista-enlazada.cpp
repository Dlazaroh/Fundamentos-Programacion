#include <iostream>
using namespace std;

// Definición de un nodo de la lista enlazada
struct Nodo {
    int dato;
    Nodo* siguiente;
};

// Función para agregar un nuevo nodo al final de la lista
void agregarNodo(Nodo*& cabeza, int valor) {
    Nodo* nuevoNodo = new Nodo();
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = nullptr;

    if (cabeza == nullptr) {
        cabeza = nuevoNodo;
    } else {
        Nodo* temp = cabeza;
        while (temp->siguiente != nullptr) {
            temp = temp->siguiente;
        }
        temp->siguiente = nuevoNodo;
    }
}

// Función para imprimir todos los elementos de la lista
void imprimirLista(Nodo* cabeza) {
    Nodo* temp = cabeza;
    while (temp != nullptr) {
        cout << temp->dato << " -> ";
        temp = temp->siguiente;
    }
    cout << "NULL" << endl;
}

int main() {
    Nodo* cabeza = nullptr;

    // Agregar nodos a la lista
    agregarNodo(cabeza, 1);
    agregarNodo(cabeza, 2);
    agregarNodo(cabeza, 3);

    // Imprimir la lista
    imprimirLista(cabeza);

    return 0;
}
/*Las listas enlazadas son útiles para estructuras de datos dinámicas donde las inserciones
 y eliminaciones son frecuentes. */