#include<stdio.h>

int main(){
    int a, b;

    printf("ingresa tu promedio (0-100)\n");
    scanf("%d", &a);

    printf("ingresa la cantidad de materias reprobadas\n");
    scanf("%d", &b);

    if(a >= 85 && b == 0){
        printf("eres beneficiario de la beca");
    }
    else{
        printf("mejora tu rendimiento acad%cmico", 130);
    }
    }
