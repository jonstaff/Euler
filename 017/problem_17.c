#include <stdio.h>

struct Number {
  int num_letters;
  float probability;
};

int main(int argc, char *argv[])
{

  // 1 in 10 numbers will be 'one'

  int one, two, three, four, five, six, seven, eight, nine;
  int ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen, seventeen, eighteen, nineteen;
  int twenty, thirty, forty, fifty, sixty, seventy, eighty, ninety, hundred, andd;

  int num_single_digits = 190; // there are 190 of each 'one', 'two', ...
  int num_teens = 10; // there are 10 of each 'eleven', 'twelve', ...
  int num_tys = 100; // there are 100 of each 'twenty', 'thirty', ...
  int num_hundreds = 900; // there are 900 containing 'hundred'
  int num_ands = num_hundreds; // there is an 'and' for each 'hundred'

  one = two = six = ten = andd = 3;
  four = five = nine = 4;
  three = seven = eight = forty = fifty = sixty = 5;
  eleven = twelve = twenty = thirty = eighty = ninety = 6;
  fifteen = sixteen = seventy = hundred = 7;
  thirteen = fourteen = eighteen = nineteen = 8;
  seventeen = 9;

  int total = 0;

  total += one * num_single_digits;
  total += two * num_single_digits;
  total += three * num_single_digits;
  total += four * num_single_digits;
  total += five * num_single_digits;
  total += six * num_single_digits;
  total += seven * num_single_digits;
  total += eight * num_single_digits;
  total += nine * num_single_digits;

  total += eleven * num_teens;
  total += twelve * num_teens;
  total += thirteen * num_teens;
  total += fourteen * num_teens;
  total += fifteen * num_teens;
  total += sixteen * num_teens;
  total += seventeen * num_teens;
  total += eighteen * num_teens;
  total += nineteen * num_teens;

  total += twenty * num_tys;
  total += thirty * num_tys;
  total += forty * num_tys;
  total += fifty * num_tys;
  total += sixty * num_tys;
  total += seventy * num_tys;
  total += eighty * num_tys;
  total += ninety * num_tys;

  total += hundred * num_hundreds;
  total += andd * num_ands;

  printf("The answer is: %d\n", total);
}
