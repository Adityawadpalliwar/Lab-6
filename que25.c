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
		
        if(string[i]==' ')
        continue;
        else
        {
		l[t]=string[i];
		t++;
        }
		}
			
		
        
    

 
 for(k=0;k<t;k++)
 printf("%c", l[k]);
    

    return 0;
}
