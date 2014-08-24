#include <stdio.h>

int main(int argc, char const *argv[]) {
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

  printf("%i produces the longest chain, which is %i\n", num, longest);
}
