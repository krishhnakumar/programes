import java.utile.scanner;
     class Number
     {
     public static void main(String[] args)
     {
        int no,a=0;
        Scanner s= new Scanner(System.in);
        System.out.printf("Enter any number");
        no=s.nextInt();
        if(no<0)
        {
        no=no*-1;
        }
        else if(no==0)
        {
        no=1;
        }
        while(no>0)
        {
        no=no/10;
        a++;
        }
        System.out.printf("Number of digits in given number is:"+a);
        }
        }
        
