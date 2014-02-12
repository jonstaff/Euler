#include <stdio.h>
#include <math.h>

using namespace std;

long primes[2000000] = {};
int count = 0;

bool IsPrime(long n);

int main(int argc, char const *argv[]) {
	long sum = 0;

	for (int i = 2; i < 2000000; ++i) {
		if (IsPrime(i)) {
			primes[count++] = i;
			sum += i;
		}
	}

	printf("The solution is: %ld\n", sum);
	return 0;
}

bool IsPrime(long n) {
	if (n < 2)
		return false;
	if (n == 2)
		return true;
	if (n == 3)
		return true;
	if (n % 2 == 0 || n % 3 == 0)
		return false;
	long i = 0;
	while ((primes[i] < sqrt(n) + 1) && i < count - 1) {
		if (n % primes[i] == 0)
			return false;
		i++;
	}
	return true;
}