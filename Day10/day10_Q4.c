#include <stdio.h>
int main()
{ int i;
   for(int i = 1; i <= 5; i++)
    {
     for( int j = 1; j <= 5 - i; j++)
    {
    printf(" ");
    }
    for (int j =1 ; j <=i ; j++)
    {
        printf("%c", j + 64);  // Convert number to corresponding uppercase letter
    }
        for(int k =i - 1; k >= 1; k--)   {
            printf("%c", k + 64);  // Convert number to corresponding uppercase letter
        }
        printf("\n");
    }
    return 0;
}