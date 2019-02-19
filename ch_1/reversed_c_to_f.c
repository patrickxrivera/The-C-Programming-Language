#include <stdio.h>

#define LOWER 0
#define UPPER 32
#define STEP 2

int main()
{
  float fahr, celsius;

  printf("Celsius to Fahrenheit Converter\n");

  printf("==================================\n");

  for (celsius = UPPER; celsius >= LOWER; celsius -= STEP)
  {
    fahr = celsius * (9.0 / 5.0) + 32;
    printf("%3.0f\t%6.1f\n", celsius, fahr);
  }
}