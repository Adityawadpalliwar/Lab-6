#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char string[50];
    int i,j;
    int k=0;
    int t;

    printf("enter the string: ");
    fgets(string,50,stdin);
    string[strlen(string)-1] ='\0';

    for(i=0;i<strlen(string);i++)
    {
        if (string[i]>='0'&&string[i]<='9')
        { printf("invalid string");
        break;}
        else
        k++;

    }
    if(k==strlen(string))
    {
        for(i=0;i<strlen(string);i++)
        {
            printf("%c",string[strlen(string)-1-i]);
        }
    }
 
   

}