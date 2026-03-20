#include<stdio.h>

int main(){

    int numeros[5];
    int i;

    for (i=0; i<5; i++){
        scanf("%d", &numeros[i]);
    }

    for(i=0; i<5; i++){
        printf("la direccion del dato %d es: %d\n", numeros[i], &numeros[i]);
    }
}
