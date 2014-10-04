#include <iostream>

int main()
{
  int array[1000] = {1};
  int count = 1;
  int sum = 0;
  int carry = 0;

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

  std::cout << "The solution is: " << sum << "\n";
  return 0;
}
