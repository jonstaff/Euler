#include <stdio.h>

const int kMax = 28123;

int is_abundant(int n)
{
  int divisors = 0;
  for (int i = 2; i * i <= n; ++i) {
    if (!(n % i)) {
      divisors += i;

      if (i < n / i) {
        divisors += n / i;
      }

      if (divisors > n) {
        return 1;
      }
    }
  }

  return 0;
}

int main()
{
  int abundant[kMax];
  int checked[kMax];
  int count = 0;

  for (int i = 1; i < kMax; ++i) {
    if (is_abundant(i)) {
      abundant[count++] = i;
    }
  }

  for (int i = 0; i < count; ++i) {
    for (int j = i; j < count; ++j) {
      int temp = abundant[i] + abundant[j];

      if (temp < kMax) {
        checked[temp] = 1;
      }
    }
  }

  int sum = 0;
  for (int i = 0; i < kMax; ++i) {
    if (!checked[i]) {
      sum += i;
    }
  }

  printf("The solution is: %d\n", sum);
  return 0;
}
