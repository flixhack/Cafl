#include <stdio.h>
#include <stdlib.h>

int main() {
  int input1,
      input2,
      gcd;
  int i = 1;

  printf("Input first positive integer: ");
  scanf("%d", &input1);
  while (input1 < 1) {
    printf("\ninput first positive integer: ");
    scanf("%d", &input1);
  }
  printf("\nInput second positive integer: ");
  scanf("%d", &input2);
  while (input2 < 1) {
    printf("\ninput second positive integer: ");
    scanf("%d", &input2);
  }

  if (input1 == input2) {
    gcd = input1;
  }

  while (i <= input1 && i <= input2) {
    if ((input1 % i == 0) && (input2 % i == 0)) {
      gcd = i;
    }

    i++;
  }
  printf("\nThe greatest common divisor is %i", gcd);

  return 0;
}
