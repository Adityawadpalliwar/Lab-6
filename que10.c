
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char ch;
    char string[50];
    int i;
    printf("enter the string: ");
    fgets(string,50,stdin);


    printf("enter the character: ");
    scanf("%c",&ch);

    printf("where do you want to insert it \? ");
    scanf("%d",&i);

    for(int j=strlen(string);j>=i-1;j--)
    {
        string[j+1]=string[j];
    }

    string[i-1]=ch;

    puts(string);

}