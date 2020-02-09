#include <iostream>
using namespace std;

int main() {
	int x = 0;

	for (int x=0; x <= 5; ++x) {

		if (x == 1) {
			cout << "x equals 1" << endl;
		}
		else if (x == 2) {
			cout << "x equals 2" << endl;
		}
		else if (x == 3) {
			cout << "x equals 3" << endl;
		}
		else if (x == 4) {
			cout << "x equals 4" << endl;
		}
		else {
			cout << "x equals " << x << endl;
		}
	}
}