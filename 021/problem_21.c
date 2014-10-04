#include <stdio.h>

const int kSize = 10000;

int amicable_numbers()
{
  int d[kSize] = {};
  for (int i = 1; i < kSize; ++i) {
    for (int j = 1; j < i; ++j) {
      if (i % j == 0) {
        d[i] += j;
      }
    }
  }

  int amicable[1000] = {};
  int count = 0;
  for (int a = 0; a < kSize; ++a) {
    for (int b = a + 1; b < kSize; ++b) {
      if (d[a] == b && d[b] == a) {
        amicable[count++] = a;
        amicable[count++] = b;
      }
    }
  }

  int sum = 0;
  for (int i = 0; i < 1000; ++i) {
    sum += amicable[i];
  }

  return sum;
}

int main()
{
  printf("The solution is: %d\n", amicable_numbers());
  return 0;
}
