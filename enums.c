#include <stdio.h>

enum weekDays {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main()
{
    enum weekDays today;
    today = Tuesday;
    printf("Day %d", today + 1);
    return 0;
}


