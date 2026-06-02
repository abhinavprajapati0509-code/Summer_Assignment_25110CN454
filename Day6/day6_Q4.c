#include <stdio.h>
int main()
{
int x, n, result = 1;
    printf("Enter base 0f the number  and the power of the number : ");
    scanf("%d%d", &x, &n);
    for(int i = 1; i <= n; i++)
    {
        result = result * x;
    }
    printf("Answer = %d", result);
    return 0;
}