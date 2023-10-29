/**
* programmer:Zoha Ahmed
* Desc: question 4 lab 7
* Date: 24 October,2023
*/

#include <stdio.h>
int main(){
           int rows,col;
           printf("Enter the number of rows: ");
           scanf("%d", &rows);
           printf("Enter the number of columns: ");
           scanf("%d", &col);
         int matrix[100][100];
   for(int i; i < rows; i++){
   for(int j; j < col; j++){
   printf("Enter the elements of the matrix [%d][%d]: ",i,j);
   scanf("%d", &matrix[i][j]);
}
}
         int isSymmetric = 1;
        for(int i; i < rows; i++){
        for(int j; j < col; j++){  
         if(matrix[i][j] != matrix[j][i]){
         isSymmetric = 0;
         break;
}
}
} 
 if (isSymmetric){
                  printf("Array is symmetric:\n");
                for (int i = 0; i < rows; i++){
                for (int j = 0; j < col; j++){
                printf("%d", matrix[i][j]);
}
      printf("\n");
}
} else {
        printf("Array is not symmetric:\n");
        for (int i = 0; i < rows; i++){
        for (int j = 0; j < col; j++){
        printf("%d",matrix[i][j]);
}
        printf("\n");
}
   return 0;
}
}