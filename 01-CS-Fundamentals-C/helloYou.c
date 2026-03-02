#include <stdio.h>  // Import standard IO library for printf & scanf

int main(void) {
  char answer[10];  // Allocate a 10 byte character array to act as our string

  printf("What's your name? ");

  scanf("%s", answer);  // Read input from console and store it in 'answer'

  printf("Hello, %s!\n", answer);  // Print formatted output to console

  return 0;  // Return success status to the operating system (Best practice)
}