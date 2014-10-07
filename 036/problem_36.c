#include <stdio.h>
#include <stdlib.h>

const int kMax = 1000000;

int is_palindrome(int num, int base)
{
  int temp = num;
  int reverse = 0;

  while (temp > 0) {
    reverse *= base;
    reverse += temp % base;
    temp /= base;
  }
  return num == reverse;
}

int main()
{
  int sum = 0;
  int n = 1;
  while (n < kMax) {
    if (is_palindrome(n, 2) && is_palindrome(n, 10))
      sum += n;
    n += 2;
  }

  printf("The solution is: %d\n", sum);
  return 0;
}
