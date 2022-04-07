#include <stdio.h>

enum deck
{
    club = 0,
    diamonds = 5,
    hearts = 10,
    spades = 15,
    joker = 20,
} card;

int main()
{
    card = joker;
    printf("Size of var %ld \n", sizeof(card));
    return 0;
}

