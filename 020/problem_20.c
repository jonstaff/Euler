#include <stdio.h>

const int kMaxArraySize = 200; // large enough array to house 100!

void factorial(int n, int digits[])
{
  int temp = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < kMaxArraySize; ++j) {
      digits[j] *= i + 1;
      digits[j] += temp;
      temp = 0;

      if (digits[j] > 9) {
        temp = digits[j] / 10;
        digits[j] %= 10;
      }
    }
  }
}

int sum_array(int array[], int size)
{
  int sum = 0;
  for (int i = 0; i < size; ++i) {
    sum += array[i];
  }

  return sum;
}

int main()
{
  int digits[kMaxArraySize] = {1};
  factorial(100, digits);
  printf("The solution is: %d\n", sum_array(digits, kMaxArraySize));
  return 0;
}
