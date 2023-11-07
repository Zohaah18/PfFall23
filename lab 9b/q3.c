/**
* programmer:Zoha Ahmed
* Desc: question 3, lab9b
* Date:7 November,2023
*
*/

#include <stdio.h>

int fib(int n){
  if (n <= 1){
    return n;
   }
  else {
    return fib(n-1) + fib(n-2);
    }
   }
  void fibonacci_numbers(int n){
    int i;
   for (i=0; i < n; i++){
   printf("%d", fib(i));
   }
  }
  int main(){
   int n;
 printf("Enter the number of fibonacci numbers: ");
  scanf("%d",&n);
  printf("The first %d fibonacci numbers are:\n",n);
  fibonacci_numbers(n);
 return 0;
}