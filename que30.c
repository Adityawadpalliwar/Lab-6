#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char string[50];
    int i,j;
    int k=0;
    int t;

    printf("enter the string: ");
    fgets(string,50,stdin);
    string[strlen(string)-1] ='\0';

    if (string[0]==' ')
    {
        printf("\n-1");
        
    }
    else
    {  int count=1;
        for(i=0;string[i]!='\0';i++)
        {
          if(string[i]==' ')
           count++;
        }
         char word[count][10];
        printf("%d word",count);

         for (i=0;i<count;i++)
        {
          for(int j=0;string[k]!=' ';j++)
            {
               word[i][j]=string[k];
               k++;
               if(string[k]==' ')
                {
                 word[i][j+1]='\0';
                 break;
                }
                
            }
          k++;
        }
       
 
        printf("\n%d is the length of last word of the given string",strlen(word[count-1]));
    }


    return 0;
}
....