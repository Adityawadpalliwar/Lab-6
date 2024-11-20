#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char string1[50];
    char string2[50];
    char string3[50];
    int i,j,t;
    int k=0;
    

    printf("enter the string1: ");
    fgets(string1,50,stdin);
    string1[strlen(string1)-1] ='\0';

    printf("enter the string2: ");
    fgets(string2,50,stdin);
    string2[strlen(string2)-1] ='\0';

    for(i=0;i<strlen(string1);i++)
    {   t=0;
        for(j=0;j<strlen(string2);j++)
        {
            if(string1[i]==string2[j])
            t++;
        }
        if(t==0)
        {
            string3[k]=string1[i];
            k++;
        }

    }
    for(i=0;i<k;i++)
    {
        printf("%c",string3[i]);
    }
    return 0;
}