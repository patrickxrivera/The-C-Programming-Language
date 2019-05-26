#include <stdio.h>

int main()
{
  int c, num_new_lines, num_blanks, num_tabs;

  num_new_lines = 0;
  num_blanks = 0;
  num_tabs = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == '\n')
    {
      ++num_new_lines;
    }
    else if (c == ' ')
    {
      ++num_blanks;
    }
    else if (c == '\t')
    {
      ++num_tabs;
    }
  }

  printf("You typed %d new lines\n", num_new_lines);
  printf("You typed %d blanks\n", num_blanks);
  printf("You typed %d tabs", num_tabs);
}