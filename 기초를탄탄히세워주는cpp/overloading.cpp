#include <iostream>
#include<string>
#include<time.h>
#include<string.h>
using namespace std;

int GetArea(int x, int y) {
	return x * y;
}
double GetArea(double r) {
	return r * r * 3.14;
}

int main(void) {
	cout << "직사각형 = '1'입력" << endl;
	cout << "원 = '2'입력" << endl;
	int N;
	cin >> N;

	if (N == 1) {
		int x, y;
		cout << "가로,세로 입력" << endl;
		cin >> x >> y;

		cout << "넓이 : " << GetArea(x, y) << endl;
	}
	else {
		double r;
		cout << "반지름 입력" << endl;
		cin >> r;
		cout << "넓이 : " << GetArea(r) << endl;
	}
}
