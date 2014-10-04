#include <stdio.h>
#include <math.h>

const int kMax = 1000;

int is_prime(long n) {
  if (n < 2)
    return 0;
  if (n == 2)
    return 1;
  if (n == 3)
    return 1;
  if (n % 2 == 0 || n % 3 == 0)
    return 0;
  for (int i = 5; i < sqrt(n); ++i) {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

int creates_prime(int n, int a, int b)
{
  return is_prime(n * n + a * n + b);
}

int consec_primes(int a, int b)
{
  int n = 0;
  while (creates_prime(n++, a, b));
  return n;
}

int main()
{
  int product, max_primes = 0;
  for (int a = -999; a < kMax; ++a) {
    for (int b = -999; b < kMax; ++b) {
      int num_primes = consec_primes(a, b);
      if (num_primes > max_primes) {
        max_primes = num_primes;
        product = a * b;
      }
    }
  }

  printf("The solution is: %d\n", product);
  return 0;
}
