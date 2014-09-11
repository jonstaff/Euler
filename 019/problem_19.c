#include <stdio.h>

const int kNumberOfYears = 100;
const int kDaysInJanuary = 31;
const int kDaysInMarch = 31;
const int kDaysInApril = 30;
const int kDaysInMay = 31;
const int kDaysInJune = 30;
const int kDaysInJuly = 31;
const int kDaysInAugust = 31;
const int kDaysInSeptember = 30;
const int kDaysInOctober = 31;
const int kDaysInNovember = 30;
const int kDaysInDecember = 31;

int CountingSundays()
{
  int sundays = 0;
  int days = 366; // start days at 1 since Jan. 1, 1900 is Monday; then add 365 for the first year
  int years = 1901;

  for (int i = 0; i < kNumberOfYears; ++i) {
    // Jan 1
    if (days % 7 == 0) {
      ++sundays;
    }

    days += kDaysInJanuary;

    // Feb 1
    if (days % 7 == 0) {
      ++sundays;
    }

    if (years % 4 != 0 || (years % 100 == 0 && years % 400 != 0)) {
      days += 28;
    } else {
      days += 29;
    }

    // March 1
    if (days % 7 == 0) {
      ++sundays;
    }

    days += kDaysInMarch;

    // April 1
    if (days % 7 == 0) {
      ++sundays;
    }

    days += kDaysInApril;

    // May 1
    if (days % 7 == 0) {
      ++sundays;
    }

    days += kDaysInMay;

    // June 1
    if (days % 7 == 0) {
      ++sundays;
    }

    days += kDaysInJune;

    // July 1
    if (days % 7 == 0) {
      ++sundays;
    }

    days += kDaysInJuly;

    // August 1
    if (days % 7 == 0) {
      ++sundays;
    }

    days += kDaysInAugust;

    // September 1
    if (days % 7 == 0) {
      ++sundays;
    }

    days += kDaysInSeptember;

    // October 1
    if (days % 7 == 0) {
      ++sundays;
    }

    days += kDaysInOctober;

    // November 1
    if (days % 7 == 0) {
      ++sundays;
    }

    days += kDaysInNovember;

    // December 1
    if (days % 7 == 0) {
      ++sundays;
    }

    days += kDaysInDecember;
  }

  return sundays;
}

int main(int argc, const char *argv[])
{
  printf("The solution is: %d\n", CountingSundays());
}
