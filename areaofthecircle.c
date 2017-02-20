import java.util.*;
public class Area_shapes 
{
	public double circle(int ra)
	{
		return (ra*ra*3.14);
	}
	public int rectangle(int l,int b)
	{
		
		return l*b;
	}
	public double traingle(int b,int h)
	{
		return 0.5*b*h;
	}
	public static void main(String ar[])
{
	Area_shapes m=new Area_shapes();
Scanner sc =new Scanner(System.in);
int choice;
do
{ 
System.out.println("1.circle  \n2.Rectangle      \n3.Traingle\n");
 choice=sc.nextInt();
	switch(choice)
	{
	case 1:
		System.out.println("Enter the radius\n");
		int r=sc.nextInt();
		double ans=m.circle(r);
		System.out.println("Area of circle is"+ans);
		break;
	case 2:
		System.out.println("Enter the length and breadth\n");
		int l=sc.nextInt();
		int b=sc.nextInt();
	    int ans1=m.rectangle(l,b);
		System.out.println("Area of rectangle is"+ans1);
		break;
	case 3:
		System.out.println("Enter the triangle\n");
		int b1=sc.nextInt();
		int h=sc.nextInt();
		double ans2=m.traingle(b1,h);
		System.out.println("Area of triangle is"+ans2);
		break;
	
	}
}
while(choice!=4);
}
}
