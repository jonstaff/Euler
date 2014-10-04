#include <iostream>

int main()
{
  int longest = 0;
  int num;

  for (int i = 3; i < 1000000; ++i) {
    long n = i;
    int chain = 0;

    while (n > 1) {
      if (n % 2 == 0) {
        n /= 2;
      } else {
        n = 3 * n + 1;
      }
      ++chain;
    }

    if (chain > longest) {
      longest = chain;
      num = i;
    }
  }

  std::cout << "The solution is: " << longest << "\n";
  return 0;
}
