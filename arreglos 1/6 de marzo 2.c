#include<stdio.h>

int main() {
    float temp[24];
    int i, ndato, opc;

    for(i=0; i<=24; i++)
    for(i=0; i<=24; i++){

        do{
            printf("\n1. cambiar un dato");
            printf("\n2. salir\n");
            scanf("%d", &opc);
            switch(opc){
                case 1:
                    printf("cual dato quieres cambiar? (1-24)\n");
                    scanf("%d", &ndato);
                    printf("cual dato quieres que lo reemplace?\n");
                    scanf("%d", &i);
                    temp[ndato-1]=i;
                    break;
                default:
                    printf("saliendo...");
            }
            //if(opc==1){
              //  printf("cual dato quieres cambiar? (1-24)\n");
                //scanf("%d", &ndato);
                //printf("cual dato quieres que lo reemplace?\n");
                //scanf("%d", &i);
                //temp[ndato-1]=i;
           // }
        }while(opc!=2);
    }
}
