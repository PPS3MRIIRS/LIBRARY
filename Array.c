# include <stdio.h> 
int main()
{
  int (*b)[5],a[5];  

int *func(int (*b)[5],int x);
int * func(int (*b)[5],int x);

static int a[5]={1,2,3,4,5};
b=&a;
for (int i=0;i<5;i++)
  (*b)[i]*=x;

return a;
}

  int main()
  {
      int (*b)[5];
      int x;
      printf("enter number to be multiplied :");
      scanf("%d",&x);
      int *a=func(b,x);
      for(x=0;x<5;x++)
      printf("%d",a[x]);
      return 0;
  }
  
