//ALGORITMO DE BUSQUEDA
int busquedaBinaria(int arr[], int izq, int der, int x) {
    if (der >= izq) {
        int medio = izq + (der - izq) / 2;

        if (arr[medio] == x) {
            return medio;
        }

        if (arr[medio] > x) {
            return busquedaBinaria(arr, izq, medio - 1, x);
        }

        return busquedaBinaria(arr, medio + 1, der, x);
    }
    return -1; // No encontrado
}
