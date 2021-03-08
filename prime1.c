#include<stdio.h>
#include<math.h>
int main()
{
  int num,i=0,a,rem,b,c;
  printf("\nEnter positive number in decimal form:");
  scanf("%d",&num);
  
  do
  {
    a=(num/2);
    
    num=a;
    rem=(num%2);
    c=rem;
    

    b= pow(10,i);
    rem=rem+c*b;
    i++;
  }while(num>=1);
  
  printf("\nBinary form=%d",rem-1);
}
  
  