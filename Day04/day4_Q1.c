#include <stdio.h>
int main() {
    int n, first=0,second=1,next;
    printf("Enter the number of terms to generate: ");
    scanf("%d", &n);
    printf("The Fibonacci Series is follows : ");
    for (int i = 0; i < n; i++) {
    printf("%d ", first);
    next = first + second;
    first = second;
     second = next;
     }
    return 0;
     }