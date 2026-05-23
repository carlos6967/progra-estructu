#include<stdio.h>

int main(){
    int a = 3; //se establece el valor de a
    int b = 4; //se establece el valor de b
    int c = a++ + --b; //en una primera instancia, los valores que toma son a=3 y b=3 (ya que se pre-decrementó)
    printf("%d %d %d\n", a, b, c); //se va a tomar el último valor registrado de cada variable, por lo tanto a=4 (ya que post-aumentó), b=4 y c=6
    //////
    int x = 10; //se establece el valor de x
    int y = 3; //se establece el valor de x
    printf("%d\n", x + y * 2); //por jerarquia de operaciones, primero se calcula la multiplicación de y ý 2 (6) y se suma después el 10
    printf("%d\n", (x + y) * 2); //dados los parentesis, primero se calcula la suma entre x ý y, para despues múltiplicar ese resultado por 2
    //////
    int i = 5; //se establece el valor de x
    printf("%d\n", i++); //i se post-aumenta por lo tanto imprime el valor de 5 para después guardar el nuevo valor q tendrá i (6)
    printf("%d\n", ++i); //i se pre-aúmenta, dado el ultimo valor guardado (6) y el segundo aumento, el valor será 7
    //////
    a = 5; //se establece el valor de a (entero)
    b = 2; //se establece el valor de b (entero)
    float r = a / b; // se calcula el valor de r, pero al a ý b ser enteros, el valor de r no puede ser otro
    printf("%.2f\n", r); // se toma en cuenta unicamente la parte completa de r, pero al solicitar dos decimales, estos se tomaran por 0's
    //////
    x = 5, y = 3; //se agregaron espacios
    if(x>y){ //se incluyeron llaves
        printf("x es mayor\n"); //se agregaron saltos de línea e identación
    }
    else{ //se agregan llaves
        printf("y es mayor\n"); //se agregaron saltos de línea e identación
    }
    printf("fin");
    return 0;
}