#include <iostream>
#include <list>
using namespace std;

class HashTable {
private:
    int capacidad;    // Tamaño de la tabla hash
    list<int>* tabla; // Array de listas para manejar colisiones

    // Función hash para mapear valores a claves
    int hash(int clave) {
        return clave % capacidad;
    }

public:
    // Constructor
    HashTable(int tam) {
        this->capacidad = tam;
        tabla = new list<int>[capacidad];
    }

    // Función para insertar un elemento en la tabla
    void insertarElemento(int clave) {
        int index = hash(clave);
        tabla[index].push_back(clave);
    }

    // Función para eliminar un elemento de la tabla
    void eliminarElemento(int clave) {
        int index = hash(clave);
        tabla[index].remove(clave);
    }

    // Función para buscar un elemento en la tabla
    bool buscarElemento(int clave) {
        int index = hash(clave);
        for (auto x : tabla[index]) {
            if (x == clave) {
                return true;
            }
        }
        return false;
    }

    // Función para imprimir la tabla hash
    void imprimirTabla() {
        for (int i = 0; i < capacidad; i++) {
            cout << i;
            for (auto x : tabla[i]) {
                cout << " --> " << x;
            }
            cout << endl;
        }
    }
};

int main() {
    HashTable ht(10);

    ht.insertarElemento(15);
    ht.insertarElemento(25);
    ht.insertarElemento(35);
    ht.insertarElemento(45);

    ht.imprimirTabla();

    ht.eliminarElemento(25);
    cout << "Después de eliminar 25:" << endl;
    ht.imprimirTabla();

    cout << "Buscar 35: " << (ht.buscarElemento(35) ? "Encontrado" : "No Encontrado") << endl;

    return 0;
}
//Las tablas hash son extremadamente eficientes para búsquedas, inserciones y eliminaciones rápidas.