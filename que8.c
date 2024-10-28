#include <stdio.h>
 #include <conio.h>
 #include <string.h>
 void main()
 {
 char chk='t', str[30];
 int len, i=0;
 printf("\nEnter a string:");
 scanf("%s", &str);
 len=strlen(str);
 
 while(i<len-i-1 && chk=='t')
 {
 if(str[i] == str[len-i-1]) ;
 else chk='f';
 i++;
 }
 if(chk=='t')
 printf("\nThe string %s is a palindrome",str);
 else
 printf("\nThe string %s is not a palindrome",str);
 
 }