#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int n;
	
	printf("Enter the number of elements: ");
	scanf("%d",&n);
		
	int a[n];

	printf("Enter the elements: ");	
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(int i=0;i<(n-1);i++)
	{
		for(int j=0;j<(n-i-1);j++)
		{
			if(a[j]>=a[j+1])
			{
				a[j]+=a[j+1];
				a[j+1]=a[j]+a[j+1];
				a[j]-=a[j+1];
			}
		}
	}
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);

	int key = 0;	

	putchar('\n');
	printf("Enter the element to be found:\n");
	scanf("%d",&key);
	
	int first = 0;
	int last = (n-1);

	while(first<=last)
	{
		int mid = (first+last)/2;
		if(key==a[mid])
		{
			printf("Element found at %d\n",(mid+1));
			return 0;
		}	
		else if(key>a[mid])
			first = mid+1;
		else if(key<a[mid])
			last = mid-1;
	}
	printf("Element not found :(\n");
	return 1;
}
