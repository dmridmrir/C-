//프로그램을 만들어 내는 틀
//어떤 타입에 대해서도 적용이 가능하도록 만드는 것

#include <iostream>
#include <string>

using namespace std;

template <typename T>
T Sum(T a, T b) {
	return a + b;
}

int main(void) {
	cout << Sum(1, 2) << endl;
	cout << Sum(1.1, 2.2) << endl;
	cout << Sum('1', '2') << endl;

	return 0;
}
