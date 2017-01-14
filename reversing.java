import java.utile.*;
 class rev
 {
 public static void main(String args[])
 {
     String orignal,reverse="";
     Scanner in=new Scanner(System.in);
     System.out.println("Enter a string to be revesed");
            orignal=in.nextLine();
      int len=orginal.length();
      for(int i=len-1;i>=0;i--)
      revese=revese+orginal.charAt(i);
      System.out.printf("the revesed string is :"+revese);
      }
      }
