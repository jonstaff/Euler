#include <stdio.h>
#include <math.h>

int main()
{
  double combos[10000];
  int size = 0;
  for (int a = 2; a < 101; ++a) {
    for (int b = 2; b < 101; ++b) {
      double product = pow(a, b);
      combos[size++] = product;
    }
  }

  int terms = size;
  for (int i = 0; i < size; ++i) {
    for (int j = i + 1; j < size; ++j) {
      if (combos[i] == combos[j] && combos[i] != 0
          && combos[j] != 0) {
        --terms;
        combos[j] = 0;
      }
    }
  }

  printf("The solution is: %d\n", terms);
  return 0;
}
