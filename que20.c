
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char string[50];
    char sorted[50];
    char word[30][10];
    int i,j;
    int m =0;
    char dummy[10];
    int k=0;
    int count=1;

    printf("enter the string: ");
    fgets(string,50,stdin);
    string[strlen(string)-1] ='\0';


 for(i=0;string[i]!=0;i++)
 {
    if(string[i]==' ')
      count++;

 }

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

//now sorting the words
for(i=0;i<count-1;i++)
{
   for(j=0;j<count-i-1;j++)
   {
      if(strcmp(word[j],word[j+1])>0)
      {
         strcpy(dummy,word[j]);
         strcpy(word[j],word[j+1]);
         strcpy(word[j+1],dummy);
      }
   }
}

printf("\nnow printing the words :\n");
for(i=0;i<count;i++)
{
  
  printf("%s\n",word[i]);
}


}


