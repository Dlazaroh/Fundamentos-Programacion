#include <iostream>
#include <vector>
using namespace std;

// Clase para representar un grafo
class Grafo {
    int numVertices;
    vector<vector<int>> listaAdyacencia;
public:
    Grafo(int vertices);
    void agregarArista(int origen, int destino);
    void imprimirGrafo();
};

// Constructor
Grafo::Grafo(int vertices) {
    numVertices = vertices;
    listaAdyacencia.resize(vertices);
}

// Método para agregar una arista al grafo
void Grafo::agregarArista(int origen, int destino) {
    listaAdyacencia[origen].push_back(destino);
    // Si es un grafo no dirigido, también agregamos la arista inversa
    // listaAdyacencia[destino].push_back(origen);
}

// Método para imprimir el grafo
void Grafo::imprimirGrafo() {
    for (int i = 0; i < numVertices; i++) {
        cout << "Nodo " << i << ":";
        for (int j : listaAdyacencia[i]) {
            cout << " -> " << j;
        }
        cout << endl;
    }
}

int main() {
    Grafo grafo(5);

    grafo.agregarArista(0, 1);
    grafo.agregarArista(0, 4);
    grafo.agregarArista(1, 2);
    grafo.agregarArista(1, 3);
    grafo.agregarArista(1, 4);
    grafo.agregarArista(2, 3);
    grafo.agregarArista(3, 4);

    grafo.imprimirGrafo();

    return 0;
}
/*Los grafos son útiles para modelar redes, como las redes sociales,
las rutas de transporte y los sistemas de recomendación*/