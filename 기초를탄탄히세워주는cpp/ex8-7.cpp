//main함수가 작동할수 있도록 클래스 구현
//CPoint의 생성자가 private에 있는 상태로 구현

#include <iostream>
#include <string>

using namespace std;

class CPoint {
private:
	int x, y;
	CPoint(int a, int b) :x(a), y(b) {}
	static CPoint* OnlyPoint;
public:
	static CPoint GetPoint(int a, int b) {
		if (OnlyPoint == NULL) {
			OnlyPoint = new CPoint(a, b);
		}
		else {
			delete OnlyPoint;
			OnlyPoint = new CPoint(a, b);
		}
		return *OnlyPoint;
	}
	void Print() {
		cout << x << "," << y << endl;
	}
};

CPoint* CPoint::OnlyPoint = NULL;

int main(void) {
	CPoint P1 = CPoint::GetPoint(1, 2);
	CPoint P2 = CPoint::GetPoint(3, 4);

	P1.Print();
	P2.Print();

	return 0;
}
