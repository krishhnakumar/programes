#include<stdio.h>
int main()
{
int bas,exp;
long res=1;
printf("Enter the a base value");
scanf("%d",bas);
printf("enter the exp value");
scanf("%d",exp);
while(exp!=0)
{
res*=bas;
--exp;
}
printf("%l",res);
return 0;
}
