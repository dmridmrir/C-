//아래 main함수가 실행되지 않는 이유는 무엇인가?
//복사 생성자를 정의했기 때문에 디폴트 복사 생성자가 사라져서 명시적으로 생성해줘야 한다(주석처리)

#include <iostream>
#include<string>

using namespace std;

class CPoint {
private:
	int x, y;
public:
	//CPoint(int a = 0, int b = 0) :x(a), y(b) {}
	CPoint(const CPoint& Po) {
		x = Po.x;
		y = Po.y;
	}
	void Print() {
		cout << x << "," << y << endl;
	}
};

int main(void) {
	CPoint P1;
	CPoint P2(P1);

	P1.Print();
	P2.Print();

	return 0;
}
