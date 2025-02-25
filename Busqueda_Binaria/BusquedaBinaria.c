#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int busquedaBinaria(int *arreglo, int n, int x) {
    int inicio = 0;
    int fin = n - 1;
    int medio;
    while (inicio <= fin) {
        medio = (inicio + fin) / 2;
        if (arreglo[medio] == x) {
            return medio;
        } else if (arreglo[medio] < x) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }
    return -1;
}
int main(){
    int n = 10000000000;
    int *arreglo = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        arreglo[i] = i;
    }
    int x = 1001;
    clock_t inicio = clock();
    int resultado = busquedaBinaria(arreglo, n, x);
    clock_t fin = clock();
    double tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecucion: %f\n", tiempo);
    free(arreglo);
    return 0;
}
