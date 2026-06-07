#include <stdio.h>
int main()
{
    int n,i,flag=1;
    printf("Enter the number you want to check: ");
    scanf("%d",&n);
    if (n<=1)
    {flag = 0;
    }
    else
    {
    for (i=2;i<n;i++)
     {
    if (n%i==0)
    {
     flag = 0;
    break;
    }
    }
}
    if (flag == 1)
      printf("Prime Number");
    else
    printf("Not a Prime Number");

    return 0;
}