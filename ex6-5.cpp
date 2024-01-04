//main함수가 작동하도록 클래스 작성
//복사 생성자를 사용해야 하고 함수를 연속으로 사용해야 하기 떄문에 참조를 사용하여 구현해야 한다

#include <iostream>
#include<string>

using namespace std;

class CArray {
private:
	int* ary;
	int len;
public:
	CArray(int a) {
		len = a;
		ary = new int[a];
		for (int i = 0; i < len; i++) {
			ary[i] = i;
		}
	}
	CArray(const CArray& ary0) {
		len = ary0.len;
		ary = new int[len];
		for (int i = 0; i < len; i++) {
			ary[i] = ary0.ary[i];
		}
	}
	CArray &Set(int a, int b) {
		ary[a] = b;
		return *this;
	}
	void Print() {
		for (int i = 0; i < len; i++) {
			cout << ary[i] << "\t";
		}
		cout << endl;
	}
};

int main(void) {
	CArray Ary1(5);
	CArray Ary2(7);
	CArray Ary3(Ary1);

	Ary2.Set(0, 11).Set(1, 12).Set(2, 13);

	Ary1.Print();
	Ary2.Print();
	Ary3.Print();

	return 0;
}
