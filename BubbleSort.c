#include <stdio.h>

int main(void)
{
	int n = 0;
	int a[25];
	
	printf("Enter the number of elements: ");
	scanf("%d",&n);

	printf("Enter the integer elements to be sorted: ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(int i=0;i<(n-1);i++)
	{
		for(int j=0;j<(n-i-1);j++)
		{
			if(a[j]>=a[j+1])
			{
				a[j] += a[j+1];
				a[j+1] = a[j]-a[j+1];
				a[j] = a[j]-a[j+1];
			}	
		}
	}

	for(int i=0;i<n;i++)
		printf("%d ",a[i]);

	return 0;
}
