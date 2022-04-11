#include <stdio.h>

int main(void)
{
    int n;
    int r = 0;
    
    printf("Enter a number: ");
    scanf("%d",&n);

    while(n>0)
    {
        int rem = n%10;
        r = (r*10)+rem;
        n /= 10;
    }

    printf("Reversed Number: %d",r);
    return 0;
}