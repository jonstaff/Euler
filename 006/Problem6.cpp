#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[]) {
	long a = 0;
	long b = 0;

	for (int i = 1; i < 101; ++i) {
		a += i * i;
		b +=i;
	}

	printf("The solution is: %ld\n", b * b - a);
	return 0;
}