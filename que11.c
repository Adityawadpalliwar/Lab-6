
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char string[50];
   
    printf("enter the string: ");
    fgets(string,50,stdin);
    if(string[0]>='a' && string[0]<='z')
    string[0]=string[0]-32;
    for(int i=0;string[i]!=0;i++)
    {
        if(string[i]==' ')
        { if(string[i+1]>='a'&& string[i+1]<='z')
            string[i+1]=string[i+1]-32;
        }
    }

    printf("now the string becomes: ");
    puts(string);
}
