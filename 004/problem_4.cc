#include <iostream>

bool IsPalindrome(int n);

int main()
{
  int solution = 0;
  int a = 999;
  int b, c;

  while (a > 0) {
    b = 999;
    while (b >= a) {
      c = a * b;
      if (IsPalindrome(c)) {
        if (c > solution) {
          solution = c;
        }
        break;
      }
      b--;
    }
    a--;
  }

  std::cout << "The solution is: " << solution << "\n";
  return 0;
}

bool IsPalindrome(int n) {
  int temp = n;
  int reverse = 0;

  while (temp > 0) {
    reverse *= 10;
    reverse += temp % 10;
    temp /= 10;
  }

  return n == reverse;
}
