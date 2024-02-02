//객체의 형을 동적으로 결정할 경우(동적 바인딩) virtual함수를 통해 사용하고자 하는 함수 결정

#include <iostream>
#include <string>

using namespace std;

#define PI 3.14

class CCircle {
protected:
	int x, y;
	double radius;
public:
	CCircle(int a, int b, double r) :x(a), y(b), radius(r) {}
	virtual double GetArea() {
		return PI * radius * radius;
	}
};
class CSphere : public CCircle {
private:
	int z;
public:
	CSphere(int a, int b, int c, double r) :CCircle(a, b, r), z(c) {}
	virtual double GetAre() {
		return 4 * PI * radius * radius;
	}
	double GetVolume() {
		return (4.0 / 3.0) * PI * radius * radius * radius;
	}
};

int main(void) {
	int input;
	CCircle* pCir;

	cout << "입력(1 - CCircle, 2 - CSphere) : ";
	cin >> input;

	if (input == 1) {
		pCir = new CCircle(1, 1, 1);
	}
	else {
		pCir = new CSphere(1, 1, 1, 1);
	}

	cout << "면적 : " << pCir->GetArea() << endl;

	return 0;
}
