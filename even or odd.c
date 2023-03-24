#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Please Enteer The Number");
    scanf("%d", &x);
    if (x %2==0)
        printf("The number %d is even",x);
    else
        printf("The Number %d is odd",x);
    return 0;
}
