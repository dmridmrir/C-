//연산자 오버로딩
//1.class 내부에 참조를 이용하여 오버로딩
//2.클래스 외부에 오버로딩 함수를 작성하되 멤머변수에 접근가능하도록 설정(public, 멤버변수 접근 함수, friend선언)

#include <iostream>
#include<string>

using namespace std;

class CPoint {
private:
	int x, y;
public:
	CPoint(int a=0,int b= 0):x(a),y(b){}
	void Print() {
		cout << x << "," << y << endl;
	}
	friend CPoint operator+(const CPoint& P1, const CPoint& P2);
};

CPoint operator+(const CPoint& P1, const CPoint& P2) {
	return CPoint(P1.x + P2.x, P1.y + P2.y);
}

int main(void) {
	CPoint P1(1, 1);
	CPoint P2(2, 2);
	CPoint P3 = P1 + P2;

	P3.Print();

	return 0;
}
