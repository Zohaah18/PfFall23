/**
*Programmer:Zoha Ahmed
*Date: 31 October 2023
*Desc: question 2, lab 9b
*/
#include <stdio.h>
 int product(int a, int b){
   if (b == 0){
    return 0; 
   }
  if (b > 0){
    return a + product(a, b-1);
  }
   else{
    return - product(a, -b);
   }
}
 int main(){
   int num1, num2;
   printf("Enter two integers: ");
   scanf("%d" "%d", &num1, &num2);
  int result = product(num1, num2);
 printf("product: %d\n", result);
 return 0;
}
