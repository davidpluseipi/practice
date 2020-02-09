#include <iostream>
using namespace std;

int main() {
	int n = 0, r = 0;

	cout << "Enter integer: ";
	cin >> n;

	r = n % 2; // remainder after dividing by 2

	if (r == 0) {
		cout << "Your integer is even." << endl;
	}
	else {
		cout << "Your integer is odd." << endl;
	}
	return 0;

}