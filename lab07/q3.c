/**
* programmer:Zoha Ahmed
* Desc: question 3 lab 7
* Date: 18 October,2023
*
*/

#include<stdio.h>
int main(){
  int arr[100];
  int sum=0;
  int n,i;
  printf("Enter the size of array: ");
  scanf("%d",&n);
  printf("Enter the elements of array: ");
  for(i=0; i<n; i++){
  scanf("%d",&arr[i]);
}
  for(i=0; i<n; i++){
  sum=sum + arr[i];
}
 printf("The sum of the elements of arr: %d",sum);
}//end main