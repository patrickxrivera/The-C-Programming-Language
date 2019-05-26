#include <stdio.h>

int main()
{
  int num_chars;

  for (num_chars = 0; getchar() != EOF; ++num_chars)
    ;

  printf("You just typed %d characaters", num_chars - 1);
}