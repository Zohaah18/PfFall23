/**
* programmer:Zoha Ahmed
* Desc: question 7 lab 8
* Date: 29 October,2023
*
*/

#include <stdio.h>
 float discountcalculator(int purchaseamount, int numvisits){
 float discount = 0.0f;
   if ( numvisits > 10 && purchaseamount > 50){
   discount = 0.15f;
}
  else if( numvisits > 5 && purchaseamount > 30){
   discount = 0.10f;
  }
 return discount;
}
 int main(){
 float purchase;
 int visits;
 float bill;

 printf("Enter your total purchase amount: ");
 scanf("%f",&purchase);
 printf("Enter the number of times you have vistied last month: ");
 scanf("%d",&visits);
 float discount = discountcalculator(purchase, visits);
  if (discount > 0.0f){
   printf("You get a discount of %2f\n", discount * 100.0f);
   bill = purchase / discount;
}
else{
   printf("You are not eligible for a discount\n");
   bill = purchase;
}
   printf("The bill is : %f\n", bill);
return 0;
} //end main