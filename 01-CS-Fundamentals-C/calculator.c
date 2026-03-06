#include <stdbool.h>
#include <stdio.h>

void getValues(void);                  // prototype
void callOperation(float x, float y);  // prototype

int main(void) {
  getValues();
  return 0;
}

void getValues(void) {
  float x, y;
  printf("Enter first value (x): ");
  scanf("%f", &x);
  printf("\n");
  printf("Enter second value (y): ");
  scanf("%f", &y);
  printf("\n");
  callOperation(x, y);
}

void callOperation(float x, float y) {
  int operation;
  float result;
  bool valid = false;

  do {
    printf(
        "Choose opration addition (1), subtraction (2), multiplication (3), "
        "division (4): ");
    scanf("%i", &operation);
    printf("\n");

    switch (operation) {
      case 1:
        result = x + y;
        printf("Result: %f\n", result);
        valid = true;
        break;
      case 2:
        result = x - y;
        printf("Result: %f\n", result);
        valid = true;
        break;
      case 3:
        result = x * y;
        printf("Result: %f\n", result);
        valid = true;
        break;
      case 4:
        result = x / y;
        printf("Result: %f\n", result);
        valid = true;
        break;
      default:
        printf("Invalid operation, please try again! (1, 2, 3 or 4)\n\n");
        break;
    }
  } while (valid == false);
}
