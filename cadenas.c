#include<stdio.h>
#include<string.h>

char main(){

    char name1[16] = "Antonio";
    char name2[16];
    char name3[20];
    char nombres[2][20];
    int i;
    char origen[16];
    char copia1[16];
    char nombre[20];
    char apellido[20];
    char a[20];
    char b[20];

    /*printf("%s\n", name1);

    scanf("%s", &name2);
    printf("%s", name2);

    fgets(name3, sizeof(name3), stdin);
    printf("%s", name3);

    strcpy(jugadores[0], "Ana");
    strcpy(jugadores[1], "Luis");
    strcpy(jugadores[2], "Carlos");

    printf("%s", jugadores[2]);

    for(i=0; i<3; i++){
        fgets(nombres[i], sizeof(nombres[i]), stdin);
    }

    printf("\n");

/*    for(i=0; i<3; i++){
        printf("%d. %s", i + 1, nombres[i]);
    }

    for(i=0; i<3; i++){
    printf("%d\n", strlen(nombres[i]));
    }


    printf("escribe la cadena que desees copiar:\n");
    fgets(origen, sizeof(origen), stdin);
    strcpy(copia1, origen);
    printf("%s", copia1);


    

    printf("escribe tu nombre\n");
    scanf("%s", &nombre);
    printf("escribe tu apellido\n");
    scanf("%s", &apellido);
    strcat(nombre, apellido);
    printf("tu nombre y apellido es: %s \n", nombre);

    */
    

    printf("escribe una contrasena:\n");
    fgets(a, sizeof(a), stdin);
    printf("confirma la contrasena:\n");
    fgets(b, sizeof(b), stdin);
    
    if (strcmp(a, b)==0)
    {
        printf("si es la misma");
    }else{
        printf("te equivocaste");
    }

    return 0; 
}
