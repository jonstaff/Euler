#include <stdio.h>

const int kDigits = 1000;

int main()
{
  int current_term[kDigits] = {1};
  int previous_term[kDigits] = {1};
  int n = 2, length = 1;

  while (!current_term[kDigits - 1]) {
    int carry = 0;

    for (int i = 0; i < length; ++i) {
      carry = current_term[i] + previous_term[i] + carry;
      previous_term[i] = current_term[i];
      current_term[i] = carry % 10;
      carry /= 10;
    }

    while (carry) {
      current_term[length++] = carry % 10;
      carry /= 10;
    }

    ++n;
  }

  printf("The solution is: %d\n", n);

  return 0;
}
