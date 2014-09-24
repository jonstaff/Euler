#include <stdio.h>

const int kFinish = 1000000;
const int kLength = 10;

void swap(int *a, int *b)
{
  int c = *a;
  *a = *b;
  *b = c;
}

void reverse(int array[], int start, int end)
{
  end -= 1;
  if (end <= start) {
    return;
  }

  while (1) {
    swap(&array[start], &array[end]);
    if (end - start < 2) {
      return;
    }
    ++start;
    --end;
  }
}

int compare(int a, int b)
{
  if (a > b) {
    return 1;
  } else if (a == b) {
    return 0;
  } else {
    return -1;
  }
}

void next_permutation(int seq[], int last)
{
  int first = 0;

  if (last == 1) {
    return;
  }

  int should_continue = 1;
  int a, b, c;
  while (should_continue) {
    a = last - 1;

    while (should_continue) {
      b = a;
      --a;

      if (compare(seq[a], seq[b]) < 0) {
        c = last - 1;

        while (compare(seq[a], seq[c]) >= 0) {
          --c;
        }

        swap(&seq[a], &seq[c]);
        reverse(seq, b, last);
        return;
      }

      if (a == first) {
        should_continue = 0;
      }
    }
  }
}

void print_array(int array[])
{
  for (int i = 0; i < kLength; ++i) {
    printf("%d", array[i]);
  }
  printf("\n");
}

int main()
{
  int seq[kLength] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int count = 1;

  while (count < kFinish) {
    next_permutation(seq, kLength);
    ++count;
  }

  printf("The solution is: ");
  print_array(seq);

  return 0;
}
