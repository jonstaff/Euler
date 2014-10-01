#include <stdio.h>

const int kNumCoins = 8;
const int kCoins[kNumCoins] = {200, 100, 50, 20, 10, 5, 2, 1};

int coin_combos(int value, int coin_index)
{
  if (value < 0) return 0;
  if (coin_index == kNumCoins - 1) return 1;

  return coin_combos(value, coin_index + 1) + 
    coin_combos(value - kCoins[coin_index], coin_index);
}

int main()
{
  printf("The solution is: %d\n", coin_combos(200, 0));
  return 0;
}
