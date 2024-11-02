#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char string[50];
    int i,j;
    int m =0;
    
    printf("enter the string: ");
    fgets(string,50,stdin);

   for (i =0; string[i]!='\0';i++)
   {
     if(string[i]=='(')
     {   m++;
        for(j=1+i;string[j]!='\0';j++)
         if (string[j]==')')
         {
            m++;
         }
     }
      if(string[i]=='{')
     {   m++;
        for(j=1+i;string[j]!='\0';j++)
         if (string[j]=='}')
         {
            m++;
         }
     }
      if(string[i]=='<')
     {   m++;
        for(j=1+i;string[j]!='\0';j++)
         if (string[j]=='>')
         {
            m++;
         }
     }
      if(string[i]=='[')
     {   m++;
        for(j=1+i;string[j]!='\0';j++)
         if (string[j]==']')
         {
            m++;
         }
     }

   }
    if (m%2==0)
    {
        printf("string is valid");
    }
    else
    { 
        printf("string is not valid");
    }
    
}
