#include <stdio.h>
#include <stdbool.h>

int main()
{
  int last_char_blank, curr_char;

  last_char_blank = false;

  while ((curr_char = getchar()) != EOF)
  {
    if (!last_char_blank || curr_char != ' ')
    {
      putchar(curr_char);
    }

    if (curr_char == ' ')
    {
      last_char_blank = true;
    }
    else
    {
      last_char_blank = false;
    }
  }
}