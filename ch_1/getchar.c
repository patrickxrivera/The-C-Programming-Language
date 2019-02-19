#include <stdio.h>

int main(void)
{
  int c;

  printf("EOF is: %d\n", EOF);

  printf("Enter something here: ");

  c = getchar();

  fputs(c == EOF ? "true" : "false", stdout);

  return 0;
}