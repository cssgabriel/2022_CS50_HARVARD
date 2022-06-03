#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float answer;
    int count = 0;
    
    //validation
    do
    {
        answer = get_float("Digite o troco: ");
    } while (answer <= 0);
    
    //convert $ to C
    int value = round(answer * 100);
    
    while (value >= 25)
    {
        value = value -25;
        count++;
    }
    
    while (value >= 10)
    {
        value = value -10;
        count++;
    }

    while (value >= 5)
    {
        value = value -5;
        count++;
    }

    
    while (value >= 1)
    {
        value = value -1;
        count++;
    }
    
    if (value == 0)
    {
        printf("%i\n", count);
    }   
}
