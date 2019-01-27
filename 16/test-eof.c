#include <stdio.h>

/*
check the value of eof
*/

int main()
{
  int c, val;

  while (val = (c = getchar()) != EOF)
  {
    putchar(c);
    printf("val: %d\n", val);
  }
  printf("val: %d\n", val);
  printf("EOF VALUE:%d\n", c);
  printf("EOF VALUE:%d\n", EOF);

}
