#include<stdio.h>

suma(int a, int b){
    int c;
    c = a + b;
    printf("%d", c);
}

int main(){
    int a, b;
    printf("introduce los numeros a sumar\n");
    scanf("%d", &a);
    scanf("%d", &b);
    suma(a, b);

    return 0;
}
