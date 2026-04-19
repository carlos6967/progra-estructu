#include<stdio.h>

void capturar(int v[], int n){

    printf("introduce 6 numeros enteros\n");
    
    for(int i = 0; i<n; i++){
        scanf("%d", &v[i]);
    }
}

void mostrar(int v[], int n){
    
    for(int i = 0; i < n; i++){
        printf(" %d", v[i]);
    }
}

int filtrar(int origen[], int destino[], int n){
    int j = 0;

    for(int i = 0; i<n; i++){
        if(origen[i] % 2 !=0){
            destino[j] = origen[i];
            j++;
        }
    }
    return j;
}

void guardar(int v[], int n){
    FILE *f;
    f = fopen("resultado.txt", "w");

    for(int i = 0; i<n; i++){
        fprintf(f,"%d ", v[i]);
    }
    fclose(f);
}


int main(){
    int n = 6;
    int arreglo1[6];
    int x;
    int arreglo2[6];

    capturar(arreglo1, n);
    printf("este es el arreglo original:\n");
    mostrar(arreglo1, n);
    x = filtrar(arreglo1, arreglo2, n);
    printf("\neste es el arreglo filtrado:\n");
    mostrar(arreglo2, x);

    guardar(arreglo2, x);
    return 0;
}