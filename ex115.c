#include <stdio.h>

/* print a table F-C
   for fahr = 0, 20, 300 */
int temp(int lower, int upper, int step);

int main()
{

  temp(0, 300, 20);
  return 0;
}

int temp(int lower, int upper, int step)
{
  printf("\n\nF to C Table\n-------------\n\n\n");

  for (;upper >= lower; upper -= step)
    printf("C: %3d\tF:%3d\n", (5 * (upper -32) /9), upper);
}
