#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char string[50];
    int i;
    printf("enter the string: ");
    fgets(string,50,stdin);
    string[strlen(string)-1]='\0';
    char consonants[50];
    int j=0;

 for(i=0;string[i]!=0;i++)
 {
    if (string[i]==')'||string[i]=='(')
    {
        continue;;
    }
    else
    {
        printf("%c",string[i]);
    }
 }

}
