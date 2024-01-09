//main함수가 실행 될 수 있도록 구현

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

class CArray {
private:
	int count;
	int* ary;
public:
	CArray(int a = 0) :count(a) {
		ary = new int[count];
		for (int i = 0; i < count; i++) {
			ary[i] = rand() % 10 + 1;
		}
	}

	CArray &operator=(const CArray& ary0) {
		delete[] ary;
		count = ary0.count;
		ary = new int[count];
		for (int i = 0; i < count; i++) {
			ary[i] = ary0.ary[i];
		}
		return *this;
	}

	CArray(const CArray& ary0) {
		count = ary0.count;
		ary = new int[count];
		for (int i = 0; i < count; i++) {
			ary[i] = ary0.ary[i];
		}
	}
	friend ostream &operator<<(ostream &out,const CArray ary0);
};

ostream &operator<<(ostream& out, const CArray ary0) {
	for (int i = 0; i < ary0.count; i++) {
		out << ary0.ary[i] << "\t";
	}
	return out;
}

int main(void) {
	srand((unsigned) time(NULL));

	CArray Ary1(3);
	CArray Ary2(5);

	cout << Ary1 << endl;
	cout << Ary2 << endl;

	Ary1 = Ary2;

	cout << Ary1 << endl;
	cout << Ary2 << endl;

	return 0;
}
