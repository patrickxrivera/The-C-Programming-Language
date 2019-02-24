#include <stdio.h>

#define BASE 3

int power(int m, int n);

int main()
{
  int i;

  for (i = 0; i < 10; ++i)
    printf("%d^%d = %d\n", BASE, i, power(BASE, i));
}

int power(int base, int n)
{
  int i, result;

  result = 1;

  for (i = 0; i < n; ++i)
    result = result * base;

  return result;
}
