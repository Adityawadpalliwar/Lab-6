#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int i=0;
    char string[50];
    printf("enter the string: ");
    fgets(string,50,stdin);
    string[strlen(string)-1]='\0';
    
    for(i=0;string[i]!='\0';i++)
    {
        if (string[i]>='A'&&string[i]<='Z')
        string[i] = string[i] +32;
    }

    puts(string);

}