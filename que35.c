// C program for the above approach
#include <stdio.h>
#include <string.h>


void Superascii(char s[])
{
	
	int b[26] = {0};
	for (int i = 0;i<strlen(s);i++)
    {
		int index = (int)s[i] - 97;
		b[index]++;
	}

	for (int i = 0; i < strlen(s); i++) 
    {
		int index = (int)s[i] - 97;
		if (b[index] != index) {
			printf("No");
			return;
		}
	}

	printf("Yes");
}


int main()
{  char string[50];
	printf("enter the string1: ");
    fgets(string,50,stdin);
    string[strlen(string)-1] ='\0';
	

	
	Superascii(string);
	return 0;
}
...