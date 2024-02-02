#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int x, y;

	cout << "정수 입력" << endl;
	cin >> x >> y;

	try {
		if (y == 0) {
			throw y;
		}

		cout << x / y << endl;

	}
	catch (int a) {
		cout << "0으로 못나눔" << endl;
	}
	return 0;

}
