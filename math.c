#include <stdio.h>
#include <math.h>

int x;
float result;

int main()
{
    printf("ingrese el valor de x: ");
    scanf("%d", &x);
    result = cos(x*M_PI/180);
    printf("El valor ingresado es:%d \n", x);
    printf("El valor del coseno de %d es:%.2f\n", x, result);

    return 0;
}
