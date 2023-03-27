#include <stdio.h>
#include <stdlib.h>
#define n 50

int main()
{
    int array[n],length,i,j,temp;
    char order;

    printf("Please enter the number of elements\t");
    scanf("%d",&length);

    printf("Please enter the elements of the array\t");
    for (i=0; i<length; i++) {
        scanf("%d",&array[i]);
    }
    printf("Please enter the order you want\"A\" for ascending and \"D\" for descending\t");
    scanf(" %c",&order);
     for (i=0; i<length-1; i++) {
        for (j=i+1; j<length; j++) {
   switch(order){
    case'D':
        if(array[i]>array[j]){

                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
        }

     break;

     case'A':
        if(array[i]<array[j]){

                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
        }
     break;
   }
   }
   }
    switch(order){
 case 'A':
     printf("The ascending Order of array is\t");
     for (i=0; i<length; i++) {
            printf("%d \t", array[i]);}
            break;
  case 'D':
     printf("The descending Order of array is\t");
     for (i=0; i<length; i++) {
            printf("%d \t", array[i]);}
            break;
    }
    return 0;
}
