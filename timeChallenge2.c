#include <stdio.h>
#include <time.h>

/*Queremos saber la fecha y hora actual e imprimirla en la consola*/


time_t t;



int main(){


    struct tm *tm;
    char dateAndHour [100];
    t = time(NULL);
    tm = localtime(&t);
    
    strftime(dateAndHour, 100, "%d/%m/%Y y la hora es: %H:%M:%S", tm);

    printf("Hoy es: %s\n", dateAndHour);
    
    return 0;
    
}
