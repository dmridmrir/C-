#include <iostream>

using namespace std;

/*
계산식을 5로 바꾸게 되면 int형의 나누기로 인식되어 값이 0이되어 결과값이 항상 0이 된다
따라서 double / float형으로 바꿔서 계산해야 정상적인 값이 나온다
*/
int main(void) {
	double f;
	double c;

	cin >> f;
	c = (5.0 / 9) * (f - 32);
	cout << c << endl;

	return 0;
}
