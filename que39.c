#include <stdio.h>
#include<string.h>

int main() {
    int  i, j,k=0,m=0;
 
    char a[50];
	char l[50];
   int fre[26]={0};

    printf("enter the string: ");
    fgets(a,50,stdin);
    a[strlen(a)-1]='\0';
    
    
    for (i = 0;a[i]!='\0'; i++)
	{
        fre[a[i]-'a']++;
    }


    for(i=0;i<26;i++)
    {
        if(fre[i]==0||fre[i]==i+1)
        k++;
    }


    if(k==26)
    printf("yes");
    else
    printf("no");
    return 0;
}
