#include <stdio.h>
float oc (float a, int b)
{ printf("La octava parte de %i es: %f\n", b,a); }
int main ()
{ int n; printf("Ingrese un valor: \n"); scanf("%i", &n); float o=(float)n/8; oc(o,n); return 0; }
