#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char string[50];
    char string2[50];
   
    int i,j;
    printf("enter the string: ");
    fgets(string,50,stdin);
    string[strlen(string)-1] ='\0';
 
    int array[26]={0};
    for(i=0;string[i]!='\0';i++)
    {
        if (string[i]==' ')
        continue;

        array[string[i]-'a']++;

    }

    printf("enter the string 2 : ");
    fgets(string2,50,stdin);
    string2[strlen(string2)-1] ='\0';

   
    int array2[26]={0};
    for(i=0;string2[i]!='\0';i++)
    {
        if (string2[i]==' ')
        continue;

        array2[string2[i]-'a']++;
    }
 
    int m=0;
    for(i=0;i<26;i++)
    {
        if(array[i]==array2[i])
        m++;
    }

    if(m==26)
    printf("Anagram");
    else
    printf("Not Anagram");



   return 0;
   

}