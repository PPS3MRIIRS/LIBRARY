# include <stdio.h>
int main()
{
char ch;
printf("enter a character :");
scanf("%c",&ch);
if(ch>=65 && ch<=90)
printf("%c is the  capital letters",ch);
else
if(ch>=97 && ch<=122)
printf("%c is the capital letters",ch);
else
if(ch>=48 && ch>=57)
printf("%c is the digit numbers",ch);
else
printf("%c is the special chareacter",ch);
return 0;
}


