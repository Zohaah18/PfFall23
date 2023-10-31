/**
*Programmer: Zoha Ahmed
*Date: 31 October 2023
*Desc: question 6, Assignment 2
*/
#include <stdio.h>
 #include <stdio.h>

int main () {

int n, t; 
int arr[100]; 

printf("Enter the size of array: ");
scanf("%d",&n);
printf("Enter the integer:");
scanf("%d",&t);

int i, j; 
for( i = 0; i < n; i++ ) {
	printf("Enter the value of %d: ", i + 1);
	scanf("%d",&arr[i]);
}

int a;
for( i = 0; i < n; i++ ) {
if( arr[i] == a ) 
continue;
for( j = 0; j < n; j++ ) {
if( arr[i] + arr[j] == t ) {
a = arr[j];
 printf("(%d,%d)", arr[i], arr[j]);
}
}
}
} // end main 
