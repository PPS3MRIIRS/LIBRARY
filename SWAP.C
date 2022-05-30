  # include <stdio.h>
  int main()
  {
  int a,b,*c,*d,*t;
  a=10;
  b=20;
  printf("unswapped:%d %d",a,b);
  c=&a;
  d=&b;
  *t=*d;
  *d=*c;
  *c=*t;
  printf("swapped:%d %d",a,b);
  return 0;
  }