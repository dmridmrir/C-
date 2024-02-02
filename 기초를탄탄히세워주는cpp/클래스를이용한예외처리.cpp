#include <iostream>
#include <string>

using namespace std;

class CMyException {
public:
	virtual void What() = 0;
};

class CDivideZero:public CMyException {
public:
	void What() {
		cout << "0으로 못나눔" << endl;
	}
};
class CNegativeNumber:public CMyException {
public:
	void What() {
		cout << "x,y는 양수여야함" << endl;
	}
};

int main(void) {
	int x, y;
	cout << "2개 정수 입력" << endl;
	cin >> x >> y;

	try
	{
		if (y == 0) {
			throw CDivideZero();
		}
		if (x <= 0 || y <= 0) {
			throw CNegativeNumber();
		}

		cout << x / y << endl;
	}
	catch (CMyException &e)
	{
		e.What();
	}

	return 0;
}
