#include <stdio.h>
#include <stdlib.h>
#define n 50
int main()
{
   int array[n],i, length;
    printf("Please enter number of elements:\t");
    scanf("%d",&length);
     printf("Please Enter Elements Of Array \t");

    for (i=0; i<length; i++){
            scanf("%d",&array[i]);}


    printf("The Elements Of Your Array Is:\t");
    for (i=0; i<length; i++){
    printf("%d ", array[i]);}





    return 0;
}
