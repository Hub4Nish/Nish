#include <stdio.h>
int main()
{
  int num1,num2;
  float result;
  char op;
  printf("Enter the two numbers: \n");
  scanf("%d%d",&num1,&num2);
  printf("Enter + for addition: \n");
  printf("Enter - for subtraction: \n");
  printf("Enter * for multiplication: \n");
  printf("Enter / for division: \n");
  printf("Enter %% for modulus: \n");
  printf("Enter the operator: \n");
  scanf(" %c",&op);
  if(op=='+')
  {
    result=num1+num2;
  }
  else if(op=='-')
  {
    result=num1-num2;
  }
  else if(op=='*')
  {
    result=num1*num2;
  }
  else if(op=='/')
  {
    if(num2=='0')
    {
      printf("Second number must not be zero...");
    }
    result=num1/num2;
  }
  else if(op=='%')
  {
    if(num2=='0')
    {
      printf("Second number must not be zero");
      return (-1);
    }
    result=num1%num2;
  }
  printf("Result of %d %c %d is: %f",num1,op,num2,result);
  return 0;
}