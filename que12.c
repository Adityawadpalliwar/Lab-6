
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char string[50];
    int occr[50];
    
    printf("enter the string: ");
    fgets(string,50,stdin);

 int fr[26]={0};
 for(int i=0;i<strlen(string);i++)
 {
    fr[string[i]-'a']++;
 }
int maxindex=0;
int minindex=0;
 for (int i = 0; i < strlen(string); i++) {
        if (fr[i] > fr[maxindex]) {
            maxindex = i; 
        }
    
 
        if (fr[i] < fr[minindex]) {
            minindex = i; 
        }
    }




 printf("\ncharacter with highest frequecy is %c\n",string[maxindex]);
 printf("\ncharacter with lowest frequecy is %c",string[minindex]);
}