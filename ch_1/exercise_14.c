#include <stdio.h>

#define ALPHABET_LEN 26
#define START 97

int main(void)
{
  /*
  input: at the day
  output
  a
  ==
  d
  =
  e
  =
  h
  =
  t
  ==
  y
  =
  */

  int c;
  int nchar[ALPHABET_LEN];

  for (int i = 0; i < ALPHABET_LEN; ++i)
    nchar[i] = 0;

  while ((c = getchar()) != 'z')
  {
    if (c != ' ')
      ++nchar[c - 'a'];
  }

  for (int i = 0; i < ALPHABET_LEN; ++i)
  {
    if (nchar[i] == 0)
      continue;

    printf("\n%c\n", i + START);

    for (int j = 0; j < nchar[i]; ++j)
      printf("=\n");
  }

  return 0;
}