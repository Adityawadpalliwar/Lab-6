#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char string[50];
    int i;
    printf("enter the string: ");
    fgets(string,50,stdin);
    int space=1;
    int k =0;

 for(i=0;string[i]!='\0';i++)
 {
    if(string[i]==' ')
    space++;
 }
   
   char word[space][10];

 printf("there are %d words in the given string",space);


  for (i=0;i<space;i++)
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

   int freq[space];

   for (i=0;i<space;i++)
   {
      freq[i]=strlen(word[i]);
   }
  
  int largest=0;
  for(i=0;i<space;i++)
  {
   if (strlen(word[i])>strlen(word[largest]))
     largest=i;
  }

  int smallest=0;
  for(int j=0;j<space;j++)
  {
   if (strlen(word[j])<strlen(word[smallest]))
     smallest=j;
  }



printf("\nnow the largest word in the given string is %s",word[largest]);
printf("\nnow the smallest word in the given string is %s",word[smallest]);


return 0;
}
