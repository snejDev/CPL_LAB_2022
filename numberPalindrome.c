#include <stdio.h>

int main(void)
{
    int n;
    int r = 0;
    
    printf("Enter a number: ");
    scanf("%d",&n);

    int temp = n;

    while(n>0)
    {
        int rem = n%10;
        r = (r*10)+rem;
        n /= 10;
    }

    printf("Reversed Number: %d\n",r);

    if(temp==r)
        printf("%d is a palindrome\n",r);
    else 
        printf("%d is not a palindrome\n",r);

    return 0;
}