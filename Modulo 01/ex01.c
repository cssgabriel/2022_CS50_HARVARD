// #include <cs50.h>
#include <stdio.h>

int main (void)
{
    int height;
    char space = " ";
    int decrement;
    
    do
    {
        height = get_int("Height: ");
    } while (height < 1 || height > 8);

    decrement = height - 1;
    
    for (int i = 1; i <= height; i++)
    {
        // imprime os espaços
        for (int j = decrement; j > 0; j--)
        {
        printf("%s", space);
        }
        
        // imprime os blocos
        for (int x = decrement; x < height; x++)
        {
            printf("#");
        }
        
    printf("\n");
    decrement--;
    }
}