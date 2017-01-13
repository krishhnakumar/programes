#include<stdio.h>
  int main()
  {
         char c;
           printf("Enter a char");
           scanf("%c",&c);
             if((c>='A' && c<='Z') || (c>='a' && c<='z'))
                printf("the char is alphabet");
             else
                printf("it is not a char");
                return 0;
                
                }
