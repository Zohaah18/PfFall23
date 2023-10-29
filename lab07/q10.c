/**
* programmer:Zoha Ahmed
* Desc: question 9 lab 7
* Date: 16 October,2023
*
*/

#include <stdio.h>
  int subArraysum(int arr[], int n, int s){
  int sum = arr[0];
  int start = 0;
  int i = 1;
 
  while(i <= n){
  while(sum > s && start < i - 1 ){
  sum-= arr[start];
  start++;
}
  if( sum == s){
   printf("The sum is found between indexes %d and %d\n", start, i - 1);
   return 1;
}
 if( i < n ){
  sum += arr[i];
  i++;
 }
}
 printf("No subarray found\n");
 return 0;
}
 int main(){
  int arr[] = {1,2,3,7,5};
  int n = sizeof(arr[0]);
  int s = 12;
 
  if (subArraysum(arr,n,s)){
  printf("Yes\n");
}
  else{
  printf("No\n");
}
  return 0;
}