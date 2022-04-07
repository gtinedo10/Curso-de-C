// 1er paso Dividir el valor entre 2 y almacenar el resto/mod, en un array
// 2do paso Dividir otra vez entre 2 y almacenar el restante
// 3er paso Repetir hasta que nuestro numero ya no se pueda dividir 

#include <stdio.h>
#include <stdlib.h>

int binaryNumber[12],n,i;

int main()
{   
    // La siguiente linea limpia la terminal (para Windows seria "cls")
    system("clear");
    // La siguiente linea configura el color de la consola (esta instruccion funciona es para Windows)
    system("color 9F");
    
    printf("Ingrese un valor decimal\n");
    scanf("%d", &n);
    printf("Usted va a convetir el numero %d a binario\n", n);
    
    for ( i = 0; n > 0; i++)
    {
	// A continuacion se determina el modulo de la division
        binaryNumber[i]= n%2;
        n = n/2;
    }

    printf("El resultado de la conversion es: ");
    for ( i = i-1 ; i >= 0; i--)
    {
        printf("%d",binaryNumber[i]);
    }
    printf("\n");
        return 0;
}
