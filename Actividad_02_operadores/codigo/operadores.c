#include<stdio.h>

int main(){
int A=6;
int B=8;
int C;

 C=A+B/2%3;
 printf("1.- jerarquia:\n\t%d\n\n",C);

C=A<B?6:7;
printf("2.- ternario:\n\t%d\n\n",C);

printf("3.- OR logico:\tOR bitwise:\n",C);
C=A||B;
printf("\t%d\t",C);
C=A|B;
printf("\t%d\n\n",C);

printf("4.- prefijo:\tpostfijo:\n");
printf("\t%d\t",++C);
printf("\t%d\n",C++);
C=(A+B)/2%3;
printf("5.- precedencia:\n\t%d\n",C);
return 0;
}
