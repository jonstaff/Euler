#include <stdio.h>

const int kMax = 100;

int reduced_denom(int a, int b)
{
  int n = a;
  while (n > 1) {
    if (a % n == 0 && b % n == 0) {
      a /= n;
      b /= n;
      n = a;
      continue;
    } 
    --n;
  }
  return b;
}

int cancels_digits(int a, int b)
{
  int ones_a = a % 10;
  int ones_b = b % 10;
  int tens_a = a / 10;
  int tens_b = b / 10;

  if (!ones_a || !ones_b || !tens_a || !tens_b) return 0;

  float fraction = (float) a / (float) b;

  if ((ones_a == ones_b && (float) tens_a / (float) tens_b == fraction)
      || (ones_a == tens_b && (float) tens_a / (float) ones_b == fraction)
      || (tens_a == ones_b && (float) ones_a / (float) tens_b == fraction)
      || (tens_a == tens_b && (float) ones_a / (float) ones_b == fraction))
    return 1;

  return 0;
}

int main()
{
  int numers[4];
  int denoms[4];
  int count = 0;
  for (int i = 10; i < kMax; ++i) {
    for (int j = i + 1; j < kMax; ++j) {
      if (cancels_digits(i, j)) {
        numers[count] = i;
        denoms[count++] = j;

        if (count > 3) break;
      }
    }
  }

  int a = 1, b = 1;
  for (int i = 0; i < count; ++i) {
    a *= numers[i];
    b *= denoms[i];
  }

  printf("The solution is: %d\n", reduced_denom(a, b));
  return 0;
}
