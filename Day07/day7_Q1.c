#include <stdio.h>
int fact(int n)
{
if(n == 0 || n == 1)
    return 1;
    return n * fact(n - 1);
}
int main()
{
int n;
    printf("Enter the number to find factorial: ");
    scanf("%d", &n);
    printf("Factorial is  = %d", fact(n));
    return 0;
}