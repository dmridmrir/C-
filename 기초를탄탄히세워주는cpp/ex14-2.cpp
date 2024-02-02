//14.1에서 예외 처리 후 재입력 요구

#include <iostream>
#include <string>

using namespace std;

int main(void) {

	while (true) {
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
			cout << "다시 입력해라" << endl;
		}
	}


	return 0;
}
