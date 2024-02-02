#include <iostream>

using namespace std;

/*
1~10사이의 정수를 입력받아 2의 배수와 3의 배수를 출력하는 코드 작성
*/
int main(void) {
	int n;
	cout << "정수를 입력하세요 => ";
	cin >> n;

	if (n % 2 == 0) {
		cout << "2의 배수입니다" << endl;
	}
	else if (n % 3 == 0) {
		cout << "3의 배수입니다" << endl;
	}
	else {
		cout << "아무것도 아님" << endl;
	}

	return 0;
}
