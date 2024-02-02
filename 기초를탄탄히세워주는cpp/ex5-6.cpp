//main함수를 참조하여 CCircle 클래스를 구현하되 디폴트 매개변수를 사용할 것

#include <iostream>
#include<string>

using namespace std;

class CCircle {
private:
	int x, y;
	double radius;
public:
	CCircle(int a=0, int b=0, double c=1):x(a),y(b),radius(c) {

	}
	double GetArea(double r) {
		return r * r * 3.14;
	}
	double GetArea() {
		return radius * radius * 3.14;
	}
	void Move(int a, int b) {
		x += a;
		y += b;
	}
	void Print() {
		cout << "중심 : (" << x << "," << y << "), 면적 : " << GetArea(radius) << endl;
	}
};

int main(void) {
	CCircle C1;
	CCircle C2(1, 1);
	CCircle C3(2, 2, 2);

	cout << "test" << C1.GetArea(10) << endl;

	C2.Move(3, 3);

	C1.Print();
	C2.Print();
	C3.Print();

	return 0;
}
