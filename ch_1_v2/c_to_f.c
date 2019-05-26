#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 10

int main()
{
  float fahr;

  printf("Celsius to Fahrenheit\n");

  printf("======================\n");

  for (float celsius = UPPER; celsius >= LOWER; celsius -= STEP)
  {
    fahr = (celsius - 32.0) * 5.0 / 9.0;
    printf("%3.0f %12.1f\n", celsius, fahr);
  }
}