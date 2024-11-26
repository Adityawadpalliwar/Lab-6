
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int i=0;
    char string1[100];
    char string2[50];

    printf("enter the string1: ");
    fgets(string1,50,stdin);
    string1[strlen(string1)-1]='\0';
    printf("enter the string2: ");
    fgets(string2,50,stdin);
    string1[strlen(string1)-1]='\0';

int y = strlen(string1);
  
  for(int i=0;string2[i]!='\0';i++)
  {
    string1[y+i]=string2[i];
  }

  string1[y + strlen(string2)] = '\0';
printf("now string1 becomes: ");
puts(string1);

}

