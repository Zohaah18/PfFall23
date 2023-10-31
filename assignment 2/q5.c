/**
* programmer:Zoha Ahmed
* Desc: question 5 Assignment 2
* Date: 31 October,2023
*
*/

#include <stdio.h>
#include <math.h>

int Ramanujan(int n) {
	int count = 0;

int x, y; // counter for 'for loop;

for(x = 1; x <= cbrt(n); x++) {
	int x3 = x * x * x;
	for(y = x + 1; y <= cbrt(n); y++) {
		int y3 = y * y * y;
		int sum = x3 + y3;
		if(sum == n) {
			count++;
		}
		if(sum >= n) {
		   break;
		}
	}
} 
    return count == 2; 
}

int main () {
	int num;
	printf("Enter the integer: ");
	scanf("%d",&num);
	
	printf("Ramanujan numbers less than %d^3 are:\n", num);
	
	// priniting of ramanujan numbers
	
	int i, j;
	
	for(i = 2; i < num * num * num; i++) {
		if(Ramanujan(i)) {
			printf("%d = ", i);
			int count = 0;
    int x, y; 
	     for(x = 1; x <= cbrt(i); x++) {
	         int x3 = x * x * x;
	         for(y = x + 1; y <= cbrt(i); y++) {
	          	int y3 = y * y * y;
		        int sum = x3 + y3;
		        if(sum == i) {
		           if(count > 0) {
		           	printf(" + ");
				   }
				   printf("%d^3 + %d^3", x, y);
		     	count++;
		        }
		      if(sum >= i) {
		         break;
	  	        }
	  }
    } 
            printf("\n");
   }
  }
  
  return 0;
  
} // end main 
