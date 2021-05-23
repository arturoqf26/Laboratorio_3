#include <stdio.h>

int main(){
    char let;
      printf ("Ingrese un caracter:\n");
      scanf("%c",&let);
     if (let=='a'||let=='e'||let=='i'||let=='o'||let=='u'||let=='A'||let=='E'||let=='I'||let=='O'||let=='U')
       {printf ("La letra %c es una vocal\n", let);}
    else if ((let>='a'&&let<='z')||(let>='A'&&let<='Z')||(let==164)||(let==165))     // 164 y 165 son los ASCII de la ñ y Ñ.
       {printf ("La letra %c es una consonante\n", let);}
    else
       {printf("No es una letra\n");}
    return 0;
}