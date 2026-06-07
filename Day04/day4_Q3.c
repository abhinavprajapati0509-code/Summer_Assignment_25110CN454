#include <stdio.h>
int main()
{
    int n,r,sum =0,temp;

    printf("Enter a number to check : ");
    scanf("%d", &n);
    temp =n;
    while(n != 0)
    {
    r = n % 10;
    sum = sum + (r * r * r);
    n = n / 10;
    }
    if(sum == temp)
    printf("it is an Armstrong Number");
    else
    printf("it is Not an Armstrong Number");
    return 0;
}