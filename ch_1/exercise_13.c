#include <stdio.h>

int main(void)
{
  /*
  input: hello there person
  output: 
    hello
    =====
    there
    ===
    person
    ========
  */

  int c, count;

  count = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
    {
      putchar('\n');

      for (int i = 0; i < count; ++i)
      {
        putchar('=');
      }

      putchar('\n');

      count = 0;
    }
    else
    {
      putchar(c);
      ++count;
    }
  }

  return 0;
}