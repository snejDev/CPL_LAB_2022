#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    float *p;
    float sum,mean,var,std;
    
    sum = 0;

    printf("Enter the number of elements of the array: ");
    scanf("%d",&n);
    float a[n];

    p = a;
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%f",p);
        printf("%x=%.3f\n",p,*p);
        sum+=*p;
        p++;
    }
    mean = sum/n;
    
    p=a;
    for(int i=0;i<n;i++)
    {
        var += pow((*p-mean),2);
        p++;
    }
    var /= n;
    std = sqrt(var);

    printf("Sum = %f\n",sum);
    printf("Mean = %f\n",mean);
    printf("Variance = %f\n",var);
    printf("Standard Deviation = %f\n",std);

    return 0;
}