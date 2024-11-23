#include <stdio.h>
#include<string.h>

int main() {
    int  i, j,t=1,k=0;
 
    char a[50];
	  char l[50];
   

    printf("enter the string: ");
    fgets(a,50,stdin);
    a[strlen(a)-1]='\0';
    l[0]=a[0];
    
    for (i = 1;a[i]!='\0'; i++)
	 {
		int m=0;
    for (j=0;l[j]!='\0';j++)
		 {
        if (a[i]==l[j]) 
			  {
          m++;
        }
		  }
		if (m==0)
		  {
		    l[t]=a[i];
		    t++;
		  }
			
		
        
    }

 
 for(k=0;k<t;k++)
 printf("%c", l[k]);
    

    return 0;
}
