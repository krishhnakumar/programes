#include<stdio.h>
int main()
{
 int num,temp,rev,su=0;
 printf("enter num:");
 scanf("%d",&num);
 temp=num;
 while(num>0)
 {
   rev=num%10;
   su=su+(rev*rev*rev);
   num/=10;
  }
  if(temp==su)
   printf("amstrong")
   else
   printf("not amstrong");
   
   return 0;
}
