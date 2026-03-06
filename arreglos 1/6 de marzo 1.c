#include<stdio.h>

int main() {
    float temp1, temp2;
    float temp[24];
    int dummy;
    printf("direccion de mem de 2 flotantes:\n&temp1:%i\n&temp2: %i\n", &temp1, &temp2);
    printf("direccion de temp[24]: %i\n", temp);
    printf("direccion de &temp[24]: %i\n", &temp);
    printf("direccion de &dummy: %i\n", &dummy);
}
