/**
*Programmer: Zoha Ahmed
*Date: 25 October 2023
*Desc: question 6, Lab 7
*/
#include <stdio.h>
 int main(){
            int arr[100]; // declaration of array
             int n; // length of array
   printf("Enter the length of array: ");
   scanf("%d",&n);
    for( int i = 0; i < n; i++){
    printf("Enter the elements %d: ", i + 1);
    scanf("%d", &arr[i]);
}
   int frequency [100];
  for( int i = 0; i < n; i+1){
  frequency[i] = 1;
}
   for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
    if (arr[i] == arr[j]){
   frequency[i]++;
   }
  }
}
 for( int i = 0; i < n; i++){
 printf("The frequency of %d = %d\n", arr[i],frequency[i]);
}
}//end main  
