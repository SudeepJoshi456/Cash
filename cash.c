#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    int cents;
    // Ask how many cents the customer is owed
    do
    {
        cents = get_cents();
        cents = get_int("How many cents do you owe? ");
    }
    while (cents < 0 || cents >= 100);
    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    printf("quarters: %i\n", calculate_quarters(cents));
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    printf("dimes: %i\n", calculate_dimes(cents));
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    printf("nickels: %i\n", calculate_nickels(cents));
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    printf("pennies: %i\n", calculate_pennies(cents));
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("total coins: %i\n", coins);
}

int get_cents(void)
{
    return 0;
}

int calculate_quarters(int cents)
{
    // Returning value to print no. of quarters
    if (cents < 25)
    {
        return cents = 0;
    }
    else if (cents >= 25 && cents < 50)
    {
        return cents = 1;
    }
    else if (cents >= 50 && cents < 75)
    {
        return cents = 2;
    }
    else
    {
        return cents = 3;
    }
}

int calculate_dimes(int cents)
{
    // Returning the value to print the number of dimes
    if (cents < 10)
    {
        return cents = 0;
    }
    else if (cents >= 10 && cents < 20)
    {
        return cents = 1;
    }
    else
    {
        return cents = 2;
    }
}

int calculate_nickels(int cents)
{
    // Returning the value to print the number of nickels
    if (cents < 5)
    {
        return cents = 0;
    }
    else
    {
        return cents = 1;
    }
}

int calculate_pennies(int cents)
{
    // Returning the value to print the number of pennies
    return cents;
}