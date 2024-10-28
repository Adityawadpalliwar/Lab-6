...
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int i=0;
    char string1[100];
    char string2[50];

    printf("enter the string1: ");
    gets(string1);

    printf("enter the string2: ");
    gets(string2);

  int y = strstr(string1,'\0');
  int j=0;
   while(string2[j]!='\0')
   {
    string1[y]=string2[j];
    y++;
    j++;
   }

printf("now string1 becomes: ");
puts(string1);

}

