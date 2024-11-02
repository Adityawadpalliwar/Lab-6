#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char string[50];
    int i,j;
    char t;
    printf("enter the string: ");
    fgets(string,50,stdin);
    
for(i=0;i<strlen(string);i++)
	 {
	 for ( j=0;j<strlen(string)-i-1;j++)
	  {
	  if (string[j]>string[j+1])
	  {
	    t=string[j+1];
	    string[j+1]=string[j];
	    string[j]=t;
      }
       }
     }
 

 printf("now the string becomes: \n");

 puts(string);

}