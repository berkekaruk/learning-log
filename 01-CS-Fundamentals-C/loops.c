// Counting backwards from 3 to 1 as many rounds as user wishes
#include <stdio.h>

int main(void) {
  int i, j;

  do {
    printf("How many rounds? ");
    scanf("%i", &j);
  } while (j <= 0);

  for (int k = 1; k < j+1; k++) {
    printf("Round %i of counting: \n", k);
    i = 3;

    while (i > 0) {
      printf("%i. \n", i);
      i--;
    }
  }

  return 0;
}