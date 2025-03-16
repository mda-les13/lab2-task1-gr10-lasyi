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

int main(void) {
  int n;
  printf("Введите количество элементов в массиве: ");
  scanf("%d", &n);

  int arr[n];
  printf("Введите элементы массива:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int count = 0;
  for (int i = 0; i < n; i++) {
    if (has_unique_digits(arr[i])) {
      count++;
    }
  }

  printf("Количество чисел с уникальными цифрами: %d\n", count);

  return 0;
}
