#include <stdio.h>

/* print a table F-C
   for fahr = 0, 20, 300 */

int main()
{
  int fahr, celsius;
  int lower, upper, step;

  lower = -50;
  upper = 150;
  step = 25;

  celsius = lower;
  printf("C to F Table\n");
  printf("-------------\n\n\n");
  while(celsius <= upper){
    fahr = (celsius * 9 / 5) + 32;
    printf("C: %3d F:%3d.\n", celsius, fahr);
    celsius += step;
  }

}
