#include <stdio.h>

using namespace std;

// 232792560

int main(int argc, char const *argv[]) {
	int a = 2;
	int b = 2520;

	while (a < 21) {
		if (b % a == 0) {
			a++;
		} else {
			b++;
			a = 2;
		}
	}

	printf("The solution is: %i\n", b);
	return 0;
}