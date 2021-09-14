#include <stdio.h>
float presion (float a)
{ printf("La presion sobre la superficie es:%f\n", a); }
int main ()
{ int f,s; printf("Ingrese la fuerza y la superficie: \n"); scanf("%i %i", &f, &s); float p=(float)f/(float)s; presion(p); return 0; }
