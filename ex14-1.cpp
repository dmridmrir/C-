//1부터 9까지 정수 중 하나 입력받고 제곱값 출력
//잘못된 입력시 예외처리

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	cout << "1개의 정수 입력(1~9) : " << endl;
	int a;
	cin >> a;

	try {
		if (a > 9 or a < 1) {
			throw a;
		}

		cout << a * a << endl;
	}
	catch (int a) {
		cout << a << "말고 다른거 입력해라" << endl;
	}

	return 0;
}
