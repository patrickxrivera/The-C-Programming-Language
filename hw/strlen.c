#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100
#define LINE_FEED 10

int string_length(char string[]);
void remove_new_line(char string[]);

int main()
{
  int length;
  char string[MAX_LENGTH];

  do
  {
    printf("Please enter a string: ");

    fgets(string, MAX_LENGTH, stdin);

    length = string_length(string);

    if (length == 0)
      printf("You must enter at least one character.\n");

  } while (length == 0);

  remove_new_line(string);

  printf("The length of '%s' is: %d", string, length);

  return 0;
}

int string_length(char string[])
{
  int i, length;

  length = 0;

  for (i = 0; (i <= MAX_LENGTH && string[i] != LINE_FEED); ++i)
    length += 1;

  return length;
}

void remove_new_line(char string[])
{
  string[strcspn(string, "\n")] = 0;
}