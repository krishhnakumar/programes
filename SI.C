#include<stdio.h>
 int main() {
   int amount, rate, time, sis;
   printf("Enter Principal Amount");
   scanf("%d", &amount);
   printf("\nEnter Rate of Interest");
   scanf("%d", &rate);
   printf("\nEnter Period of Time");
   scanf("%d", &time);
   sis = (amount * rate * time) / 100;
   printf("\nSimple Interest : %d", si);
   return(0);
}
