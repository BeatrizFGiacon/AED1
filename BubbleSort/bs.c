#include <stdio.h>

void bubbleSort(int *v, int n){
    int i, j;
    for( i = 0; i < n -1; i++){
        for(j = 0; j < n-1-i; j++){
            if(v[j] > v[j+1]){
                int aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

void imprimirVetor(int *v, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(){
    int numeros[] = {64, 34, 25, 12, 22, 11, 90};

    int n = sizeof(numeros) / sizeof(numeros[0]);

    printf("Vetor original: ");
    imprimirVetor(numeros, n);

    bubbleSort(numeros, n);

    printf("Vetor ordenado: ");
    imprimirVetor(numeros, n);

    return 0;
}