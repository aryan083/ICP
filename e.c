#include <stdio.h>
#include <math.h>
#include <malloc.h>
#include <stdlib.h>

double average(int row,int column,int mat[row][column])
{

    int a;
    int b;
    double sum=0.0;
    int t = 1000;
    
    for(a=0;a<row;a++)
    {
        for(b=0;b<column;b++)
        {
            sum+=mat[a][b];
        }
    }
    return(sum/t);

}

int main()

{

    int i;
    int j;
    int r=50;
    int col=20;
    FILE *data.txt;
    
    int* mat=malloc(r*sizeof(int*));
 
    for(i=0;i<r;++i)
    {
      mat[i]=malloc(r*sizeof(int));
    }

    file=fopen("data.txt", "r");/*Text file consisting of raw data in 50 rows and 20 columns*/

    for(i = 0; i < 1000; i++)
    {
        for(j = 0; j <col; j++)
        {
            if (!fscanf(file, "%d", &mat[i][j]))
            break;
            printf("%d\t",mat[i][j]);
 
            if(j==col-1)
            {
                printf("\n\n");
            }
            
            printf("Average of elephant seal is %.2f\n\n",average(r,col,mat));
        }
    }

    fclose(file);
    return 0;

}
