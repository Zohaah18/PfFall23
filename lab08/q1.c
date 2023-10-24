/**
*Pogrammer:Zoha Ahmed
*Date:24 October 2023
*Desc:q1 lab8
*/

#include<stdio.h>
        void swapinteger(int*a,int*b){
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
       }
       int main(){
       int num1,num2;
        printf("Enter the values of num1,num2: ");
        scanf("%d", &num1);
        scanf("%d", &num2);
   
      printf("Before swapping:num1=%d,num2=%d\n", num1, num2);
       swapinteger(&num1, &num2);
      printf("After swapping:num1=%d,num2=%d\n", num1, num2);
         
       return 0;
}
        
       
        