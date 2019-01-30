#include <stdio.h>
#define A 'a'
#define Z 'z'
#define AZ_RANGE  Z - A + 1

int main()
{
  int letters[AZ_RANGE];
  int c =0;

  for(int j=0; j < AZ_RANGE; ++j)
    letters[j] = 0;

  while ((c = getchar()) != EOF)
    if ((c >= A) || (c <=Z))
      ++letters[c - A];



  for(int i=0; i< AZ_RANGE; ++i)
  {
    printf("%c: - %d\n", i + A, letters[i]);
  }
  printf("%d\n", AZ_RANGE);
}
