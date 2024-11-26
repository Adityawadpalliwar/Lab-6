
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int i=0;
    char string1[50];
    char string2[50];

    printf("enter the string1: ");
    fgets(string1,50,stdin);
    string1[strlen(string1)-1]='\0';
    printf("enter the string2: ");
    fgets(string2,50,stdin);
    string2[strlen(string2)-1]='\0';

   if(strlen(string1)==strlen(string2))
   { for(int j=0;j<strlen(string1);j++)
       {
         if (string1[j]==string2[j])
         i++;  
       }
       if(i==strlen(string1))
       printf("both strings are equal");
       else
        printf("both strings are not equal");

   }
   else
   printf("both strings are not equal");


}
