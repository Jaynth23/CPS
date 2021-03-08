#include<stdio.h>
#include<math.h>
int main()
{
  int num,i=0,a,rem,b;
  printf("\nEnter positive number in decimal form:");
  scanf("%d",&num);
 a=(num/2);
 printf("\na=%d",a);
 rem=(num%2);
 printf("\nrem=%d",rem);
 b=pow(i,10);
printf("\nb=%d",b);
  do
  {
    a=(num/2);
    num=a;
    rem=(num%2);

    
    i++;
  }while(a<=1);
  
  printf("\nBinary form=%d",b);
}
  
  