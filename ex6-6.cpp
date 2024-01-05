//main함수가 결과와 같이 작동 될 수 있도록 코드 작성

#include <iostream>
#include<string>

using namespace std;

class CArray {
	//같은 원소끼리 더한 결과로 만든 객체를 반환
private:
	int len;
	int* ary;
public:
	CArray(int a) {
		len = a;
		ary = new int[a];
		for (int i = 0; i < len; i++) {
			ary[i] = i;
		}
	}
	CArray(const CArray& arr) {
		len = arr.len;
		ary = new int[len];
		for (int i = 0; i < len; i++) {
			ary[i] = arr.ary[i];
		}
	}
	~CArray() {
		delete[] ary;
	}
	CArray &Set(int a, int b) {
		ary[a] = b;
		return *this;
	}
	int length() {
		return len;
	}
	int index(int i) {
		return ary[i];
	}
	void Print() {
		for (int i = 0; i < len; i++) {
			cout << ary[i] << "\t";
		}
		cout << endl;
	}
};

CArray Sum(CArray arr1, CArray arr2) {
	int len1 = arr1.length();
	int len2 = arr2.length();

	if (len1 >= len2) {
		CArray arr3(len1);

		for (int i = 0; i < len2; i++) {
			arr3.Set(i, arr1.index(i) + arr2.index(i));
		}
		for (int j = len2; j < len1; j++) {
			arr3.Set(j, arr1.index(j));
		}

		return arr3;
	}
	else {
		CArray arr3(len2);

		for (int i = 0; i < len1; i++) {
			arr3.Set(i, arr1.index(i) + arr2.index(i));
		}
		for (int j = len1; j < len2; j++) {
			arr3.Set(j, arr2.index(j));
		}


		return arr3;
	}

}

int main(void) {
	CArray Ary1(5);
	CArray Ary2(7);
	Ary2.Set(0, 11).Set(1, 12).Set(2, 13);

	CArray Ary3 = Sum(Ary1, Ary2);

	Ary1.Print();
	Ary2.Print();
	Ary3.Print();

	return 0;
}
