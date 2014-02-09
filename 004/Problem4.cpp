#include <stdio.h>
#include <string>

using namespace std;

bool IsPalindrome(int n);

int main(int argc, char const *argv[]) {
	int solution = 0;
	int a = 999;
	int b, c;

	while (a > 0) {
		b = 999;
		while (b >= a) {
			c = a * b;
			if (IsPalindrome(c)) {
				if (c > solution) {
					solution = c;
				}
				break;
			}
			b--;
		}
		a--;
	}

	printf("Final solution is: %i\n", solution);
	return 0;
}

bool IsPalindrome(int n) {
	string a = to_string(n);
	return a == string(a.rbegin(), a.rend());
}