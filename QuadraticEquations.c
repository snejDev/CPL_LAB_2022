#include <stdio.h>
#include <math.h>

int main(void)
{
	float a,b,c;
	float root1, root2;	
	
	printf("Enter the co-efficients of the quadratic equation seperated by blank spaces: ");
	scanf("%f %f %f", &a,&b,&c);
	
	if(a==0)
	{
		printf("The equation is linear");
		return 1;
	}
	
	float dis = (b*b)-(4*a*c);
	
	if(dis==0)
	{
		root1 = (-b/(2*a));
		root2 = root1;
		printf("The solutions are equal\n");
	}
	else if(dis>0)
	{
		root1 = (-b+sqrt(dis))/(2*a);
		root2 = (-b-sqrt(dis))/(2*a);		
		printf("The roots are real and distinct\n");
	}
	else
	{
		float real_part = (-b/(2*a));
		float imag_part = (sqrt(-dis))/(2*a);
		printf("The roots are imaginary\n");
		printf("Root1 = %f+%fi \nRoot2 = %f-%fi",real_part,imag_part,real_part,imag_part);
		return 0;
	}
	printf("Root1 = %f \nRoot2 = %f",root1,root2);
	return 0;
}





