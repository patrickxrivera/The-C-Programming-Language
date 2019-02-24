#include <stdio.h>
#include <stdbool.h>

#define NEW_LINE 10
#define FILE_NAME "./linecount.txt"

int line_count(FILE *file_pointer);
void print_output(int num_lines);

int main()
{
  int num_lines;
  FILE *file_pointer;

  file_pointer = fopen(FILE_NAME, "r");

  num_lines = line_count(file_pointer);

  fclose(file_pointer);

  print_output(num_lines);

  return 0;
}
int line_count(FILE *file_pointer)
{
  int curr_char, num_lines;
  bool empty;

  empty = true;
  num_lines = 0;

  while ((curr_char = fgetc(file_pointer)) != EOF)
  {
    if (curr_char == NEW_LINE)
      num_lines += 1;

    if (empty)
      empty = false; // catch files with one line
  }

  if (num_lines == 0 && !empty)
    num_lines = 1;

  return num_lines;
}

void print_output(int num_lines)
{
  switch (num_lines)
  {
  case 0:
    printf("There are zero lines in the file.");
    break;
  case 1:
    printf("There is one line in the file.");
    break;
  default:
    printf("There are %d lines in the file.", num_lines + 1);
  }
}