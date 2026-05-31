#include <stdio.h>
int main()
{
    int n,a=0,b=1,c;
    printf("Enter the position you want to find : ");
    scanf("%d", &n);
    for(int i = 1; i < n; i++)
    {
    c = a + b;
    a = b;
    b = c;
    }
    printf("Nth Fibonacci term = %d", a);
    return 0;
}