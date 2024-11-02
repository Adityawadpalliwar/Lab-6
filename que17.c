#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char string[50];
    int i;
    printf("enter the string: ");
    fgets(string,50,stdin);
    int word=1;

 for(i=0;string[i]!=0;i++)
 {
    if(string[i]==' ')
    word++;
 }

 printf("there are %d words in the given string",word);

}