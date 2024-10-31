
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char string[50];
    int count =0;
   
    printf("enter the string: ");
    fgets(string,50,stdin);

    for(int i=0;string[i]!=0;i++)
    {
        if(string[i]=='t')
        if(string[i+1]=='h')
        if(string[i+2]=='e')
        count++;
                
    }
    
    printf("frequency of the word \"the\" is %d",count);
}