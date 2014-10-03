#include <stdio.h>

const int kMaxFactor = 2000;
const int kMaxProduct = 10000;

int g_pandigitals[kMaxProduct] = {0};

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
  for (int i = 1; i < kMaxFactor; ++i) {
    for (int j = i; j < kMaxFactor; ++j) {
      pan_digit = creates_pandigital(i, j);
      if (pan_digit) g_pandigitals[pan_digit - 1] = pan_digit;
    }
  }

  for (int i = 0; i < kMaxProduct; ++i) {
    sum += g_pandigitals[i];
  }

  printf("The solution is: %d\n", sum);
  return 0;
}
