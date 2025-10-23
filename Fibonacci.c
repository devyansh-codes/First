#include<stdio.h>
int main()
{
  int i,n;
  int t1=0,t2=1;
  int nexTerm=t1+t2;
  printf("Fibonacci Series: %d,%d",t1,t2);
  for(i=1;i<=10;i++)
{
  printf("%d",nexTerm);
  t1=t2;
  t2=nexTerm;
  nexTerm=t1+t2;
}
}
