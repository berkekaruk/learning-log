// Added Function to prior code (loops.c)
#include <stdio.h>

void determineRounds(void);   // protype
void executeCounting(int j);  // protype

int main(void) {
  determineRounds();
  return 0;
}

void determineRounds(void) {
  int j;
  do {
    printf("How many rounds? ");
    scanf("%i", &j);
  } while (j <= 0);
  executeCounting(j);
}

void executeCounting(int j) {
  int i;
  for (int k = 1; k < j + 1; k++) {
    printf("Round %i of counting: \n", k);
    i = 3;

    while (i > 0) {
      printf("%i. \n", i);
      i--;
    }
  }
}