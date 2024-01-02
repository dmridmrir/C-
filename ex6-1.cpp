//아래 코드가 정삭적으로 작동되지 않는 이유는 무엇인가??
//복사생성에 의해 Ary1,2,3이 같은 메모리 주소를 갖게 되는데 delete Aty1에 의해 메모리 주소가 소멸되어
//Ary2,3이 가르키는 메모리 주소를 delete 할 수 없기 때문이다

#include <iostream>
#include<string>

using namespace std;

class CArray {
private:
	int* ary;
	int count;
public:
	CArray(int c = 1) {
		count = c;
		ary = new int[count];
		for (int i = 0; i < count; i++) {
			ary[i] = i;
		}
	}
	~CArray() {
		delete[] ary;
	}
	void Print() {
		for (int i = 0; i < count; i++) {
			cout << ary[i] << "\t";
		}
	}
};

int main(void) {
	CArray* Ary1 = new CArray(3);
	CArray Ary2(*Ary1);
	CArray Ary3;
	Ary3 = *Ary1;

	Ary1->Print();
	Ary2.Print();
	Ary3.Print();

	delete Ary1;

	return 0;
}
