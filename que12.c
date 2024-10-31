..
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char string[50];
    int occr[50];
    
    printf("enter the string: ");
    fgets(string,50,stdin);

  for(int i=0;string[i]!='\0';i++)
  {  int m=0;
    for(int j=0;string[j]!='\0';j++)
    {
        if (string[i]==string[j])
        m++;
    }
    occr[i]=m;

  }
 int maxindex=0;
 for (int i = 1; i < 50; i++) {
        if (occr[i] > occr[maxindex]) {
            maxindex = i; 
        }
    }
int minindex=0;
 for (int i = 1; i < 50; i++) {
        if (occr[i] < occr[maxindex]) {
            minindex = i; 
        }
    }




 printf("\ncharacter with highest frequecy is %c\n",string[maxindex]);
 printf("\ncharacter with lowest frequecy is %c",string[minindex]);
}