#include <stdio.h>
int resultado; //variable global
int main()
{
multiplicar(); //llamado de la función multiplicar
printf(“%i”,resultado);
return 0;
}
void multiplicar() //función multiplicar
{
resultado = 5 * 4;
return 0;
}
