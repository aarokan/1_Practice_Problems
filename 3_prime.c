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
        
    }

    // check if number is prime (having remainders means it is divisible)
    if (remainders > 0) 
    {
        return true;
    }
    return false;
}
