#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, result=1, i;
    printf("Enter The Number\t ");
    scanf("%d",&x);
    for(i=1; i<=x; i++)
     result*=i;
    printf("The Factorial Of Number %d Is %d ", x, result);


    return 0;
}
