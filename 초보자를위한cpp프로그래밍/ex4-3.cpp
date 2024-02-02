#include <iostream>

using namespace std;

/*
1에서 9사이 정수 n을 입력받아 구구단 n단 출력하는 코드 작성
*/
int main(void) {
	int n;
	cin >> n;

	for (int i = 2; i <= 9; i++) {
		cout << n << " * " << i << " = " << n * i << endl;
	}

	return 0;
}
