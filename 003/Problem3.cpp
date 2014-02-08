#include <stdio.h>
#include <math.h>

using namespace std;

bool IsPrime(long x);	

int main(int argc, char const *argv[]) {
	long num = 600851475143;
	long prime;

	for (long i = 3; i < num / 2; ++i) {
		if (num % i == 0) {
			prime = num / i;
			
			if (IsPrime(prime)) {
				printf("Largest prime is: %ld\n", prime);
				return 0;
			}
		}
	}

	return 1;
}

bool IsPrime(long x) {
	if (x < 2)
			return false;
	if (x == 2)
		return true;
	if (x == 3)
		return true;
	if (x % 2 == 0 || x % 3 == 0)
		return false;
	for (int i = 5; i < sqrt(x) + 1; i++) {
		if (x % i == 0)
			return false;
	}
		
	return true;
}