#include <stdio.h>
#include <math.h>

#define PI 3.142857

int main(void)
{
	float x;
	float num, den, sum, term;
	int i;
	
	printf("Enter an angle in degrees: ");
	scanf("%f",&x);

	x *= (PI/180.0);

	//Computing sine	
	i = 1;
	sum = 0;
	num = x;
	den = 1;
	term = x;
	
	do
	{
		sum += term;
		//Computing the next term
		num *= (-1)*x*x;
		i+=2; 
		den *= i*(i-1);
		term = num/den;
	}while (fabs(term)>=0.000001);

	float sine = sum;	

	//Computing cosine

	i = 0;
	sum = 0;
	num = 1;
	den = 1;
	term = 1;
	
	do
	{
		sum += term;
		//Computing the next term
		num *= (-1)*x*x;
		i+=2;
		den *= i*(i-1);
		term = num/den;
	}while(fabs(term)>=0.000001);
	
	float cosine = sum;

	x *= (180/PI);
	printf("Taylor Series sin(%f) = %f\n", x,sine);
	printf("Library computed sin(%f) = %f\n",x,sin(x*(PI/180)));

	printf("Taylor Series sin(%f) = %f\n", x,cosine);
	printf("Library computed sin(%f) = %f\n",x,cos(x*(PI/180)));
	
	return 0;

}







