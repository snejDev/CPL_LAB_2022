#include <stdio.h>

/*  1 2 3 
    4 5 6
    7 8 9

    1 4 7
    2 5 8
    3 6 9   */

int main(void)
{
    int m,n;
    
    printf("Enter the order of the matrix: ");
    scanf("%d%d",&m,&n);

    int a[m][n];
    int t[n][m];

    printf("Enter the elements of the array: \n");

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)           
            scanf("%d",&a[i][j]);
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            t[j][i] = a[i][j];
    }

    printf("\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d",a[i][j]);
        printf("\n");
    }

    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)           
            printf("%d\t",t[i][j]);
        printf("\n");
    }

    return 0;
}