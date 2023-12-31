//mian함수가 작동하도록 코드 작성
//1과2를 직사각형(디폴트) 원으로 받으며 한 변의 길이(반지름)을 받는다

#include <iostream>
#include<string>

using namespace std;

class CShape {
private:
	int type;
	int len;
	const double PI;
	static int rectcount;
	static int circount;
public:
	CShape():PI(3.14) {
		rectcount++;
	}
	CShape(int a, int b) :type(a), len(b), PI(3.14) {
		if (type == 1) {
			rectcount++;
		}
		else {
			circount++;
		}
	}
	~CShape() {
		rectcount--;
	}
	static int GetRectCount() {
		return rectcount;
	}
	static int GetCircleCount() {
		return circount;
	}
	double GetArea() {
		if (type == 1) {
			return len * len;
		}
		else {
			return len * len * PI;
		}
	}
};

int CShape::rectcount = 0;
int CShape::circount = 0;

int main(void) {
	CShape S1(1, 5);
	CShape S2(2, 5);
	CShape* pRect = new CShape[3];

	cout << "사각형 개수 : " << CShape::GetRectCount() << endl;
	cout << "원 개수 : " << CShape::GetCircleCount() << endl;
	cout << "S1 면적 : " << S1.GetArea() << endl;

	delete[] pRect;

	cout << "사각형 개수 : " << CShape::GetRectCount() << endl;
	cout << "원 개수 : " << CShape::GetCircleCount() << endl;
	cout << "S2 면적 : " << S2.GetArea() << endl;

	return 0;
}
