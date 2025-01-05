#include <iostream>
using namespace std;

// Definición de un nodo del árbol binario
struct Nodo {
    int dato;
    Nodo* izquierdo;
    Nodo* derecho;
};

// Función para crear un nuevo nodo
Nodo* nuevoNodo(int valor) {
    Nodo* nodo = new Nodo();
    nodo->dato = valor;
    nodo->izquierdo = nullptr;
    nodo->derecho = nullptr;
    return nodo;
}

// Función para insertar un nuevo nodo en el árbol
Nodo* insertar(Nodo* raiz, int valor) {
    if (raiz == nullptr) {
        return nuevoNodo(valor);
    }
    if (valor < raiz->dato) {
        raiz->izquierdo = insertar(raiz->izquierdo, valor);
    } else if (valor > raiz->dato) {
        raiz->derecho = insertar(raiz->derecho, valor);
    }
    return raiz;
}

// Función para recorrer el árbol en orden
void recorrerEnOrden(Nodo* raiz) {
    if (raiz != nullptr) {
        recorrerEnOrden(raiz->izquierdo);
        cout << raiz->dato << " ";
        recorrerEnOrden(raiz->derecho);
    }
}

int main() {
    Nodo* raiz = nullptr;
    raiz = insertar(raiz, 50);
    insertar(raiz, 30);
    insertar(raiz, 20);
    insertar(raiz, 40);
    insertar(raiz, 70);
    insertar(raiz, 60);
    insertar(raiz, 80);

    cout << "Recorrido en orden del árbol binario: ";
    recorrerEnOrden(raiz);

    return 0;
}
/*Los árboles binarios son útiles para muchas aplicaciones, como la búsqueda y clasificación de datos.*/