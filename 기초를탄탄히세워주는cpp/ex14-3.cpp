//예제 14.5에서 catch(...)문이 실행되도록 예외 발생

#include <iostream>
#include <string>

using namespace std;

int main(void) {

	int x, y;
	cout << "2개의 정수 입력" << endl;
	cin >> x >> y;

	try {
		if (y == 0) {
			throw 1;
		}
		if (x < 1 || y < 1) {
			throw 1.0;
		}
		if (x != y) {
			throw 'a';
		}
		cout << x / y << endl;
	}
	catch (int a) {
		cout << "0으로 못나눔" << endl;
	}
	catch (double a) {
		cout << "두 숫자 모두 양수여야함" << endl;
	}
	catch (...) {
		cout << "모든 예외 처리문" << endl;
	}

	cout << "사칙연산 종료" << endl;

	return 0;
}
