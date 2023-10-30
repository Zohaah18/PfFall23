/**
*Programmer: Zoha Ahmed
*Date: 29 October 2023
*Desc: question 6, Lab 8
*/
#include <stdio.h>
 void processArray(int arr[],int size,int *max,int *min,int *sum){
 *max = arr[0];
 *min = arr[0];
 *sum = 0;
 for (int i; i < size; i++){
 *sum += arr[i];
 if(arr[i] > *max){
  *max = arr[i];
}
 if(arr[i] < *min){
  *min = arr[i];
  }
 }
}
 int main(){
  int arr[100];
  int size;
  int i;
  printf("Enter the size of array: ");
  scanf("%d",&size);
  for(i = 0; i < size; i++){
  printf("Enter the element %d: ", i+1);
  scanf("%d",&arr[i]);
}
  int sum,max,min;
  processArray(arr, size, &sum, &max, &min);
  printf("Array sum: %d\n", sum);
  printf("Array max: %d\n", max);
  printf("Array min: %d\n", min);
return 0;
}