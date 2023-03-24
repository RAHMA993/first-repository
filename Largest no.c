#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1 ,num2 ,num3;
    printf("Please Enter Three Numbers\n");
    scanf("%f %f %f", &num1, &num2, &num3);
    if(num1>num2 && num1>num3)
     printf("The Largest Number Is %f",num1);
    else if(num2>num1 && num2>num3)
        printf("The Largest Number Is %f",num2);
    else
         printf("The Largest Number Is %f",num3);





    return 0;
}
