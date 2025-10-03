#include <stdio.h>

void imprimirVetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void selectionSort(int v[], int n) {
    int i, j, menor_idx;

    for (i = 0; i < n - 1; i++) {
        // Encontra o índice do menor elemento no resto do vetor
        menor_idx = i;
        for (j = i + 1; j < n; j++) {
            if (v[j] < v[menor_idx]) {
                menor_idx = j;
            }
        }

        // Troca o menor elemento encontrado com o primeiro elemento (da parte não ordenada)
        int aux = v[menor_idx];
        v[menor_idx] = v[i];
        v[i] = aux;
    }
}

int main() {
    int numeros[] = {29, 72, 98, 13, 87, 66, 52, 51, 36};
    int n = sizeof(numeros) / sizeof(numeros[0]);

    printf("Selection Sort - Vetor original: ");
    imprimirVetor(numeros, n);

    selectionSort(numeros, n);

    printf("Selection Sort - Vetor ordenado: ");
    imprimirVetor(numeros, n);

    return 0;
}