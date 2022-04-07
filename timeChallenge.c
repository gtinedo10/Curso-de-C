#include <stdio.h>
#include <time.h>

int main()
{
    time_t now;

    time(&now); //por referencias

    printf("The date and time is: %s\n", ctime(&now));
    return 0;
}
