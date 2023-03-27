#include <stdio.h>
#include <stdlib.h>
#define n 50

int main()
{
    int array[n],length,i,j,freq[n],count;

    printf("Please enter the number of elements\t");
    scanf("%d",&length);

    printf("Please enter the elements of the array\t");
    for (i=0; i<length; i++) {
        scanf("%d",&array[i]);
        freq[i]=-1;
    }

    for (i=0; i<length; i++) {
        count=1;
        for (j=i+1; j<length; j++) {
            if (array[i] == array[j]) {
                count++;
                freq[j]=0;
            }
        }
        if (freq[i]!=0) {
            freq[i]=count;
        }
    }

    printf("The frequency of each element in the array is\n");
    for (i=0; i<length; i++) {
        if (freq[i]!=0) {
            printf("%d repeats %d times\n", array[i], freq[i]);
        }
    }
    return 0;
}
