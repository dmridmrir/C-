//chsape 클래스를 추상클래스로 만들어고 세 클래스 모두 면적 출력을 위한 PRint함수 생성
//출력 연산자 오버로딩

#include <iostream>
#include <string>

using namespace std;

class CShape {
protected:
	int x, y;
public:
	CShape(int a, int b) :x(a), y(b) {}
	void Move(int a, int b) {
		x += a;
		y += b;
	}
	virtual void Print() = 0;
	friend ostream& operator<<(ostream& out, CShape& c1);
};

class CCircle : public CShape{
private:
	double Radius;
public:
	CCircle(int a, int b, double r) :CShape(a,b), Radius(r) {}
	virtual double getArea() {
		return 3.14 * Radius * Radius;
	}
	void Print() {
		cout << getArea() << endl;
	}
};
class CRect : public CShape{
private:
	int Garo, Sero;
public:
	CRect(int a, int b, int g, int s):CShape(a,b), Garo(g), Sero(s) {}
	virtual double getArea() {
		return Garo * Sero;
	}
	void Print() {
		cout << getArea() << endl;
	}
};

ostream &operator<<(ostream& out, CShape& c1) {
	c1.Print();
	return out;
}

int main(void) {
	CCircle Cir(1, 1, 1);
	CRect Rect(2, 2, 2, 2);
	CShape* pSpe;
	
	pSpe = &Cir;
	cout << *pSpe;

	pSpe = &Rect;
	cout << *pSpe;

	return 0;
}
