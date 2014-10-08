#include <stdio.h>
#include <math.h>

const int kNumTruncatablePrimes = 11;

int is_prime(int n)
{
  if (n < 4)
    return n > 1;
  if (n % 2 == 0 || n % 3 == 0)
    return 0;
  for (int i = 5; i < sqrt(n) + 1; ++i) {
    if (n % i == 0) return 0;
  }
  return 1;
}

int is_truncatable_prime(int num)
{
  if (!is_prime(num)) return 0;

  int left = num;
  int right = 0;
  int tens = 1;

  while (left) {
    right += tens * (left % 10);
    if (!is_prime(left) || !is_prime(right)) return 0;
    left /= 10;
    tens *= 10;
  }

  return 1;
}

int main()
{
  int sum = 0;
  int count = 0, n = 11;
  while (count < kNumTruncatablePrimes) {
    if (is_truncatable_prime(n)) {
      sum += n;
      ++count;
    }
    n += 2;
  }

  printf("The solution is: %d\n", sum);
  return 0;
}
