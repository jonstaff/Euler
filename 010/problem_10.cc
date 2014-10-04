#include <iostream>
#include <math.h>

const int kMax = 2000000;
long g_primes[kMax] = {};
int g_count = 0;

bool IsPrime(long n);

int main()
{
  long sum = 0;

  for (int i = 2; i < kMax; ++i) {
    if (IsPrime(i)) {
      g_primes[g_count++] = i;
      sum += i;
    }
  }

  std::cout << "The solution is: " << sum << "\n";
  return 0;
}

bool IsPrime(long n) {
  if (n < 2)
    return false;
  if (n == 2)
    return true;
  if (n == 3)
    return true;
  if (n % 2 == 0 || n % 3 == 0)
    return false;
  long i = 0;
  while ((g_primes[i] < sqrt(n) + 1) && i < g_count - 1) {
    if (n % g_primes[i] == 0)
      return false;
    i++;
  }
  return true;
}
