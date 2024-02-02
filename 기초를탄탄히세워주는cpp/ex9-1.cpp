//main함수가 실행되는지 확인

#include <iostream>
#include <string>

using namespace std;

#define PI 3.14

class CCircle {
protected:
	int x, y;
	double Radius;
public:
	CCircle(int a, int b, double r):x(a),y(b),Radius(r){}
	double GetArea() {
		return PI * Radius * Radius;
	}
	CCircle operator=(const CCircle& c1) {
		x = c1.x;
		y = c1.y;
		Radius = c1.Radius;
		cout << "대입연산자" << endl;
		return *this;
	}
};
class CSphere :public CCircle {
private:
	int z;
public:
	CSphere(int a, int b, int c, double r):CCircle(a,b,r),z(c){}
	double GetArea() {
		return 4 * PI * Radius * Radius;
	}
	double GetVolume() {
		return (4.0 / 3.0) * PI * Radius * Radius * Radius;
	}
};
class CPoint {
private:
	int x, y;
public:
	CPoint(int a = 0, int b = 0) :x(a), y(b) {}
	CPoint operator=(const CPoint& po) {
		x = po.x;
		y = po.y;
		cout << "대입연산자 cpoint" << endl;
	}
};

int main(void) {
	CPoint Po(1, 1);
	CSphere sph(3,3,3,3);
	CCircle Cir(2, 2, 2);

	CPoint Po2 = Cir;		//무관한 클래스 객체 간 복사 (불가능)
	CCircle Cir2 = sph;		//derived -> base (가능)
	CSphere sph2 = Cir;		//base -> derived (불가능)

	return 0;
}
