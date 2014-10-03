#include <stdio.h>

const int kMax = 2000;
int g_pandigitals[4000000] = {0};

void print_array(int array[])
{
  for (int i = 0; i < 9; ++i) {
    printf("%d", array[i]);
  }
  printf("\n");
}

int creates_pandigital(int a, int b)
{
  int nums[9] = {0};
  int product = a * b;

  while (a) {
    int temp = a % 10;
    if (!temp || nums[temp - 1]) return 0;
    nums[temp - 1] = temp;
    a /= 10;
  }

  while (b) {
    int temp = b % 10;
    if (!temp || nums[temp - 1]) return 0;
    nums[temp - 1] = temp;
    b /= 10;
  }

  int prod = product;
  while (product) {
    int temp = product % 10;
    if (!temp || nums[temp - 1]) return 0;
    nums[temp - 1] = temp;
    product /= 10;
  }

  for (int i = 0; i < 9; ++i) {
    if (!nums[i]) return 0;
  }

  return prod;
}

int main()
{
  int sum = 0;
  int pan_digit;
  for (int i = 1; i < kMax; ++i) {
    for (int j = i; j < kMax; ++j) {
      pan_digit = creates_pandigital(i, j);
      if (pan_digit) g_pandigitals[pan_digit - 1] = pan_digit;
    }
  }

  for (int i = 0; i < 4000000; ++i) {
    if (g_pandigitals[i]) {
      printf("%d\n", g_pandigitals[i]);
    }
    sum += g_pandigitals[i];
  }

  printf("The solution is: %d\n", sum);
  return 0;
}
