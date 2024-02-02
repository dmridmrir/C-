//모든 연산자 오버로딩을 전역함수로 구현

#include <iostream>
#include<string>

using namespace std;

class CPoint {
private:
	int x, y;
public:
	CPoint(int a = 0, int b = 0) :x(a), y(b) {

	}
	void Print() {
		cout << x << "," << y << endl;
	}

	friend CPoint operator+(const CPoint& p1, const CPoint& p2);
	friend CPoint operator+(const CPoint& p1, int a);
	friend CPoint operator-(const CPoint& p1, const CPoint& p2);
	friend CPoint operator-(const CPoint& p1, int a);
	friend CPoint operator*(const CPoint& p1, int a);
	friend CPoint operator/(const CPoint& p1, int a);
};

CPoint operator+(const CPoint& p1, const CPoint& p2) {
	return CPoint(p1.x + p2.x, p1.y + p2.y);
}
CPoint operator+(const CPoint& p1, int a) {
	return CPoint(p1.x + a, p1.y + a);
}
CPoint operator-(const CPoint& p1, const CPoint& p2) {
	return CPoint(p1.x - p2.x, p1.y - p2.y);
}
CPoint operator-(const CPoint& p1, int a) {
	return CPoint(p1.x - a, p1.y - a);
}
CPoint operator*(const CPoint& p1, int a) {
	return CPoint(p1.x * a, p1.y * a);
}
CPoint operator/(const CPoint& p1, int a) {
	return CPoint(p1.x / a, p1.y / a);
}


int main(void) {
	CPoint P1(2, 2), P2(4, 4);
	int a = 2;

	(P1 + P2).Print();
	(P1 + a).Print();
	(P1 - P2).Print();
	(P1 - a).Print();
	(P1 * a).Print();
	(P1 / a).Print();

	return 0;
}
