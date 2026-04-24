#include<stdio.h>

void mostrar(int v[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d", v[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int b[3][3]={{1,2,3},{4,5,6}};
    mostrar(b);
    printf("hola");
    return 0;
}
