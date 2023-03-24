#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character;
    printf("Please Enter The character");
    scanf("%c",&character);
   switch(character){
     case'a':
     case'e':
     case'i':
     case'o':
     case'u':
     case'A':
     case'E':
     case'I':
     case'O':
     case'U':
        printf("The character is Vowel");
        break;
     default:

        printf("The character is Consonant");





   }
    return 0;
}
