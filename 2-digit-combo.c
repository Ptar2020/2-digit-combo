#include <stdio.h>

int main()
{
    /**
    * This is a program to print all possible different combinations of two digits
    * Numbers should be printed in ascending order
    */
    int a, b ;
    for  (a = 0; a < 10; a++)
    {
        for (b = 0; b<10; b++)
        {
            printf("%i%i",a,b);
            printf(",");
        }
    }
    return 0;


}
