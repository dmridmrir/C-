#include <iostream>

using namespace std;

/*
250.55와 4562.245를 float형으로 덧셈하여 출력하는 코드 작성
*/
int main(void) {
	float a = 250.55, b = 4562.245;

	cout << fixed;
	cout.precision(3);
	cout << a + b << endl;

	return 0;
}
