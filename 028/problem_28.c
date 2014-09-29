#include <stdio.h>

const int kMax = 1001;

int main()
{
  int solution = 1;
  int prev = 1;

  for (int i = 2; i < kMax; i += 2) {
    for (int j = 1; j < 5; ++j) {
      solution += prev + j * i;
    }
    prev += 4 * i;
  }

  printf("The solution is: %d\n", solution);
  return 0;
}
