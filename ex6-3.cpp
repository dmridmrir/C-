//main함수가 결과와 같이 출력 될 수 있도록 CPoint 클래스에 생성자를 명시적으로 구현하라

#include <iostream>
#include<string>

using namespace std;

class CPoint {
private:
	int x, y;
public:
	CPoint(int a = 0, int b = 0):x(a),y(b){}
	CPoint(const CPoint& Po) {
		x = Po.x;
		y = Po.y;
	}
	CPoint(int a, const CPoint& Po) {
		x = Po.x * a;
		y = Po.y * a;
	}
	CPoint(const CPoint& P0, const CPoint& P1) {
		x = P0.x + P1.x;
		y = P1.y + P0.y;
	}
	void Print() {
		cout << x << "," << y << endl;
	}
};

int main(void) {
	CPoint P1;
	CPoint P2(1);
	CPoint P3(2,3);
	CPoint P4 = P3;
	CPoint P5(2,P3);
	CPoint P6(P4,P5);

	P1.Print();
	P2.Print();
	P3.Print();
	P4.Print();
	P5.Print();
	P6.Print();

	return 0;
}
