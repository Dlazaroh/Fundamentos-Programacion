#include <iostream>
using namespace std;

// Definición de un nodo de la cola
struct Nodo {
    int dato;
    Nodo* siguiente;
};

// Función para agregar un elemento a la cola (en la parte posterior)
void enqueue(Nodo*& frente, Nodo*& final, int valor) {
    Nodo* nuevoNodo = new Nodo();
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = nullptr;

    if (frente == nullptr) {
        frente = nuevoNodo;
        final = nuevoNodo;
    } else {
        final->siguiente = nuevoNodo;
        final = nuevoNodo;
    }
}

// Función para quitar un elemento de la cola (de la parte frontal)
int dequeue(Nodo*& frente) {
    if (frente == nullptr) {
        cout << "La cola está vacía" << endl;
        return -1; // O cualquier valor que indique error
    }
    int valor = frente->dato;
    Nodo* temp = frente;
    frente = frente->siguiente;
    delete temp;
    return valor;
}

// Función para imprimir los elementos de la cola
void imprimirCola(Nodo* frente) {
    Nodo* temp = frente;
    while (temp != nullptr) {
        cout << temp->dato << " -> ";
        temp = temp->siguiente;
    }
    cout << "NULL" << endl;
}

int main() {
    Nodo* frente = nullptr;
    Nodo* final = nullptr;

    // Agregar elementos a la cola
    enqueue(frente, final, 10);
    enqueue(frente, final, 20);
    enqueue(frente, final, 30);

    // Imprimir la cola
    imprimirCola(frente);

    // Quitar un elemento de la cola
    cout << "Elemento eliminado: " << dequeue(frente) << endl;

    // Imprimir la cola nuevamente
    imprimirCola(frente);

    return 0;
}
/*Las colas son útiles para gestionar tareas en el orden en que llegan, 
como en sistemas de impresión o colas de clientes. */