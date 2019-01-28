#include <stdio.h>
#define MAX_WORDS 20
#define IN 1
#define OUT 0
#define MAX_LENGHT 20

/* a program to print histogram of the words length
   max length of a single word is MAX_LENGHT */

int main()
{

  int c, i;
  int blank_state = OUT;
  int words_len[MAX_WORDS]; // each slot represent a word.

  for (i = 0; i < MAX_WORDS; ++i)
    words_len[i] = 0;

  i = 0;
  while (((c = getchar()) != EOF) && (i < MAX_WORDS))
  {

    if ((c == ' ') || (c == '\t') || (c == '\n'))
    {
      if (blank_state == OUT)
      {
        blank_state = IN;
        ++i;
      }
    }
    else
    {
      blank_state = OUT;
      // if the word is larger than max, then max will be save.
      // and no error will accure.
      if (words_len[i] < MAX_LENGHT)
        ++words_len[i];
    }
  }

  for (i = 0; i < MAX_LENGHT; ++i){
    for (int j = 0; j < MAX_WORDS; ++j)
    {
      if (words_len[j] <= i)
        printf(" ");
      else
        printf("*");
    }
    printf("\n");
}
}
