//상속 class class이름 : public/protected/private class이름 형식
//함수 오버라이딩(재정의)

#include <iostream>
#include <string>

using namespace std;

class CCircle {
protected:
	int x, y;
	double Radius;
public:
	CCircle(int a, int b, double r) :x(a), y(b), Radius(r) {
		cout << "CCircle 생성자" << endl;
	}
	~CCircle() {
		cout << "CCircle 소멸자" << endl;
	}
	double GetArea() {
		return 3.14 * Radius * Radius;
	}
};

class CSphere :public CCircle {
private:
	int z;
public:
	CSphere(int a, int b, int c, double r) :CCircle(a,b,r), z(c) {
		cout << "CSphere 생성자" << endl;
	}
	~CSphere() {
		cout << "CSphere 소멸자" << endl;
	}
	double GetArea() {
		return 4 * 3.14 * Radius * Radius;
	}
// 함수 오버라이딩
	double GetVolume() {
		return (4.0 / 3.0) * 3.14 * Radius * Radius * Radius;
	}
};

int main(void) {
	CSphere sph(1, 1,1,1);


	cout << sph.GetArea() << endl;
	cout << sph.GetVolume() << endl;

	return 0;
}
