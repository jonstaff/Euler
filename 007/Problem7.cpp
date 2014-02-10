#include <stdio.h>
#include <math.h>

using namespace std;

long primes[10001] = {};
int count = 0;

bool IsPrime(long n);

int main(int argc, char const *argv[]) {
	long n = 2;

	while (count < 10001) {
		if (IsPrime(n)) {
			primes[count++] = n;
		}
		n++;
	}

	printf("The solution is: %ld\n", primes[10000]);
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