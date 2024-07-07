/* Compute the volume of a sphere. */

#include <stdio.h>

#define pi 3.1415

int main(void)
{
  float radius, volume;

  printf("Enter radius: ");
  scanf("%f", &radius);

  volume = 4.0f/3.0f * pi * (radius * radius * radius); // C doesn't do exponentiation
  printf("Radius: %.3f\n", radius);
  printf("Volume: %.3f\n", volume);
  return 0;
}