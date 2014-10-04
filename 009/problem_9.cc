#include <iostream>

int main()
{
  int solution; 
  for (int a = 1; a < 501; ++a) {
    for (int b = a; b < 501; ++b) {
      for (int c = b; c < 501; ++c) {
        if (a * a + b * b == c * c && a + b + c == 1000) {
          solution = a * b * c;
          break;
        }
      }
    }
  }

  std::cout << "The solution is: " << solution << "\n";
  return 0;
}
