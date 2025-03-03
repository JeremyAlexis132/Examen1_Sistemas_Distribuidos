#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arreglo[1000];

int main() {
    srand(time(NULL));
    int i=0;
    for (int i = 0; i < 1001; i++) {
        arreglo[i] = rand();
    }
    // Medimos el tiempo de ejecución inicial
    clock_t inicio = clock();
    for (int i = 0; i < 1001; i++) {
    }
    // Medimos el tiempo de ejecución final
    clock_t fin = clock();

    double tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecucion: %f segundos\n", tiempo);
    return 0;
}