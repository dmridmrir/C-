//다음 프로그램의 출력 결과는 부엇인가
/*
생성자 base 0
생성자 dereived 0
생성자 base 1
생성자 dereived 1
생성자 base 2
생성자 dereived 2
소멸자 dereived 1
소멸자 base 1
소멸자 dereived 2
소멸자 base 2
소멸자 dereived 0
소멸자 base 0
*/

#include <iostream>
#include <string>

using namespace std;

class Base {
protected:
	int num;
public:
	Base() :num(0) {
		cout << "생성자 Base(" << num << ")" << endl;
	}
	Base(int n) :num(n) {
		cout << "생성자 Base(" << num << ")" << endl;
	}
	~Base() {
		cout << "소멸자 Base(" << num << ")" << endl;
	}
};

class Derived : public Base {
public:
	Derived() {
		cout << "생성자 Derived(" << num << ")" << endl;
	}
	Derived(int n) :Base(n) {
		cout << "생성자 Derived(" << num << ")" << endl;
	}
	~Derived() {
		cout << "소멸자 Derived(" << num << ")" << endl;
	}
};

Derived d1;

void main(void) {
	Derived* d2 = new Derived(1);
	Derived d3(2);

	delete d2;
}
