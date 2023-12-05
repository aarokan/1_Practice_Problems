// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// TODO: Complete the function
float half(float bill, float tax, int tip)
{
    // convert percentage to apropriate formats
    float taxPercent = tax / 100;
    float tipConvertedtoFloat = tip;
    float tipPercent = tipConvertedtoFloat / 100;
    
    // add tax, calculate tip then split the bill evenly 
    float billInclusiveTax = bill + (bill * taxPercent);
    float myHalf = (billInclusiveTax + (billInclusiveTax * tipPercent)) / 2;
    return myHalf;
}
