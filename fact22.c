#include<stdio.h>
int main()
{
int i,n,a,b,temp;
printf("Enther the n value:");
scanf("%d",&n);
a=0;
b=1;
printf("00");
for(i=1;i<=n;i++)
{
temp=a+b;
printf("%d",a);
a=b;
b=temp;
}
return 0;

}
