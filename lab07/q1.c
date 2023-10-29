/**
*Programmer:Zoha Ahmed
*Date:18 October 2023
*Desc:Lab07,q1
*/

#include<stdio.h>

intcl main(){
  int x,y,i;
  printf("Enter the first number: ");
  scanf("%d",&x);
  printf("Enter the second number: ");
  scanf("%d",&y);
  while(x>=y){
  x=x-y;
  i++;
  }
  printf("%d",i);

  return 0;
}
