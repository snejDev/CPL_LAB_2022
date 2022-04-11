#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Enter a string: ");
    char s[35];
    scanf("%s",s);

    int len = strlen(s);

    for(int i=0;i<=len/2;i++)
    {
        if(s[i]!=s[len-i-1])
        {
            printf("%s is not a palindrome",s);
            return 0;
        }
    }
    printf("%s is a palindrome",s);
    return 0;
}