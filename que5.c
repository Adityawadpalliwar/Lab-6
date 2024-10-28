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
    char dummy;

    int y= strlen(string);

    for(i=0;string[i]!='\0';i++)
    {
       dummy=string[i];
       string[i]=string[y-1-i];
        string[y-1-i]=dummy;
    }

 puts(string);
   


}
