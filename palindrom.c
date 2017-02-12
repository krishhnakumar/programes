#include<stdio.h>
int main()
{
int n,rev=0,tem;
printf("enter the number");
scanf("%d",&n);
temp=n;
while(temp!=0)
{
rev=rev*10;
rev=rev+tem % 10;
tem=tem/10;
}
if(n==rev)
printf("it is palindrom");
else
printf("it is not a palindrom");
return 0;

}
