#include <stdio.h>
#include <math.h>

int CountDivisors(long n);

int main(int argc, char const *argv[]) {
	long triangle = 0;
	long index = 1;
	int divisors = 0;

	while (divisors < 500) {
		triangle += index++;
		printf("%ld %i\n", triangle, divisors);
		divisors = CountDivisors(triangle);
	}

	printf("%ld\n", triangle);

	return 0;
}

int CountDivisors(long n) {
	int count = 0;
	for (int i = 1; i < sqrt(n) + 1; ++i) {
		if (n % i == 0) count++;
	}
	return count * 2;
}