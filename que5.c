
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

    int y= strlen(string);

    for(i=0;i<y/2;i++)
    {
       ch=string[i];
       string[i]=string[y-1-i];
        string[y-1-i]=ch;
    }
 printf("now the string becomes\n");
 puts(string);
   


}
