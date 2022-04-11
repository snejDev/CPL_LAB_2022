#include <stdio.h>
#include <string.h>

int main(void)
{
    int year;

    printf("Enter the year: ");
    scanf("%d",&year);
    char s[20];


    if(year%400==0)
        strcpy(s,"a leap year");
    else if(year%100==0)
        strcpy(s,"not a leap year");
    else if(year%4==0)
        strcpy(s,"a leap year");
    else
        strcpy(s,"not a leap year");

    printf("%d is %s",year,s);
}