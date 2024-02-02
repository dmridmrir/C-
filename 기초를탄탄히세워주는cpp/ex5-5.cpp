//main 함수가 작동하도록 CArray 클래스 구현

#include <iostream>
#include<string>

using namespace std;

class CArray {
private:
	int ary[5];
public:
	CArray() {
		for (int i = 0; i < 5; i++) {
			ary[i] = 0;
		}
	}
	int &GetElem(int i) {
		return ary[i];
	}
	CArray &Increase(int i) {
		ary[i] += 1;
		return *this;
	}
};

int main(void) {
	int i;
	CArray Ary;

	for (i = 0; i < 5; i++) {
		Ary.GetElem(i) = i;
	}

	Ary.Increase(0).Increase(1).Increase(2).Increase(3).Increase(4);

	for (i = 0; i < 5; i++) {
		cout << Ary.GetElem(i) << endl;
	}
}
