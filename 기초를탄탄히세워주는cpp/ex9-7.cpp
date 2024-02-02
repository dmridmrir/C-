#include <iostream>
#include <string>

using namespace std;

class Base {
public:
	Base() {
		cout << "BASE::BASE" << endl;
	}
	Base(int n) {
		cout << "BASE::BASE " << n << endl;
	}
};
class Derived : public Base {
private:
	Base b;
public:
	Derived() {
		cout << "D::D" << endl;
	}
	Derived(int n) :Base(n) {
		Base btemp(-n);
		b = btemp;
		cout << "D::D " << n << endl;
	}
};

int main(void) {
	Derived d(3);

	return 0;
}
