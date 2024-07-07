// Evaluate a polynomial

#include <stdio.h>

int main(void)
{
  float x, y;
  printf("Enter x: ");
  scanf("%f", &x);

  y = 3 * (x*x*x*x*x) + 2 * (x*x*x*x) - 5 * (x*x*x) - (x*x) + 7*x - 6;
  printf("%.3f\n", y);
}