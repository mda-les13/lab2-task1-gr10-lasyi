/* hello.c */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Использование: %s <размер_массива>\n", argv[0]);
    return 1;
  }

  int n = atoi(argv[1]);
  if (n <= 0) {
    printf("Размер массива должен быть положительным числом.\n");
    return 1;
  }

  srand(time(NULL));

  int arr[n];
  printf("Исходные данные:\n");
  for (int i = 0; i < n; i++) {
    arr[i] = rand() % 10000;
    printf("%d ", arr[i]);
  }
  printf("\n");

  int count = 0;
  for (int i = 0; i < n; i++) {
    if (has_unique_digits(arr[i])) {
      count++;
    }
  }

  printf("Количество чисел с уникальными цифрами: %d\n", count);

  return 0;
}
