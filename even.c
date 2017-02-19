#include<stdio.h>
#include<conio.h>
int main()
{
	int lo=0;
	int hig=0;
	int c=0;
	printf("\nEnter lower limit");
	scanf("%d",&lo);
	printf("\nEnter upper limit");
	scanf("%d",&hig);
	for(int i=lo;i<=hig;i++)
	{
		if((i%2)==0)
		printf("\t%d",i);
	}
return 0;
}
