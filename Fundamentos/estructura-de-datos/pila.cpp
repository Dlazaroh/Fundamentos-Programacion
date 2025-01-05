#include <iostream>
using namespace std;

// Definición de un nodo de la pila
struct Nodo {
    int dato;
    Nodo* siguiente;
};

// Función para agregar un elemento a la pila
void push(Nodo*& cima, int valor) {
    Nodo* nuevoNodo = new Nodo();
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = cima;
    cima = nuevoNodo;
}

// Función para quitar un elemento de la pila
int pop(Nodo*& cima) {
    if (cima == nullptr) {
        cout << "La pila está vacía" << endl;
        return -1; // O cualquier valor que indique error
    }
    int valor = cima->dato;
    Nodo* temp = cima;
    cima = cima->siguiente;
    delete temp;
    return valor;
}

// Función para imprimir los elementos de la pila
void imprimirPila(Nodo* cima) {
    Nodo* temp = cima;
    while (temp != nullptr) {
        cout << temp->dato << " -> ";
        temp = temp->siguiente;
    }
    cout << "NULL" << endl;
}

int main() {
    Nodo* cima = nullptr;

    // Agregar elementos a la pila
    push(cima, 10);
    push(cima, 20);
    push(cima, 30);

    // Imprimir la pila
    imprimirPila(cima);

    // Quitar un elemento de la pila
    cout << "Elemento eliminado: " << pop(cima) << endl;

    // Imprimir la pila nuevamente
    imprimirPila(cima);

    return 0;
}
/*Las pilas son útiles para problemas donde necesitas acceder al elemento más reciente añadido primero,
como en la evaluación de expresiones o en la gestión de llamadas anidadas.*/