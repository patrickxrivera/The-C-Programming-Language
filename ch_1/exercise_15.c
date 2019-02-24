#include <stdio.h>

#define END 32
#define STEP 1

int celsius_to_f(int celsius)
{
  return (celsius * 9 / 5) + 32;
}

int main()
{
  int i;

  for (i = 0; i <= END; ++i)
    printf("%d: %d\n", i, celsius_to_f(i));

  return 0;
}
