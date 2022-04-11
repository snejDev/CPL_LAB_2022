#include <stdio.h>

int btod(int);

int btod(int bin)
{
    if(bin==0)
        return bin;
    return (bin%10+(btod(bin/10))*2);
}

int main(void)
{
    int bin;

    printf("Enter the binary value: ");
    scanf("%d",&bin);
    printf("Decimal Equivalent of %d = %d",bin,btod(bin));
    return 0;
}