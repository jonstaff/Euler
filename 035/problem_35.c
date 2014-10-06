#include <stdio.h>
#include <math.h>

const int kMax = 1000000;

int power(int x, int y)
{
  if (y < 1) return 1;
  if (y == 1) return x;
  return x * power(x, y - 1);
}

int is_prime(int n)
{
  if (n < 2)
    return 0;
  if (n == 2)
    return 1;
  if (n == 3)
    return 1;
  if (n % 2 == 0 || n % 3 == 0)
    return 0;
  for (int i = 5; i < sqrt(n) + 1; ++i) {
    if (n % i == 0) return 0;
  }
  return 1;
}

void rotate_array(int array[], int length)
{
  int temp;
  --length;
  while (length) {
    temp = array[length];
    array[length] = array[length - 1];
    array[length - 1] = temp;
    --length;
  }
}

int circular_prime(int n)
{
  if (!is_prime(n)) return 0;

  int temp = n;
  int length = 0;
  while (temp) {
    ++length;
    temp /= 10;
  }

  int array[length];
  for (int i = 0; i < length; ++i) {
    array[i] = (n / power(10, i)) % 10;
  }

  for (int i = 0; i < length - 1; ++i) {
    rotate_array(array, length);
    int value = 0;
    for (int j = 0; j < length; ++j) {
      value += array[j] * pow(10, j);
    }

    if (!is_prime(value)) return 0;
  }

  return 1;
}

int main()
{
  int n = 2, count = 1;
  while (n++ < kMax) {
    count += circular_prime(n);
  }

  printf("The solution is: %d\n", count);
  return 0;
}
