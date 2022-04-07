#include<stdio.h>
#include<string.h>

char * string1;
size_t size;
char string2[60];
char enter;

int main()
{

    printf("Type a sentence: \n");
    getline(&string1, &size, stdin);
    string1[strlen(string1)-1] = '\0';
    printf("Type another sentence: \n");
    fgets(string2, size, stdin);
    string2[strlen(string2)-1] = '\0';

    printf("%s \n", string1);
    printf("%s \n", string2);
    
    return 0;
}

