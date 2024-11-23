/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char string1[50];
    
    int i,j;
    int k=0;
    int t;

    printf("enter the string1: ");
    fgets(string1,50,stdin);
    string1[strlen(string1)-1] ='\0';
    
  
    for (j=0;j<strlen(string1);j++)
    {
        printf("%c\n",string1[j]);
    }

    for(j=0;j<strlen(string1)-1;j++)
    {
        printf("%c%c\n",string1[j],string1[j+1]);
    }

   


 }
 ..*/
 #include<stdio.h>
#include<string.h>
int main(){
char a[100]={'\0'};
printf("input a string: ");
fgets(a, sizeof(a), stdin);

a[strcspn(a, "\n")] = '\0';

int l= strlen(a);
for(int i=0; i<l; i++)
printf("%c\n", a[i]);

for (int len = 2; len <= l; len++)
        for (int i = 0; i <= l - len; i++) 
        { 
            for (int j = 0; j < len; j++) 
                printf("%c", a[i + j]);
            
            printf("\n");
        }
    
    return 0;
}
    