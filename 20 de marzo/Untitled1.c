#include<stdio.h>
#include<string.h>

int main(){

    int i, j;
    char nombre[4][20];

    for(i=0; i<4; i++){
        fgets(nombre[i], sizeof(nombre[i]), stdin);
    }
    //for(i=0; i<50; i++){
        for(i=0; i<4; i++){
            printf("%d\n", &nombre[i]);
        }
    //}
}
