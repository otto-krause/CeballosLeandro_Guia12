#include <stdio.h>
int fus (int a, int b)//Solo muestra valor.
{ if (a==b) printf("Los nros son iguales\n"); else if (a>b) printf("El mayor de los dos nros es: %i\n", a); else printf("El mayor es: %i\n", b); }
int main ()
{ int c,d; printf("Ingrese dos valores: \n"); scanf("%i %i", &c, &d); fus (c,d); return 0; }
