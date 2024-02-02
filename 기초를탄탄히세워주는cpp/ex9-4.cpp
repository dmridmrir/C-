//출력 결과는 무엇인가
/*
	b.p();		// bp
	b.q();		//bq
	d.p();		//dp
	d.q();		//dq
	pb->p();	//bp
	pb->q();	//bq
	pd->p();	//dp -> virtual 함수의 영향을 받음
	pd->q();	//bq
	pd2->p();	//dp
	pd2->q();	//dq
*/

#include <iostream>
#include <string>

using namespace std;

#define PI 3.14

class B {
public:
	B() {}
	virtual void p() {
		cout << "B::p()" << endl;
	}
	void q() {
		cout << "B::q()" << endl;
	}
};
class D :public B {
public:
	D() {}
	virtual void p() {
		cout << "D::p()" << endl;
	}
	void q() {
		cout << "D::q()" << endl;
	}
};
int main(void) {
	B b;
	D d;
	B* pb = new B;
	B* pd = new D;
	D* pd2 = new D;

	b.p();
	b.q();
  d.p();
	d.q();
	pb->p();
	pb->q();
	pd->p();
	pd->q();
	pd2->p();
	pd2->q();

	return 0;
}
