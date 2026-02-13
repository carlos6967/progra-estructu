#include<stdio.h>

int main(){
    int a, b, c;

    printf("ingresa tu edad\n");
    scanf("%d", &c);

    printf("ingresa tu promedio (0-100)\n");
    scanf("%d", &a);

    printf("ingresa la cantidad de materias reprobadas\n");
    scanf("%d", &b);

    if(c < 18){
        printf("no cumples con la edad");
    }
    else if (a >= 90 && b == 0){
        printf("puedes obtener la beca");
    }
    else if (a >= 90 && b <= 2){
        printf("puedes reinscribirte");
    }
    else{
        printf("est%cs en situaci%cn cr%ctca", 160, 162, 161);
    }
    return 0;
    }
