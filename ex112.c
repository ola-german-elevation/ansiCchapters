#include <stdio.h>

#define OUT 0
#define IN 1


// this program prints one word in a line.
// ommit '\n', ' ', '\t'

int main()
{
  int blank_state = OUT;
  int c = 0;

  while ((c = getchar()) != EOF)
  {
    if ((c == ' ') || (c == '\t') || (c == '\n'))
    {
      if (blank_state == OUT)
      {
        blank_state = IN;
        putchar('\n');
      }
    }
    else
    {
      putchar(c);
      blank_state = OUT;
    }
  }
}
