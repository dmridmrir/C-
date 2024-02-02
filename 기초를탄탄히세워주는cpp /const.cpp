//멤버 변수라고 하여 const PI = 3.14로 초기화 하면 안됨
//PI가 메모리에 생성될 때 초기화 즉, CCircle 객체가 생성 될 때 값 초기화
//const값은 읽기만 가능
//const 멤버 함수가 아니라면 호출 불가능

#include <iostream>
#include<string>

using namespace std;

class CCircle {
private:
	double radius;
	const double PI;
public:
	CCircle(double r):radius(r),PI(3.14){}
	void SetRadius(double r) {
		radius = r;
	}
	double GetArea() const {
		return PI * radius * radius;
	}
};

int main(void) {
	CCircle C1(1);
	cout << C1.GetArea() << endl;

	const CCircle C2(1);
	//C2.SetRadius(2);

	return 0;
