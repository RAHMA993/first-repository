#include <stdio.h>
#include <stdlib.h>

int Fibonacci (int n);


int main()
{
    int n;
    printf("Please Enter The Number\t");
    scanf("%d", &n);
   printf("The %d th Fibonacci Number is %d ", n, Fibonacci(n));
    return 0;
}

int Fibonacci (int n){

if(n==0){
    return 0;}
    else if(n==1){
        return 1;
    }

 else{
    return Fibonacci (n-1) + Fibonacci (n-2);
}
}


