/**
* programmer:Zoha Ahmed
* Desc: question 7 Assignment 2
* Date: 31 October,2023
*
*/

#include <stdio.h>

int main() 
{
    int s; 
    printf("Enter the number of shirts: ");
    scanf("%d", &s);

    
    int shirt[s][2]; 

    int i, j; 
    printf("Enter age and price for each shirt:\n");
    for (i = 0; i < s; i++) {
        printf("Shirt %d Age: ", i + 1);
        scanf("%d", &shirt[i][0]); 

        printf("Shirt %d Price: ", i + 1);
        scanf("%d", &shirt[i][1]);
    }
    int tempage, tempprice;
    for (i = 0; i < s - 1; i++) {
        for (j = 0; j < s - i - 1; j++) 
        {
            if (shirt[j][0] > shirt[j + 1][0]) 
            {
                tempage = shirt[j][0];
                shirt[j][0] = shirt[j + 1][0];
                shirt[j + 1][0] = tempage;

                tempprice = shirt[j][1];
                shirt[j][1] = shirt[j + 1][1];
                shirt[j + 1][1] = tempprice;
            }
            
            else if (shirt[j][0] == shirt[j + 1][0] && shirt[j][1] < shirt[j + 1][1]) 
            {
                tempprice = shirt[j][1];
                shirt[j][1] = shirt[j + 1][1];
                shirt[j + 1][1] = tempprice;
            }
        }
    }

   
    printf("Sorted Shirt Details based on Age and Price:\n");
    printf("Age\tPrice\n");
    for (i = 0; i < s; i++) {
        printf("%d\t%d\n", shirt[i][0], shirt[i][1]);
    }

    return 0;
} // end main