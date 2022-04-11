#include <stdio.h>

int main(void)
{
	float a,b,res;
	char op;
	
	printf("Enter two operands: ");
	scanf("%f%f",&a,&b);

	printf("Choose one of the operators: \n");
	printf("Type + for addition \n");
	printf("Type - for subraction \n");
	printf("Type * for multiplication \n");
	printf("Type / for division \n");
	printf("Type %% for division \n");

	scanf(" %c",&op);
	switch(op)
	{
		case '+': res = a+b;
			  break;	  		
		case '-': res = a-b;
			  break;	  		
		case '*': res = a*b;
			  break;
		case '/': if(b==0)	
			  {
			  	printf("Division by zero error");
				return -1;
			  }
			  res = a/b;
			  break;	  			  		
		case '%': if(b==0)	
			  {
			  	printf("Division by zero error");
				return -1;
			  }
		          res = ((int)a)%((int)b);
			  break;
		default: printf("Invalid Entry");
			 return -1;
	}

	printf("%.2f %c %.2f = %.2f",a,op,b,res);
	return 0;
}
