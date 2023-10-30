/**
*Programmer:Zoha Ahmed
*Date:30 October 2023
*Desc:Assignment 2,q1
*/

#include<stdio.h>

int main(){
           int a; // name of the batman or the number of batmen
           int innings; // innings played by each batsman
           int i,j;
 
       printf("Enter the number of batsmen playing: ");
       scanf("%d", &a);
       printf("Enter the innings played by the batsman: ");
       scanf("%d", &innings);
     int battingperformance[100][100];
      for( i = 0; i < a; i++){
      for( j = 0; j < innings; j++){
     printf("Enter the runs scored by batsman %d in %d innings: ", i + 1, j + 1);
     scanf("%d", &battingperformance[i][j]);
    }
   }

    int totalruns = 0;
   for(i = 0; i < a; i++){
   for(j = 0; j < innings; j++){
     totalruns += battingperformance[i][j];
    }
  }
   float avg = (float) totalruns / innings;
  int highest = battingperformance[0][0];
   for(i = 0; i < a; i++){
   for(j = 0; j < innings; j++){
    if(battingperformance[i][j] > highest){
     highest = battingperformance[i][j];
   }
  }
}
   int fifty = 0;
   int century = 0;
    for(i = 0; i < a; i++){
    for(j = 0; j < innings; j++){
     if(battingperformance[i][j] >= 100){
       century++;
      }
    else if(battingperformance[i][j] >= 50){
     fifty++;
     }
    }
  }
printf("Total runs scored: %d\n", totalruns);
printf("Highest runs scored are: %d\n", highest);
printf("Average runs per innings: %f\n", avg);
printf("Number of centuries scored: %d\n", century);
printf("Number of half-centuries scored: %d\n", fifty);
}//end main