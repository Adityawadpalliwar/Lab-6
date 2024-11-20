#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char string[50];
    int i,j,m;
    int k=0;
    int t;
    char chunk[10];

    printf("enter the string: ");
    fgets(string,50,stdin);
    string[strlen(string)-1] ='\0';

    printf("enter the chunk of code");
    scanf("%s",&chunk);
    for(i=0;i<strlen(string);i++)
    {
        if(string[i]==chunk[0])
        { m=0;
            for(j=i;j<i+strlen(chunk);j++)
            {
                if(chunk[j-i]==string[j])
                m++;
            }
            if (m==strlen(chunk))
            {
            printf("%d",i);
            exit(0);
            }
        }
        
    }
    if(m!=strlen(chunk))
    {
        printf("Character not found");
    }

}