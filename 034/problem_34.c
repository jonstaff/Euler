#include <stdio.h>

const int kMax = 50000;
const int kFactorials[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

int factorial_sum(int n)
{
  int sum = 0;
  int temp = n;
  while (temp) {
    sum += kFactorials[temp % 10];
    temp /= 10;
  }
  return sum == n ? n : 0;
}

int main()
{
  int solution = 0;
  for (int i = 10; i < kMax; ++i) {
    solution += factorial_sum(i);
  }

  printf("The solution is: %d\n", solution);
  return 0;
}
