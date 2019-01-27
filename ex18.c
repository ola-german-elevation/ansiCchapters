#include <stdio.h>

// this program counts the blanks in a input

int main()
{
  int counter = 0;
  int c = 0 ;

  while((c = getchar()) != EOF)
    if ((c == '\n') || (c == ' ') || (c == '\t'))
      ++counter;

  printf("Blanks: %d", counter);
}
