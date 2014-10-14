#include <stdio.h>

int is_pandigital(int n)
{
  int nums[9] = {0};
  int holder = n;

  while (n) {
    int temp = n % 10;
    if (!temp || nums[temp - 1]) return 0;
    nums[temp - 1] = temp;
    n /= 10;
  }

  for (int i = 0; i < 9; ++i) {
    if (!nums[i]) return 0;
  }

  return holder;
}

int concat_digits(int a, int b)
{
  int tens = 10;
  while (b > tens) tens *= 10;

  return a * tens + b;
}

int main()
{
  int solution = 7;

  for (int i = 9876; i > 9182; --i) {
    solution = concat_digits(i, 2 * i);

    if (is_pandigital(solution)) {
      break;
    }
  }

  printf("The solution is: %d\n", solution);
  return 0;
}
