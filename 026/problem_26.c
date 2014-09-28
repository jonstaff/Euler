#include <stdio.h>

const int kMax = 1000;

int main()
{
  int max_digits = 0, answer = 0;

  for (int d = 7; d < kMax; ++d) {
    int decimal = 10 % d;
    int count = 1;
    int n = kMax;

    while (decimal > 1 && n > 0) {
      decimal *= 10;
      decimal %= d;

      ++count;
      --n;
    }

    if (count > max_digits && n > 1) {
      max_digits = count;
      answer = d;
    }
  }

  printf("The solution is: %d\n", answer);

  return 0;
}
