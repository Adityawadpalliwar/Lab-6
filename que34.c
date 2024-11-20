#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char string1[50];
    char string2[50];
    int i,j;
    int k=0;
    int t;

    printf("enter the string1: ");
    fgets(string1,50,stdin);
    string1[strlen(string1)-1] ='\0';
    for(i=0;i<strlen(string1);i++)
    {printf("%c",string1[i]);}
    printf("%d",strlen(string1));

    
    }