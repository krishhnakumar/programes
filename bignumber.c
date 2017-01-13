#include<stdio.h>
int main()
{
    int a,b,c;
        printf("Enter the 3 numbers");
        scanf("%d %d %d",&a &b &c);
         if(a>=b && a>=c)
             printf("a is biger");
         else if(b>=a && b>=c)
              printf("b is biger");
           else
              printf("c is biger");
              return 0;
              }
