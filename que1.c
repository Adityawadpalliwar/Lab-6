#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int i=0;
    char string[50];
    printf("enter the string: ");
    gets(string);
    while(string[i]!='\0')
    {
        i++;
    }

    printf("\nthe length of a given string is %d ",i);
   
}