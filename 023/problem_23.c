#include <stdio.h>

const int kMax = 28123;

int main()
{
  int abundant_nums[kMax];
  int count = 0;
  for (int i = 12; i < kMax; ++i) {
    int sum = 0;

    for (int j = 1; j < i; ++j) {
      if (i % j == 0) {
        sum += j;
      }
    }

    if (sum > i) {
      abundant_nums[count++] = i;
    }
  }

  int is_abundant[kMax];
  for (int i = 0; i < count; ++i) {
    for (int j = 0; j < count; ++j) {
      int sum = abundant_nums[i] + abundant_nums[j];

      if (sum < kMax) {
        is_abundant[sum] = 1;
      }
    }
  }

  int total = 0;
  for (int i = 0; i < kMax; ++i) {
    if (!is_abundant[i]) {
      total += i;
    }
  }

  printf("The solution is: %d\n", total);

  return 0;
}
