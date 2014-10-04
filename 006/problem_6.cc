#include <iostream>

int main()
{
  long a = 0;
  long b = 0;

  for (int i = 1; i < 101; ++i) {
    a += i * i;
    b +=i;
  }

  std::cout << "The solution is: " << b * b - a << "\n";
  return 0;
}
