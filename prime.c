#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,x=1;
    printf("Please Enter The Number\t");
    scanf("%d", &n);
     for(i=2;i<=n/2;i++){
     if(n%i==0){
       x=0;
  break;
     }


     }
 if(x==1){
   printf("The number %d is  A prime Number\t", n);
 }
 else {

    printf("The number %d is not A prime Number\t", n);

 }

    return 0;
}
