#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    } 
    while (min >= max);
    
    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    // TODO
    int remainders = 0;
    for (int divider = 2; divider < number; divider++)
    {
        remainders += number % divider;

        // check if there is no remainder (means it is divisible & not prime)
        if (remainders == 0)
        {
            return false;
        }
    }

    // execlude 1 from prime numbers
    if (number == 1)
    {
        return false;
    }
    // Not divisible so it is a prime number
    return true;
}
