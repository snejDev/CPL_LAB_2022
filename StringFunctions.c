#include <stdio.h>

int strlen(char []);
int strcomp(char s1[], char s2[]);
void strconcat(char s1[],char s2[]);

int strlen(char s[])
{
    int i;
    for(i=0;s[i]!='\0';i++);
    return i;
}

int strcomp(char s1[], char s2[])
{
    int i;
    
    for(i=0;(s1[i] != '\0' && s2[i] != '\0');i++)
    {
        if(s1[i] != s2[i])
            return (s1[i]-s2[i]);
    }
    
    if(s1[i]=='\0' && s2[i]=='\0')
        return 0;
    else if(s1[i]=='\0'||s2[i]=='\0');
        return (s1[i]-s2[i]);
}

void strconcat(char *s1,char *s2)
{
    int i,j;
    for(i=0;s1[i]!='\0';i++);

    for(j=0;s2[j]!='\0';i++,j++)
        s1[i] = s2[j];
    
    s1[i] = '\0';
}

int main(void)
{
    char sl[30];    
    char sc1[30],sc2[30];
    char sco1[30],sco2[30];

    printf("Enter a string: ");
    scanf("%s",&sl);
    printf("Length of %s = %d\n",sl,strlen(sl));

    printf("Enter two strings to compare: ");
    scanf("%s%s",sc1,sc2);
    printf("%d\n",strcomp(sc1,sc2));

    printf("Enter two strings to concatenate: ");
    scanf("%s%s",sco1,sco2);
    strconcat(sco1,sco2);
    printf("%s\n",sco1);

    return 0;
}