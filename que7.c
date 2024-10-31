
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int i=0;
    char string1[50];
    char string2[50];

    printf("enter the string1: ");
    gets(string1);

    printf("enter the string2: ");
    gets(string2);

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
