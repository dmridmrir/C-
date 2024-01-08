//main함수가 작동하도록 코드 구현

#include <iostream>
#include<string>

using namespace std;

class CArray {
private:
	int len = 5;
	int* arr;
public:
	CArray() {
		arr = new int[len];
		for (int i = 0; i < len; i++) {
			arr[i] = i;
		}
	}
	CArray(const CArray& copy) {
		arr = new int[copy.len];
		for (int i = 0; i < len; i++) {
			arr[i] = copy.arr[i];
		}
	}
	~CArray() {
		delete[] arr;
	}
	CArray &operator+() {
		int temp[5];
		for (int i = 0; i < len; i++) {
			temp[i] = arr[i];
		}
		for (int i = 0; i < len; i++) {
			if (i == 0) {
				arr[i] = temp[4];
			}
			else {
				arr[i] = temp[i - 1];
			}
		}
		return *this;
	}
	CArray &operator-() {
		int temp[5];
		for (int i = 0; i < len; i++) {
			temp[i] = arr[i];
		}
		for (int i = 0; i < len; i++) {
			if (i != 4) {
				arr[i] = temp[i+1];
			}
			else {
				arr[i] = temp[0];
			}
		}
		return *this;
	}
	void Print() {
		for (int i = 0; i < len; i++) {
			cout << arr[i] << "\t";
		}
		cout << endl;
	}
};

int main(void) {
	CArray ary1;
	ary1.Print();

	CArray ary2 = +ary1;
	ary1.Print();
	ary2.Print();

	-(-ary1);
	ary1.Print();

	return 0;
}
