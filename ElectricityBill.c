#include <stdio.h>

int main()
{
  int unit;
  float price,totalPrice,ext;
  char name[25];

  printf("Enter your name: ");
  fgets(name,20,stdin);
  printf("Enter the number of units : ");
  scanf("%d", &unit);
  ext = 0;
  
  if(unit < 0)
  {
    printf("Units cannot be negative\n");
    return 1;
  }
  else if(unit <= 200)
    price = unit*0.80;
  else if(unit > 200 && unit <= 300)
    price = (200*0.80)+((unit-200)*0.90);
  else if(unit > 300)
    price = (200*0.80)+(100*0.90)+((unit-300)*1);

  totalPrice = 100 + price + ext;

  if(totalPrice > 400)
    totalPrice += 0.15*totalPrice;
  
  printf("Name: %s\n",name);
  printf("Final Charge = %f \n",totalPrice);
  return 0;
}
