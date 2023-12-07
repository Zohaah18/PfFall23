#include <stdio.h>
#define N 4
void print_matrix(int Mat[N / 2][N / 2], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d ", Mat[i][j]);
        printf("\n");
    }
}
int max_matrix(int Mat[N][N])
{
    int max_Mat[N / 2][N / 2] = {0};
    for (int l = 0; l < N / 2; l++)
    {
        for (int m = 0; m < N / 2; m++)
        {
            int max = 0;
            for (int i = 2*l; i < 2*l+2; i++)
            {
                for (int j = 2*m; j < 2*m+2; j++)
                {
                    if (Mat[i][j] > max)
                        max = Mat[i][j];
                }
            }
            max_Mat[l][m] = max;
        }
    }
    print_matrix(max_Mat, N / 2, N / 2);
}

int main(int argc, char *argv[])
{
    char *filename = argv[1];
    FILE *fptr=fopen("q1.txt","r");
    if(fptr==NULL){
        printf("Unable to open file");
    }
    else{
    int Mat[N][N];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            fscanf(fptr,"%d\n",&Mat[i][j]);
        }
    }

    max_matrix(Mat);
    }
}