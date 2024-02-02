//static 변수는 클래스 당 하나만 생성되며 생성과 동시에 초기화(디폴트 = 0 )

#include <iostream>
#include<string>

using namespace std;

class CPointArray;

class CPoint {
private:
	int x, y;
	static int count;
public:
	CPoint(int a = 0, int b= 0):x(a),y(b){
		count++;
	}
	~CPoint() {
		count--;
	}
	void Print() {
		cout << x << "," << y << endl;
	}
	static int GetCount() {
		return count;
	}
};

int CPoint::count = 0;

int main(void) {
	CPoint P1(1, 2);
	CPoint* P2 = new CPoint(3, 4);

	cout << CPoint::GetCount() << endl;
	delete P2;
	cout << P1.GetCount() << endl;

	return 0;
}
