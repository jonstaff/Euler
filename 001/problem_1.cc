#include <iostream>

int main() 
{
  int sum = 0;

  for (int i = 0; i < 1000; ++i) {
    if (i % 3 == 0) {
      sum += i;
    } else if (i % 5 == 0) {
      sum += i;
    }
  }

  std::cout << "The sum is: " << sum << "\n";

  return 0;
}
