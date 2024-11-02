
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char string[20][20];
    int i,j,k;
    int m =0;
    char dummy[20];
    
    printf("enter string with maximum 20 words and 19 letters limit  : ");
    
    for(i=0;i<20;i++)
    {
        scanf("%s",string[i]);
        if (string[i]=='\0')
          {
            break;
          }
    }
    

   for (i=1; i < 20; i++) 
    {
     for (j=1; j <= 20-i ; j++) 
        {
            if (strcmp (string[j-1], string[j]) > 0)
                { 
                    strcpy (dummy, string[j-1]);
                    strcpy (string[j-1], string[j]);
                    strcpy (string[j], dummy );
                }
        } 
 }
   //now printing the sorted array

   for(i=0;string[i]!='\0';i++)
   {
     printf("%s ",string[i]);

   }

}
.