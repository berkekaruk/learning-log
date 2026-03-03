// Compares two user-entered values ​​and indicates their relation
#include <stdio.h>

int main(void) {
  int x, y;

  printf("Enter compare value x: \n");
  scanf("%i", &x);

  printf("Enter compare value y: \n");
  scanf("%i", &y);

  if (x > y) {
    printf("x (%i) is greater than y (%i)!\n", x, y);
  } else if (y > x) {
    printf("y (%i) is greater than x (%i)!\n", y, x);
  } else {
    printf("x (%i) equals y (%i)!\n", x, y);
  }

  return 0;
}