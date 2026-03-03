#include <stdio.h>

int main(void) {
  char response;

  printf("Do you agree (y/n)? ");
  scanf("%c", &response);

  if (response == 'y' || response == 'Y') {
    printf("\n You agreed.");
  } else {
    printf("\n You disagreed.");
  }
}