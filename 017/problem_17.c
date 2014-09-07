#include <stdio.h>

int num_letters(int num)
{
  int letters = 0;
  int hundreds, tens, ones;

  hundreds = num / 100;
  tens = (num / 10) % 10;
  ones = num % 10;

  switch (hundreds) {
    case 1:
    case 2:
    case 6:
      if (tens || ones) {
        letters += 13; // xxxhundredand
      } else {
        letters += 10;
      }
      break;
    case 3:
    case 7:
    case 8:
      if (tens || ones) {
        letters += 15; // xxxxxhundredand
      } else {
        letters += 12;
      }
      break;
    case 4:
    case 5:
    case 9:
      if (tens || ones) {
        letters += 14; // xxxxhundredand
      } else {
        letters += 11;
      }
      break;
    case 10:
      return 11; // onethousand
    default:
      break;
  }

  switch (tens) {
    case 1: 
      switch (ones) {
        case 0:
          letters += 3; // ten
          break;
        case 1:
        case 2:
          letters += 6; // eleven, twelve
          break;
        case 3:
        case 4:
        case 8:
        case 9:
          letters += 8; // thirteen, fourteen, eighteen, nineteen
          break;
        case 5:
        case 6:
          letters += 7; // fifteen, sixteen
          break;
        case 7:
          letters += 9; // seventeen
          break;
      }
      return letters;
    case 2:
    case 3:
    case 8:
    case 9:
      letters += 6; // twenty, thirty, eighty, ninety
      break;
    case 4:
    case 5:
    case 6:
      letters += 5; // forty, fifty, sixty
      break;
    case 7:
      letters += 7; // seventy
      break;
    default:
      break;
  }

  switch (ones) {
    case 1:
    case 2:
    case 6:
      letters += 3; // one, two, six
      break;
    case 3:
    case 7:
    case 8:
      letters += 5; // three, seven, eight
      break;
    case 4:
    case 5:
    case 9:
      letters += 4; // four, five, nine
      break;
  }

  printf("Number is %d, hundreds is %d, tens is %d, ones %d, letters %d\n", num, hundreds, tens, ones, letters);
  return letters;
}

int main(int argc, char *argv[])
{
  int i;
  int total = 0;

  for (i = 1; i < 1001; ++i) {
    total += num_letters(i);
  }

  printf("The answer is: %d\n", total);
}
