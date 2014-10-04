#include <iostream>
#include <math.h>

int CountDivisors(long n);

int main()
{
  long triangle = 0;
  long index = 1;
  int divisors = 0;

  while (divisors < 500) {
    triangle += index++;
    divisors = CountDivisors(triangle);
  }

  std::cout << "The solution is: " << triangle << "\n";
  return 0;
}

int CountDivisors(long n) {
  int count = 0;
  for (int i = 1; i < sqrt(n) + 1; ++i) {
    if (n % i == 0) count++;
  }
  return count * 2;
}
