#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char string[50];
    char string2[50];
    char l[50];
    int i,j,k,t=0;
    printf("enter the string: ");
    fgets(string,50,stdin);
    int dummy;
    string[strlen(string)-1] ='\0';

   
    int array[26]={};

    for(i=0;string[i]!='\0';i++)
    {
        if (string[i]==' ')
        continue;

        array[string[i]-'a']++;

    }

    printf("enter the string 2 : ");
    fgets(string2,50,stdin);
    string2[strlen(string2)-1] ='\0';
   
    int array2[26]={};

    for(i=0;string2[i]!='\0';i++)
    {
        if (string2[i]==' ')
        continue;

        array2[string2[i]-'a']++;

    }

  for(i=0;i<25;i++)
  {
    for(j=0;j<25-i;j++)
    {
        if(array[j]>array[j+1])
        {   dummy=array[j];
            array[j]=array[j+1];
            array[j+1]=dummy;
        }
    }
  }

   for(i=0;i<25;i++)
  {
    for(j=0;j<25-i;j++)
    {
        if(array2[j]>array2[j+1])
        {   dummy=array2[j];
            array2[j]=array2[j+1];
            array2[j+1]=dummy;
        }
    }
  }
    int m=0;
    for(i=0;i<26;i++)
    {
        if(array[i]==array2[i])
        m++;
    }

    if(m==26)
    printf("two given Strings are Isomorphic to each other");
    else
    printf("two given Strings are not Isomorphic to each other");



   return 0;
   

}
