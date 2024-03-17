#include <iostream>

#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);

using namespace std;

void triangle(int a, int b, int c) {
	int largest = max(a, b);
	largest = max(largest, c);

	if (largest >= (a + b + c - largest)) {
		cout << "Invalid" << endl;
	}else if (a == b && b == c) {
		cout << "Equilateral" << endl;
	}
	else if (a != b && b != c && a != c) {
		cout << "Scalene" << endl;
	}
	else {
		cout << "Isosceles" << endl;
	}
}

int main() {
	FASTIO;
	
	int a, b, c;

	while (true) {
		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0) {
			break;
		}

		triangle(a, b, c);
	}


	return 0;
}
