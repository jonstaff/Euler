#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	// find the sum of the even-valued terms in the Fibonacci sequence whose values
	// do not exceed four million

	int a = 1;
	int b = 1;
	int sum = 0;
	int temp;
	
	while (b < 4000000) {
		sum += b % 2 == 0 ? b : 0;
		
		temp = a;
		a = b;
		b += temp;
	}

	cout << "The sum: " << sum << endl;
}