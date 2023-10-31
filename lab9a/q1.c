/**
*Programmer:Zoha Ahmed
*Date: 31 October 2023
*Desc: question 1, lab 9a
*/
#include <stdio.h>
int swap(int a, int b){
 int tmp = *a;
// the previous code was not working because the pointers were not used. a was stored as b and then b was being 
stored as a again but the swapping was not done as it didnt store the r value.After using pointers the r valuse of
b will be stored in the location of a. And the value of pointer a will be first stored in temp and then the value of
temp will be stored in pointer a.  
 *a = *b;
 *b = tmp;
}
 int main(){
 int j = 2, k =5;
 printf("j=%d, k=%d\n",j,k );
 swap(j,k);
 printf("j=%d, k=%d\n",j,k );
 return 0;
}