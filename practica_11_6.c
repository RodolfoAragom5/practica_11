#include <stdio.h>
void llamarFuncion();
int main ()
{
for (int j=0 ; j < 5 ; j++)
{
llamarFuncion();
}
}
void llamarFuncion()
{
/* Solo la primera vez que se llame a esta función se creará y se le asignará
el valor de 0 a la variable estática numVeces */
static int numVeces = 0;
printf("Esta función se ha llamado %d veces.\n",++numVeces);
}
//############## funcEstatica.c ##############
#include <stdio.h>
int suma(int,int);
static int resta(int,int);
int producto(int,int);
static int cociente (int,int);
int suma (int a, int b)
{
return a + b;
}
static int resta (int a, int b)
{
return a - b;
}
int producto (int a, int b)
{
return (int)(a*b);
}
static int cociente (int a, int b)
{
return (int)(a/b);
}
//############## calculadora.c ##############
#include <stdio.h>
int suma(int,int);
//static int resta(int,int);
int producto(int,int);
//static int cociente (int,int);
int main()
{
printf("5 + 7 = %i\n",suma(5,7));
//printf("9 - 77 = %d\n",resta(9,77));
printf("6 * 8 = %i\n",producto(6,8));
//printf("7 / 2 = %d\n",cociente(7,2));
}
