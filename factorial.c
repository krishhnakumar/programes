#include<stdio.h>
int main()
{
 int i,nums,fact=1;
 printf("enter num:");
 scanf("%d",&nums);
 for(i=1;i<=nums;i++)
 {
  fact=fact*i;
 }
 printf("%d",fact);
 return 0;
}
