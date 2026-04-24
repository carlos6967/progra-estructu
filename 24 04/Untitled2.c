#include<stdio.h>

void capturar(int m[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &m[i][j]);
        }
    }
}

void mostrar(int m[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("(%d)", m[i][j]);
        }
        printf("\n");
    }
}

int diagonal(int m[3][3]){
    int suma = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i == j){
                suma = suma + m[i][j];
            }
        }
    }
    return suma;
}

void guardar(int m[3][3], int suma){
    FILE *f;
    f = fopen("tablero.txt","a");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            fprintf(f,"(%d)", m[i][j]);
        }
        fprintf(f,"\n");
    }
    fprintf(f,"%d\n\n",suma);
    fclose(f);
}


int main(){
    int asd[3][3];
    capturar(asd);
    mostrar(asd);
    diagonal(asd);
    int s = diagonal(asd);
    printf("%d", s);
    guardar(asd, s);
}
