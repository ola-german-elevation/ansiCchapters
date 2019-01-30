#include <stdio.h>

/* print a table F-C
   for fahr = 0, 20, 300 */

int main()
{
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = upper;
  printf("F to C Table\n");
  printf("-------------\n\n\n");
  while(fahr >= lower){
    celsius = 5 * (fahr -32) /9;
    printf("C: %3d F:%3d.\n", celsius, fahr);
    fahr -= step;
  }

}
