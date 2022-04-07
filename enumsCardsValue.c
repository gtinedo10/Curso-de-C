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
    card = spades;
    printf("Card Value %d \n", card);
    return 0;
}

