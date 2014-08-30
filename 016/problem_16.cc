#include <stdio.h>

int main(int argc, char const *argv[]) {
  // sum of the digits of the number 2^1000

  int array[1000] = {};
  int count = 1;
  int sum = 0;
  int carry = 0;

  array[0] = 1;

  for (int i = 0; i < 1000; ++i) {
    for (int j = 0; j < count; ++j) {
      array[j] *= 2;

      if (carry) {
        array[j] += carry;
        carry = 0;
      }

      if (array[j] > 9) {
        array[j] -= 10;
        carry = 1;

        if (j == count -1) {
          ++count;
        }
      }
    }
  }

  for (int i = 0; i < count; ++i) {
    sum += array[i];
  }

  printf("Sum of the digits: %i\n", sum);
  return 0;
}
