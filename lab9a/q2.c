/**
*Programmer:Zoha Ahmed
*Date: 31 October 2023
*Desc: question 2, lab 9a
*/
#include <stdio.h>
void reverse(int *arr, int size){
  printf("Array elements in reverse order: \n");
 for(int i= 10-1; i >=0; i--){
 printf("%d", arr[i]);
}
}
 int main(){
  int i;
  int size = 10;
 int arr[10];
 for (int i=0; i < 10; i++){ 
printf("Enter the number of elements in the array:\n ");
scanf("%d", &arr[i]);
}
  reverse(arr,size);
}

