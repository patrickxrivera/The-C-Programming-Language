#include <stdio.h>

int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 32;
  step = 2;

  celsius = lower;

  printf("Celsius to Fahrenheit Converter\n");

  printf("==================================\n");

  while (celsius <= upper)
  {
    fahr = celsius * (9.0 / 5.0) + 32;
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius += step;
  }
}