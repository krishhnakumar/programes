import java.util.*;
class sample
{
public static void main(String[] args) {
        
        String st;
        Scanner in=new Scanner(System.in);
        st=in.nextLine();
        String str1[]=st.split(" ");
        int i;
        for(i=0;i<str1.length;i++)
        {
            if(i%2==0)
            {
                StringBuffer rev=new StringBuffer(str1[i]);
                System.out.print(rev.reverse()+" ");
            }
            else
            {
            System.out.print(str1[i]+" ");
            }
        
        }
     }
}
