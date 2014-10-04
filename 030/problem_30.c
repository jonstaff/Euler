#include <stdio.h>

int tens[6] = {1, 10, 100, 1000, 10000, 100000};
int powers[10] = {0, 1, 32, 243, 1024, 3125, 7776, 16807, 32768, 59049};

int power_sum(int a, int b, int c, int d, int e, int f)
{
  int digits = a * tens[0] + b * tens[1] + c * tens[2] + d * tens[3]
    + e * tens[4] + f * tens[5];

  if (powers[a] + powers[b] + powers[c] + powers[d] + powers[e] + powers[f] == digits) {
    return digits;
  } else {
    return 0;
  }
}

int main()
{
  int sum = -1;
  int val;

  for (int a = 0; a < 10; ++a)
    for (int b = 0; b < 10; ++b)
      for (int c = 0; c < 10; ++c)
        for (int d = 0; d < 10; ++d)
          for (int e = 0; e < 10; ++e)
            for (int f = 0; f < 10; ++f) {
              if ((val = power_sum(a, b, c, d, e, f))) {
                sum += val;
              }
            }

  printf("the solution is: %d\n", sum);
  return 0;
}
