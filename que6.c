
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char ch;
    char string[50];
    int i;
    printf("enter the string: ");
    fgets(string,50,stdin);
    string[strlen(string)-1]='\0';

    printf("enter the character: ");
    scanf("%c",&ch);

    for(i=0;string[i]!='\0';i++)
    {
        if (string[i]==ch)
        {  
          printf("%d",i+1);
          break;
          }
    }
    return 0;
}
