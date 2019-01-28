#include <stdio.h>

// replace all blanks by only one blanks

int main(){
  int c = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == '\t')
    {
      putchar('\\');
      putchar('t');
    }

    else if (c == '\b')
    {
      putchar('\\');
      putchar('b');
    }

    else if (c == '\\')
    {
      putchar('\\');
      putchar('\\');
    }

    else
      {
        putchar(c);
      }
  }

}
