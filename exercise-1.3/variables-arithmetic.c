#include <stdio.h>

// formula c=(5/9)(F-32)

// printing fahrenheit-celsius table
// for f = 0, 20, ...., 300

int main(void)
{
    int lower, upper, step;
    float fahr, celsius;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    printf("fahrenheit to celsius table\n");

    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}