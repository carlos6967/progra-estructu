#include<stdio.h>

int main(){

    int opcion, nM, c, p, i, suma;
    do{
        printf("1. ingresar numero de materias\n");
        printf("2. Salir (0)\n");
        scanf("%d", &nM);

    for(i=1, c=0, suma=0; i<=nM; i++){
        do{
            printf("ingresa la caficacion de la materia %d (0-100)", i);
            scanf("%d", &c);
        }while(c>=0 || c<=100);
            suma = c + suma;
    }
    p = suma / nM;
    printf("tu promedio es de %d\n\n", p);
    } while(nM != 0);
    return 0;
}