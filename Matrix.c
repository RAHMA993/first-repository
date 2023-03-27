#include <stdio.h>
#include <stdlib.h>
#define n 50
int main()
{

    int matrix[n][n],size,i,j,sum=0;

    printf("Please enter the order of matrix \t");
    scanf("%d", &size);
    printf("Please enter the elements of the matrix\n");
    for (i=0; i<size; i++) {
     for (j=0; j<size; j++){
        scanf("%d",&matrix[i][j]);
    }
    }
    for (i=0; i<size; i++) {
           sum+=matrix[i][i] ;
    }

     printf("Sum of the main diagonal elements of the matrix =\t %d", sum);

    return 0;
}
