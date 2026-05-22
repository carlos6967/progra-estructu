#include<stdio.h>

void main(){
    int a=67;
    short b=2;
    long c=1234567890;
    long long d=1234567890987654321;
    unsigned int e=12;
    float f=6.9;
    double g=3.1415926;
    char h='A';

    printf("TIPO\t\tSIZE\tID\tDIR\t\tDATO\n");
    printf("int\t\t4 bytes\ta\t%d\t%d\n",&a,a);
    printf("short\t\t2 bytes\tb\t%d\t%d\n",&b,b);
    printf("long\t\t8 bytes\tc\t%d\t%d\n",&c,c);
    printf("long long\t8 bytes\td\t%d\t%d\n",&d,d);
    printf("unsigned int\t4 bytes\te\t%d\t%d\n",&e,e);
    printf("float\t\t4 bytes\tf\t%d\t%d\n",&f,f);
    printf("duble\t\t8 bytes\tg\t%d\t%d\n",&g,g);
    printf("char\t\t1 byte\tA\t%d\t%d\n",&a,a);


}
