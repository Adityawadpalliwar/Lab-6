#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char string[50];
    char l[50];
    int i,j,k,t=0;
    printf("enter the string: ");
    fgets(string,50,stdin);

   
    int array[26]={};

    for(i=0;string[i]!='\0';i++)
    {
        if (string[i]==' ')
        continue;

        array[string[i]-'a']++;

    }

    for(i=0;i<26;i++)
    {
        if(array[i]==0)
        {
            printf("string is not pangram");
            break;
        }
        else
        t++;
    }

    if(t==26)
    printf("string is a pangram");


   return 0;
   

}