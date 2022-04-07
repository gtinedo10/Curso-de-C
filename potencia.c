#include <stdio.h>

int power(int base, int n);

int main() 
{
    int i;
    printf("Elija la base para la potencia: ");
    scanf("%d", &i);

    int p;
    printf("Ahora, elija el exponente: ");
    scanf("%d", &p);

    printf("El numero elegido es %d elevado a la %d, por lo tanto, el resultado de la potencia es %d\n", i, p, power(i, p));

    return 0;
}

int power(int base, int e)
{
    int i = 1, result = 0;

    while (i<e) 
    {
        if (result<base)
        {
            result = base * base;
        } else {
            result = result * base;
        }
    i++;
    }

    return result;
}
