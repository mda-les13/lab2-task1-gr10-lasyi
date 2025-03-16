/* hello.c */
#include <stdbool.h>
#include <stdio.h>

bool has_unique_digits(int num) {
  int digits[10] = {0};

  while (num > 0) {
    int digit = num % 10;
    if (digits[digit] > 0) {
      return false;
    }
    digits[digit]++;
    num /= 10;
  }

  return true;
}

void main(void) {
  printf("Hello World\n");
  printf("Goodbye World\n");
}
