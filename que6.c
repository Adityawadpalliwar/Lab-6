..
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char ch;
    char string[50];
    int i;
    printf("enter the string: ");
    fgets(string,50,stdin);


    printf("enter the character: ");
    printf("%s",ch);

    for(i=0;string[i]!='\0';i++)
    {
        if (string[i]==ch)
        {
          printf("%d",i+1);
          break;
          }
    }

   //if(i ==strlen(string))
   //printf("character does not exist in string");


}
