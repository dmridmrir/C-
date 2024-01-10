//좌표와 move, draw함수를 포함하는 CPoint클래스와
//반지름과 move, draw, getarea 함수를 포함하는 CCircle클래스 작성
//CCircle은 CPoint를 상속받으며 move는 같은 내용, draw는 다른 내용을 갖도록 작성하고 테스트

#include <iostream>
#include <string>

using namespace std;

class CPoint {
protected:
	int x, y;
public:
	CPoint(int a, int b) :x(a), y(b) {}
	void Move(int a, int b) {
		x += a;
		y += b;
	}
	void Draw() {
		cout << "점" << x << "," << y << endl;
	}
};

class CCircle : public CPoint {
private:
	double Radius;
public:
	CCircle(int a, int b, double r) :CPoint(a, b), Radius(r) {}
	void Move(int a, int b) {
		x += a;
		y += b;
	}
	void Draw() {
		cout << "원" << x << "," << y << endl;
	}
	double GetArea() {
		return 3.14 * Radius * Radius;
	}
};

int main(void) {

	CPoint p(1, 2);
	CCircle c(3, 4, 1);

	p.Move(1, 1);
	c.Move(1, 1);

	p.Draw();
	c.Draw();

	cout << c.GetArea() << endl;

	return 0;
}
