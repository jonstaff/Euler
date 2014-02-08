#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
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

	return 0;
}