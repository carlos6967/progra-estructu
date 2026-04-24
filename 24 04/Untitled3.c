#include<stdio.h>
#include<stdlib.h>

/*struct Alumne{
    char nombre[32];
    float calif;
    int acts, derecho;
};*/

union Dato{
    int entero;
    float decimal;
};


int main(){
    union Dato x;

    x.entero = 10;
    printf("%d\n", x.entero);
    x.decimal = 6.7;
    printf("%f\n", x.decimal);
  /*  struct Alumne carlos;
    struct Alumne grupo[3];

    for (int i=0; i<3; i++){
        printf("nombre alumno (%d)\n", i+1);
        fgets(grupo[i].nombre, sizeof(grupo[i].nombre), stdin);

        printf("\ncalificacion alumno (%d)\n", i+1);
        scanf("%d", &grupo[i].nombre);

        printf("\nactividades alumno (%d)\n", i+1);
        scanf("%d", &grupo[i].acts);
        getchar();
    }

    printf("Nombre: ");
    fgets(carlos.nombre, sizeof(carlos.nombre), stdin);

    printf("Calificacion: ");
    scanf("%f", &carlos.calif);

    printf("Actividades realizadas: ");
    scanf("%d", &carlos.acts);

    printf("Datos capturados:\n");
    printf("%s", carlos.nombre);
    printf("%.2f\n", carlos.calif);
    printf("%d", carlos.acts);
*/
    return 0;
}
