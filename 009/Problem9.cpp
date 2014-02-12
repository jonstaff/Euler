#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[]) {
	for (int a = 1; a < 501; ++a) {
		for (int b = a; b < 501; ++b) {
			for (int c = b; c < 501; ++c) {
				if (a * a + b * b == c * c && a + b + c == 1000) {
					printf("The solution is: %i\n", a * b * c);
				}
			}
		}
	}

	return 0;
}