#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arreglo[1];
int main(){
    srand(time(NULL));
    arreglo[0]=rand();
    //medimos tiempo de ejecucion inicial
    clock_t inicio = clock();
    arreglo[0];
    //medimos tiempo de ejecucion final
    clock_t fin = clock();
    double tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecucion: %f\n", tiempo);
    return 0;
}