#include <iostream>

using namespace std;

int main(void) {
	int a, b;
	int temp;
	cout << "a값을 입력하세요 => ";
	cin >> a;
	cout << "b값을 입력하세요 => ";
	cin >> b;
	cout << "입력한 데이터 : a=" << a << "이고, b=" << b << "이다" << endl;
	
	temp = a;
	a = b;
	b = temp;

	cout << "데이터 교환 : a=" << a << "이고 b=" << b << "이다" << endl;

	return 0;
}
