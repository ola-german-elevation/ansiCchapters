#include <stdio.h>
#define MAX_WORDS 30
/* a program to print histogram of the words length
   max length of a single word is MAX_LENGHT
   todo: ommit blank spaces. */

int main()
{

  int c;

  while ((c = getchar()) != EOF)
  {
    if ((c == ' ') || (c == '\n'))
    {
      putchar('\n');
    }

    else
    {
      putchar('=');
    }
  }
}
