#include <stdio.h>
#include <string>

using namespace std;

bool IsPalindrome(int n);

int main(int argc, char const *argv[]) {
	int solution;
	int first = 999;
	int second = 999;

	if (IsPalindrome(54)) {
		printf("54 is a palindrome\n");
	}

	if (IsPalindrome(101)) {
		printf("101 is a palindrome\n");
	}

	// while (second > 0) {

	// }
}

bool IsPalindrome(int n) {
	string a = to_string(n);
	return a == string(a.rbegin(), a.rend());
}