//main함수가 작동 될 수 있도록 class작성
//sum과 sub함수의 객체 반환 시 임시객체를 사용 할 것

#include <iostream>
#include<string>

using namespace std;

class CPoint {
private:
	int x, y;
public:
	CPoint(int a=0, int b=0):x(a),y(b){}
	CPoint(const CPoint& p0) {
		x = p0.x;
		y = p0.y;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
	void Print() {
		cout << x << "," << y << endl;
	}
};
CPoint Sum(CPoint p1, CPoint p2) {
	CPoint p3(p1.getX() + p2.getX(), p1.getY() + p2.getY());
	return p3;
}
CPoint Sub(CPoint p1, CPoint p2) {
	CPoint p3(p1.getX() - p2.getX(), p1.getY() - p2.getY());
	return p3;
}

int main(void) {
	CPoint P1(1, 2);
	CPoint P2(3, 4);
	CPoint P3 = Sum(P1, P2);
	CPoint P4 = Sub(P1, P2);

	P1.Print();
	P2.Print();
	P3.Print();
	P4.Print();

	return 0;
}
