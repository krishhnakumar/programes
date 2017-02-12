class prime
{
Public Static void main(Strin arg[])
{
int i,m,flag=0;
System.out.println("eneter the number ");
Scanner n=new Scanner(System.in);
i=n.nextInt();
m=n/2;
for(i=0;i<=m;i++)
{
if(n%i==0)
{
System.out.println("is not prime");
flag=1;
break;
}
}
if(flag==0)
System.out.println("number is prime");
}
}
