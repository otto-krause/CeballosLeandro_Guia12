#include <stdio.h>
int pre (int p, int a)
{ printf("El area es %i\nEl perimetro es %i\n", a,p); }
int main ()
{ int c,d; printf("Ingrese dos valores: \n"); scanf("%i %i", &c, &d); int pe=2*c+2*d, ar=c*d; pre(pe,ar); return 0; }
