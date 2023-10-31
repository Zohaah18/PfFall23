/**
*Programmer:Zoha Ahmed
*Date:31 October 2023
*Desc:quetion 1, lab9b
*/
#include <stdio.h>
 int factorial(int n){
  if( n == 0){
  return 1;
}
  else{
   return n * factorial(n-1);
  }
} 
 int main(){
   int n;
  printf("Enter an integer: ");
  scanf("%d",&n);
  if(n < 0) {
  printf("Factorial is not defined for negative numbers.\n");
}
 else{ 
     int result = factorial(n);
     printf("Factorial of %d is %d\n",n,result);
  }
   return 0;
}