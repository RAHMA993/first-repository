#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num, result;

    printf("Please Enter The Number");
    scanf("%d",&num);
     printf("Multiplication Table Is");
    for(i=0;i<=10;i++)

    printf("\n %d * %d =%d",num, i, num*i);
    return 0;
}
