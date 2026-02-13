#include<stdio.h>

int main(){

    int a;

    printf("dime un n%cmero\n", 163);
    scanf("%d",&a);

    if(a % 2 == 0){
        printf("es par");
    }
    else{
        printf("es impar");
    }
}
