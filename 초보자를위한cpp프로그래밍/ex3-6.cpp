#include <iostream>

using namespace std;

/*
a = 10, b = 5, c = 2일 때, (a-b)/(b^2-a*c)를 구하는 코드를 작성하시오
*/
int main(void) {
	int a = 10, b = 5, c = 2;
	double res;

	res = (a - b) / (b * b - a * c);

	cout << res << endl;

	return 0;
}
