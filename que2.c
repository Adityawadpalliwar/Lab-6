#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int i=0;
    char string1[50];
    char string2[50];

    printf("enter the string1: ");
    gets(string1);



   while(string1[i]!='\0')
   {
    string2[i]=string1[i];
    i++;
   }
    string2[i]='\0';
  printf("the copied string is: \n");
    puts(string2);

}
