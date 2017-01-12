#include<stdio.h>
int main()
{
     char c;
     int islow,isupper;
     printf("Enter an alphabet");
     scanf("%d",&c);
     islow=(c=='a'||c=='e'||c=='i'||c=='o'c=='u');
     isupper=(c=='A'||c=='E'||c=='I'||c=='O'c=='U');
     if(islow|| isupper)
          printf("%c is a vowle.",c);
          else
          printf("%c is not a vowle",c);
          }
     
