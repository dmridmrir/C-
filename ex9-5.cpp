//프로그램의 가상함수 테이블을 비롯한 메모리 구조를 그려라
//반복자에 따라서 pBase의 주소가 Base[0] / [1] / Derived[0] / [1]로 바뀌고 있음
/*
base::func1
base::func2
base::func3
base::func1
base::func2
base::func3
base::func1
derived::func2
base::func3
base::func1
derived::func2
base::func3
*/

#include <iostream>
#include <string>

using namespace std;

class base {
private:
	int x;
public:
	void func1() {
		cout << "base::func1" << endl;
	}
	virtual void func2() {
		cout << "base::func2" << endl;
	}
	virtual void func3() {
		cout << "base::func3" << endl;
	}
};
class derived : public base {
private:
	int y;
public:
	void func1() {
		cout << "derived::func1" << endl;
	}
	void func2() {
		cout << "derived::func2" << endl;
	}
	void func4() {
		cout << "derived::func4" << endl;
	}
};
int main(void) {
	base Base[2];
	derived Derived[2];
	base* pBase;
	int i, j;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			if (i == 0) {
				pBase = &Base[j];
			}
			else {
				pBase = &Derived[j];
			}

			pBase->func1();
			pBase->func2();
			pBase->func3();
		}
	}

	return 0;
}
