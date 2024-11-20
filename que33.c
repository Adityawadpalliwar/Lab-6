#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char string1[50];
    char string2[50];
    int i,j;
    int k=0;
    int t;

    printf("enter the string1: ");
    fgets(string1,50,stdin);
    string1[strlen(string1)-1] ='\0';

    printf("enter the string2: ");
    fgets(string2,50,stdin);
    string2[strlen(string2)-1] ='\0';

    int alpha1[26]={0},alpha2[26]={0};
    
    for(i=0;i<string1[i]!='\0';i++)
    {
        alpha1[string1[i]-'a']++;
    }

    for(i=0;i<string2[i]!='\0';i++)
    {
        alpha2[string2[i]-'a']++;
    }

    for(i=0;i<26;i++)
    {
        if(alpha1[i]>=alpha2[i])
        k++;
    }

    if(k==26)
    printf("yes");
    else
    printf("no");



}