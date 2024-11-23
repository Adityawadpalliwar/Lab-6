
#include <stdio.h>
#include <string.h>
void check(char *ptr,int n)
{
 int i,m=0;
 for(i=0;i<n-2;i++)
 { if(*(ptr+i)==*(ptr+i+2))
   {
		m++;
   }
}
 if(m==n-2)
 printf("yes");
 else
 printf("no");

}
int main()
{  char string[50];
	printf("enter the string1: ");
    fgets(string,50,stdin);
    string[strlen(string)-1] ='\0';
	int n = strlen(string);
	check(string,n);
	return 0;
}
