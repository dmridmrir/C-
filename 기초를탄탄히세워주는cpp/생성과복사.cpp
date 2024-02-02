//생성과 복사
//경우에 따라 생성자와 대입 연산자를 직접 만들어야 함
//객체의 멤버 변수가 그대로 대응괴는 경우를 멤버단위 복사라고 함

#include <iostream>
#include<string>

using namespace std;

class CPoint {
private:
	int x, y;
public:
	CPoint(int a):x(a),y(a) {

	}
	void Print() {
		cout << x << "," << y << endl;
	}
};

int main(void) {
	CPoint P1(3);		//객제 생성
	CPoint P2(4);		//객제 생성
	CPoint P3 = P2;		//객제 생성	멤버단위 복사
	CPoint P4(P2);		//객제 생성	멤버단위 복사

	P1 = P2;			//객제 대입	멤버단위 복사

	P1.Print();
	P2.Print();
	P3.Print();
	P4.Print();

	return 0;
}
