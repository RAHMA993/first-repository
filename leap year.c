#include <stdio.h>
#include <stdlib.h>

int main()
{

    int year;
    printf("Entre The Year\t");

    scanf("%d",&year);

    if((year % 4==0 && year % 100 !=0) || (year % 400==0))

        printf("%d is A Leap Year",year);
     else

        printf("%d is not A Leap Year",year);





    return 0;
}
