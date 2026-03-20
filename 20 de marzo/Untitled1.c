#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *archivo;
    archivo = fopen("tablero.txt", "w");

    int i, j;
    char tablero[5][5];
    char nombre[20];
    char asd[6];



    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            tablero[i][j]='~';
        }
    }

    tablero[1][2]='B';
    tablero[3][4]='X';
    tablero[2][1]='O';

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("%c ", tablero[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            fprintf(archivo,"%c ", tablero[i][j]);
        }
        fprintf(archivo, "\n");
    }

    fgets(nombre, sizeof(nombre), stdin);
    fprintf(archivo,"%s", nombre);

    fprintf(archivo, "%s", nombre);


    fclose(archivo);

    fopen("tablero.txt", "r");

    if (asd == fgets(asd, 7, archivo)) {
      if (asd == "carlos") {
         printf("%s", asd);
        }
        else if(asd != "carlos") {

        }
    }
    for(i=0; i<11; i++){
        fgets(asd, 7, archivo);
    }
    printf("%s", asd);

    fclose(archivo);

    return 0;
}
