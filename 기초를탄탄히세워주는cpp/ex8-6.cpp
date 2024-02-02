//B클래스에 A객체가 2개만 존재하도록 구현
// A -> X,Y -> B
// A -> Z -> B

#include <iostream>
#include <string>

using namespace std;

class A {
protected:
	int a;
public:
	A(int i = 0) :a(i) {
		cout << "A생성" << endl;
	}
	~A() {
		cout << "A소멸" << endl;
	}
	void Print() {
		cout << "A" << endl;
	}
};

class X :virtual public A {
protected:
	int x;
public:
	X(int i = 0,int j = 0) :A(j),  x(i) {
		cout << "X생성" << endl;
	}
	~X() {
		cout << "X소멸" << endl;
	}
	void Print() {
		cout << "X" << endl;
	}
};

class Y :virtual public A {
protected:
	int y;
public:
	Y(int i = 0, int j = 0) :A(j), y(i) {
		cout << "Y생성" << endl;
	}
	~Y() {
		cout << "Y소멸" << endl;
	}
	void Print() {
		cout << "Y" << endl;
	}
};

class Z :virtual public A {
protected:
	int z;
public:
	Z(int i = 0, int j = 0) :A(j), z(i) {
		cout << "Z생성" << endl;
	}
	~Z() {
		cout << "Z소멸" << endl;
	}
	void Print() {
		cout << "Z" << endl;
	}
};

class B :public X,public Y, public Z {
protected:
	int b;
public:
	B(int i = 0,int j = 0, int k = 0,int l=0) :b(0),X(i,j),Y(i,k),Z(i,l) {
		cout << "B생성" << endl;
	}
	~B() {
		cout << "B소멸" << endl;
	}
	void Print() {
		A::Print();
		X::Print();
		Y::Print();
		Z::Print();
		cout << "B" << endl;
	}
};

int main(void) {
	B Pb(1, 2, 3, 4);
	Pb.Print();
	
	return 0;
}

