#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator;
   float x, y ,result;


  printf(" Enter The Operator \n \nFor Addition enter \"+\" \n For subtraction enter \"-\" \n For multiple enter \"*\" \n For Division enter \"/\" \n", operator);

     scanf("%c",&operator);


    printf("Please Enter Two Numbers");

    scanf("%f %f",&x,&y);




    switch (operator){
    case'+':
        result=x+y;

        break;
    case'-':
     if(x>y)
      result= x-y;
     else
      result= y-x;
        break;
    case '*':
     result= x*y;
        break;
    case '/':
      if(x>y)
       result= x/y;
     else
       result= y/x;
        break;
    default:
    printf("Incorrect Operation");
    }
    printf("The Result Is %f",result);



return 0;
}
