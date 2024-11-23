#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char string1[50];
    
    int i,j;
    int k=0;
    int t;

    printf("enter the string1: ");
    fgets(string1,50,stdin);
    string1[strlen(string1)-1] ='\0';
    
  
    for (j=0;j<strlen(string1);j++)
    {
        printf("%c\n",string1[j]);
    }

    for(j=0;j<strlen(string1)-1;j++)
    {
        printf("%c%c\n",string1[j],string1[j+1]);
    }

   


 }
 ..
    