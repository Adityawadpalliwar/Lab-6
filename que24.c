#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char string[50];
    char l[50];
    int i,j,k,t=0;
    
    printf("enter the string: ");
    fgets(string,50,stdin);
  
    printf("\n");
    for (i = 0; string[i]!='\0'; i++)
	 {
		int m=0;
        for (j = i + 1; string[j]!='\0'; j++)
		 {
            if (string[i] == string[j]) 
			{
               m++;
            }
		}
		if (m==0)
		{
		l[t]=string[i];
		t++;
		}
			
		
        
    }

 
 for(k=0;k<t;k++)
 printf("%c ", l[k]);
    
for(j=0;j<t;j++)
{
    int c=0;
    for(i=0;string[i]!='\0';i++ )
    {
        if(l[j]==string[i])
        c++;
    }
    printf("\nfrequency of %c is %d\n",l[j],c);
}
    return 0;
}
