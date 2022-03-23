#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // declare variables to be used
    float change;
    int coins = 0;

    // ask user for input (float), make sure it's >0
    do
    {
        change = get_float("Change owed: ");
    }
    while (change <= 0);

    // convert the change to cents, i.e. 1.60 = 160cents
    int money = round(change * 100);

    // keep looping while there are still cents left
    while (money >= 25)
    {
        money = money - 25;
        coins++;
    }
    while (money >= 10)
    {
        money = money - 10;
        coins++;
    }
    while (money >= 5)
    {
        money = money - 5;
        coins++;
    }
    while (money >= 1)
    {
        money = money - 1;
        coins++;
    }

    // print the number of coins used
    printf("%i\n", coins);
}