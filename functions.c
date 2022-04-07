# include <stdio.h>

int powerOfInteger(int base, int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
        result = result*base;
    return result;
}

int main()
{
    int resultPower;
	    resultPower = powerOfInteger(2, 4);

    printf("%d \n", resultPower);
    
    return 0;
}
