import java.util.*;
class Sample
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n,n1,i,j,count=0,fla;
        n=sc.nextInt();
        n1=sc.nextInt();
        for(i=n;i<=n1;i++)
        {
             fla=0;
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    fla=1;
                }
            }
            if(fla==0)
                count++;
        }
        
        System.out.println(count);
    }
}
