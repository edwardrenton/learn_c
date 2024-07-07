#include <stdio.h>

int main(void)
{
  int amount, bills20, bills10, bills5, bills1;
  printf("Enter a dollar amount: ");
  scanf("%d", &amount);

  bills20 = amount / 20;
  bills10 = (amount - bills20*20) / 10;
  bills5 = (amount - bills20*20 - bills10*10) / 5;
  bills1 = amount - bills20*20 - bills10*10 -bills5*5;
  
  printf("$20 bills: %d\n", bills20);
  printf("$10 bills: %d\n", bills10);
  printf("$5 bills: %d\n", bills5);
  printf("$1 bills: %d\n", bills1);
}