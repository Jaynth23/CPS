#include<stdio.h>

int main()
{
  int n;
  printf("\nEnter positive number:");
  scanf("%d",&n);

  if( n%2==0 || n%3==0 || n%5==0 || n%7==0 || n%11==0)
  {
    if(n==2 || n==3 || n==5 || n==7 || n==11)
    {
      printf("\nprime number!:");
      return 0;
    }
    printf("\nnot a prime number:");
    return 0;
  }
  printf("\nprime number!:");
}