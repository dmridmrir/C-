//함수 템플릿을 이용해 swap함수를 구현하되 실 매개 변수의 값도 교환되도록 작성

#include <iostream>
#include <string>

using namespace std;

template <typename t>
void swap(t *a, t *b) {
	t temp = a;
	a = b;
	b = temp;
}

int main(void) {
	int a = 1, b = 2;
	double c = 1.1, d = 2.2;

	swap(a, b);
	swap(c, d);
	cout << a << " " << b << endl;
	cout << c << " " << d << endl;

	return 0;
}
