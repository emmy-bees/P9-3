//Introductory Programming, Lab 9 -- Emerson Beesley -- October 29, 2026
#include <iostream>
#include <string>
using namespace std;
int romanCharValue(char r);
int main() {
	char romanNumeral = 'X';
	cout << romanCharValue(romanNumeral);


	return 0;
}

int romanCharValue(char r) {
	int finalNumber = 0;
	if (r == 'I') {
		finalNumber += 1;
	}
	else if (r == 'V') {
		finalNumber += 5;
	}
	else if (r == 'X') {
		finalNumber += 10;
	}
	else if (r == 'L') {
		finalNumber += 50;
	}
	else if (r == 'C') {
		finalNumber += 100;
	}
	else if (r == 'D') {
		finalNumber += 500;
	}
	else if (r == 'M') {
		finalNumber += 1000;
	}
	return finalNumber;
}