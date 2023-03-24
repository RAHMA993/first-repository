#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a, b, temp;
    printf("Please Enter The Two Number");
    scanf("%f %f",&a,&b);
    temp = a;
    a = b;
    b = temp;
    printf("The Two Numbers Are %f \t %f", a, b);




    return 0;
}
