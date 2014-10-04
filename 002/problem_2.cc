#include <iostream>

const int kMax = 4000000;

int main()
{
  int a = 1;
  int b = 1;
  int sum = 0;
  int temp;

  while (b < kMax) {
    sum += b % 2 == 0 ? b : 0;

    temp = a;
    a = b;
    b += temp;
  }

  std::cout << "The sum: " << sum << "\n";

  return 0;
}
