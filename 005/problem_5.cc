#include <iostream>

int main()
{
  int a = 2;
  int b = 2520;

  while (a < 21) {
    if (b % a == 0) {
      a++;
    } else {
      b++;
      a = 2;
    }
  }

  std::cout << "The solution is: " << b << "\n";
  return 0;
}
