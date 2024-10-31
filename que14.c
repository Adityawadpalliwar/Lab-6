...
//digits part not working
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char string[50];
    int i;
    printf("enter the string: ");
    fgets(string,50,stdin);
    int vow=0,consonants=0,digits=0,space=0;

 for(i=0;string[i]!=0;i++)
 {
    if (string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u')
    {
        vow++;
    }
    if(string[i]==' ')
    space++;
    
    if(string[i]>=0 && string[i]<=9)
    digits++;

    else
    consonants++;

 }

 printf("there are %d vowels, %d consonants, %d digits and %d white spaces in the given string",vow,consonants,digits,space);
}