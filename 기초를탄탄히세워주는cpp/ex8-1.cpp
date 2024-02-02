//잘못된 부분을 지적해 보라
/*
base class에 a는 private에 저장되어있기 때문에 derived class에서 사용할 수 없다
또한 main함수에서 c,f를 제외하고는 private와 protected에 선언되어 있기 때문에 외부에서 접근 할 수 없
*/

#include <iostream>
#include <string>

using namespace std;

class Base {
private:
	int a;
protected:
	int b;
public:
	int c;
};

class Derived :public Base {
private:
	int d;
	void func1() {
		a = 1; b = 2; c = 3; d = 4; e = 5; f = 6;
	}
protected:
	int e;
	void func2() {
		a = 1; b = 2; c = 3; d = 4; e = 5; f = 6;
	}
public:
	int f;
	void func3() {
		a = 1; b = 2; c = 3; d = 4; e = 5; f = 6;
	}
};

int main(void) {
	Derived dobj;
	dobj.a = 1; dobj.b = 2; dobj.c = 3; dobj.d = 4; dobj.e = 5; dobj.f = 6;

	return 0;
}
