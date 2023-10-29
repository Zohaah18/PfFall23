/**
* programmer:Zoha Ahmed
* Desc: question 7 lab 7
* Date: 16 October,2023
*
*/

#include <stdio.h>
int main(){
           int matrix_1[2][2];
           int matrix_2[2][2];
           int resultant[2][2];
           int i;
           int j;
           int k;
         for(i = 0; i < 2; i++){
         for(j = 0; j < 2; j++){
        printf("Enter the elements in the matrix[%d][%d]: ",i,j);
        scanf("%d",&matrix_1[i][j]);
}
}
     for(i = 0; i < 2; i++){
     for(j = 0; j < 2; j++){
     printf("%d", matrix_1[i][j]);
     if (j == 1){
      printf("\n");
      }
     }
    }
     for(i = 0; i < 2; i++){
     for(j = 0; j < 2; j++){
     printf("Enter the elements in the second matrix[%d][%d]: ",i,j);
     scanf("%d",&matrix_2[i][j]);
     }
     }
      for(i = 0; i < 2; i++){
      for(j = 0; j < 2; j++){
       printf("%d", matrix_2[i][j]);
      if (j ==1){
      printf("\n");
     }
     }
     }
     for (i = 0; i < 2; i++){
     for (j = 0; j < 2; j++){
      resultant[i][j] = 0;
     for (k = 0; k < 2; k++){
     resultant[i][j] += matrix_1[i][k] * matrix_2[k][j];
     }
  }
}
 printf("The resultant matrix is:\n");
 for (i = 0; i < 2; i++){
 for (j = 0; j < 2; j++){
  printf("%d", resultant[i][j]);
}
   printf("\n");
}
 return 0;
}
           