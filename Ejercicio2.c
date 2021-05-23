#include <stdio.h>
int factorial (int n) {
int i = 1;
while (n>1) {
i = i*n;
n = n-1;
}
return i;
}
int main ( int argc , char *argv[]) {
    int NUM;
    printf ("Ingrese un numero para calcular el factorial:\n");
    scanf("%d",&NUM);
int fac = factorial(NUM);
printf( "%d! = %d\n " , NUM, fac);
return 0;
}