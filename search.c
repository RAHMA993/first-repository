#include <stdio.h>
#include <stdlib.h>
#define n 50

int main()
{
    int array[n],length,i,j,search,f;

    printf("Please enter the number of elements\t");
    scanf("%d",&length);

    printf("Please enter the elements of the array\t");
    for (i=0; i<length; i++) {
        scanf("%d",&array[i]);
    }
   printf("Please enter the elements to search\t");
   scanf("%d",&search);

    for (i=0; i<length; i++) {
       if(search==array[i]){

         f=1;
         break;

       }
     else{
        f=0;

     }
    }
   if(f==1){

   printf("%d is found in array\n", search);}

   else{
  printf("%d is not found in array\n", search);}



return 0;
}

