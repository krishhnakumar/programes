public class JavaProgram
{
    public static void main(String args[])
    {
	
        String ch;
        int n,m;
         System.out.println("Enter the n and m value:");
          int n = n.nextint();
          int m = m.nextint();
          
        
        for(i=n; i<=m; i++)
        {
            ch = new Character((char)i).toString();
            System.out.print(i+ " -> " + ch + "\t");
        }
		
    }
}
