#include <stdio.h>

// replace all blanks by only one blanks

int main(){
  int c = 0;
  int blankCounter = 0;

  while ((c = getchar()) != EOF)
  {
    if ((c == '\n') || (c == ' ') || (c == '\t'))
    {
      if (blankCounter == 0)
      {
        putchar(' ');
        blankCounter = 1;
      }
    }
    else
      {
        putchar(c);
        blankCounter = 0;
      }
  }

}
