/**
* programmer:Zoha Ahmed
* Desc: question 5 lab 8
* Date: 24 October,2023
*
*/

#include <stdio.h>
  int carusage(int Carnum, int daysofweek){
    if( Carnum % 2 == 0 && daysofweek % 2 == 0){
      return 1;
}
  else if (Carnum % 2 != 0 && daysofweek % 2 != 0){
      return 1;
}
 else{
     return 0;
   }
} 
 int main(){
  int car;
  int days;
    printf("Enter your car number: ");
    scanf("%d",&days);
    printf("Enter the days of the week (1 - 7): ");
    scanf("%d" ,&days);

  int shouldusecar = carusage(car , days);
 if (shouldusecar){
  printf("You can use your car today!\n");
}
 else{
      printf("You shouldnot use your car today!\n");
}
 return 0;
}//end main