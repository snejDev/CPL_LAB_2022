#include <stdio.h>

int main(void)
{
    int m,n;
    int p,q;

    printf("Enter the number of rows and columns in the first matrix: ");
    scanf("%d%d",&m,&n);

    printf("Enter the number of rows and columns in the second matrix: ");
    scanf("%d%d",&p,&q);

    if(n!=p)
    {
        printf("The two matrices cannot be multiplied as the number of columns in the first matrix is not equal to the number of rows in the second matrix\n");
        printf("Invalid matrix multiplication\n");
        return -1;
    }

    int a[m][n],b[p][q],c[m][q];


    //Matrix a input
    printf("Enter the elements of the first matrix: ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }

    //Matrix b input
    printf("Enter the elements of the second matrix: ");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
            scanf("%d",&b[i][j]);
    }

    printf("\n");

    //Displaying the array a in matrix form
    printf("The matrix a is: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }

    printf("\n");

    //Displaying the array b in matrix form
    printf("The matrix b is: \n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
            printf("%d\t",b[i][j]);
        printf("\n");
    }

    printf("\n");

    //Matrix Multiplication
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            c[i][j] = 0;
            for(int k=0;k<n;k++)
                c[i][j] += (a[i][k]*b[k][j]);
        }
    }

    //Displaying the resultant matrix c
    printf("The product matrix is: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
            printf("%d\t",c[i][j]);
        printf("\n");
    }
    return 0;
}