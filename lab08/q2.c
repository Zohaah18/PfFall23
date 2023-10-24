/**
*Programmer:Zoha Ahmed
*Date:24 October 2023
*Desc:question 2,lab 6
*/
#include<stdio.h>
  int addition(int a,int b){
  int sum = 0;
  sum = a + b;
  return sum;
}

  int subtraction(int a,int b){
  int sub = 0;
  sub = a - b;
  return sub;
}
  int multiplication(int a,int b){
  int mul = 0;
  mul = a * b;
  return mul;
}
 int division(int a,int b){
 int div = 0;
 div = a / b;
 return div;
}
int main(){
           int num1;
           int num2;
           int op;
           printf("Enter first number: ");
           scanf("%d",&num1);
           printf("Enter second number: ");
           scanf("%d",&num2);
           printf("Enter the operator: ");
           scanf(" %c",&op);
 
 switch(op){
 case '+':
        printf("Addition: %d",addition(num1,num2));
        break;
 case'-':
       printf("Subtraction: %d",subtraction(num1,num2));
       break;
 case '*':
       printf("Multiplication: %d",multiplication(num1,num2));
       break;
 case '/':
       printf("Division: %d",division(num1,num2));
}
return 0;
}



