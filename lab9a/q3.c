/**
*Programmer:Zoha Ahmed
*Date: 31 October 2023
*Desc: question 3, lab 9a
*/
#include <stdio.h>
 int main(){
  int n;
  int i;
  int arr[100];
  long long int longintarr[100];
  char CharArr[100];
  int size;
  int *ptr; //reading addresses
  
  printf("Enter the size of the array: \n",n);
  scanf("%d", &n);
  printf("The integer array: \n");
 for (int i=0; i < n; i++){ 
printf("Enter the number of elements in the array:\n ",i + 1);
scanf("%d", &arr[i]);
}
  printf("The character array: \n");
 for (int i=0; i < n; i++){ 
printf("Enter the number of elements in the array:\n ", i + 1);
scanf(" %c", &CharArr[i]);
}
  printf("The long int array: \n");
for (int i=0; i < n; i++){ 
printf("Enter the number of elements in the array:\n ", i + 1);
scanf("%lld", &longintarr[i]);
}
  int *ptr = arr[n];
  for(int ptr=0; ptr < n; ptr++){ 
  printf("%d",*ptr);
  }
  int *ptr = CharArr[n];
  for(int ptr=0; ptr < n; ptr++){ 
  printf("%d",*ptr);
  }
int *ptr = longintarr[n];
  for(int ptr=0; ptr < n; ptr++){ 
  printf("%d",*ptr);
  }

}