# include <stdio.h>
int main()
{
int r,rev,no;
rev=0;
printf("enter a number :");
scanf("%d",&no);
while(no>0)
{
r=no%10;
rev=rev*10+r;
no=no/10;
}
printf("reverse number is :%d",rev);
return 0;
}