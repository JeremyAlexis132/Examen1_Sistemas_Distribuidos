#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int matriz[1001][1001][1001];
int main(){
    int i=0;
    int j=0;
    int k=0;
    for(i=0;i<1001;i++){
        for(j=0;j<1001;j++){
            for(k=0;k<1001;k++){
                matriz[i][j][k]=1;
            }
        }
    }
    //medimos tiempo de ejecucion inicial
    clock_t inicio = clock();
    for(i=0;i<1001;i++){
        for(j=0;j<1001;j++){
            for(k=0;k<1001;k++){
                matriz[i][j][k];
            }
        }
    }
    //medimos tiempo de ejecucion final
    clock_t fin = clock();
    double tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecucion: %f\n", tiempo);
    return 0;
}