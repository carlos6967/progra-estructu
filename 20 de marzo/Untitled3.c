#include<stdio.h>
#include<string.h>

int main(){

    char arreglo[5];
    int i;

    fgets(arreglo, sizeof(arreglo), stdin);
    printf("%d\n", &arreglo[6]);
/*    for(i=0; i<5; i++){
        printf("%c\n", arreglo);
    }*/
}
