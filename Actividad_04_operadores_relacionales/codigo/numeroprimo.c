#include <stdio.h>
#include <math.h>

int main() {
    int n, i, esPrimo = 1;

    printf("ingresa un numero entero positivo\n");
    scanf("%d", &n);


    if (n <= 1) {
        esPrimo = 0;
    } else {
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                esPrimo = 0;
                break;
            }
        }
    }

    if (esPrimo)
        printf("%d es primo\n", n);
    else
        printf("%d no es primo\n", n);

    return 0;
}
