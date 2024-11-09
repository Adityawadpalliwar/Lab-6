#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char string[50];
    int i;
    printf("enter the string: ");
    fgets(string,50,stdin);
  
    printf("the first capital letter in the string is ");
    for(i=0;i<strlen(string);i++)
    {
        if (string[i]>='A'&&string[i]<='Z')
        {
            printf("%c",string[i]);
            break;
        }
    }

}