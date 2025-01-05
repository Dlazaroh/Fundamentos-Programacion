//ALGORITMO DE ORDANMIENTO
int particion(int arr[], int bajo, int alto) {
    int pivote = arr[alto];
    int i = (bajo - 1);

    for (int j = bajo; j <= alto-1; j++) {
        if (arr[j] < pivote) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[alto];
    arr[alto] = temp;
    return (i + 1);
}

void quicksort(int arr[], int bajo, int alto) {
    if (bajo < alto) {
        int pi = particion(arr, bajo, alto);
        quicksort(arr, bajo, pi - 1);
        quicksort(arr, pi + 1, alto);
    }
}
