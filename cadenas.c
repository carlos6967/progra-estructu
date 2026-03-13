#include<stdio.h>
#include<string.h>

char main(){

    char name1[16] = "Antonio";
    char name2[16];
    char name3[20];
    char nombres[2][20];
    int i;
    char copia1[16];

    /*printf("%s\n", name1);

    scanf("%s", &name2);
    printf("%s", name2);

    fgets(name3, sizeof(name3), stdin);
    printf("%s", name3);

    strcpy(jugadores[0], "Ana");
    strcpy(jugadores[1], "Luis");
    strcpy(jugadores[2], "Carlos");

    printf("%s", jugadores[2]);
*/
    for(i=0; i<3; i++){
        fgets(nombres[i], sizeof(nombres[i]), stdin);
    }

    printf("\n");

/*    for(i=0; i<3; i++){
        printf("%d. %s", i + 1, nombres[i]);
    }

  */  for(i=0; i<3; i++){
    printf("%d\n", strlen(nombres[i]));
    }

   /* strcpy(name1, copia1);
    printf("%s", copia1);
*/
    return 0;
}
