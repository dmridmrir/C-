//2개의 서로 다른 데이터 타입을 쌍으로 저장할수 있는 클래스 생성

#include <iostream>
#include <string>

using namespace std;

template <typename T1, typename T2>
class CArray {
private:
	int len = 0;
	T1 x[10];
	T2 y[10];
public:
	CArray() {}
	void put(T1 a, T2 b) {
		x[len] = a;
		y[len] = b;
		len++;
	}	
	template <typename T1, typename T2>
	friend ostream& operator<<(ostream& out, CArray<T1, T2> arr);
};

template <typename T1, typename T2>
ostream& operator<<(ostream& out, CArray<T1, T2> arr) {
	for (int i = 0; i < arr.len; i++) {
		out << arr.x[i] << "," << arr.y[i] << endl;
	}
	return out;
}

int main(void) {
	CArray<int, char> Obj;
	Obj.put(1, 'a');
	Obj.put(2, 'b');
	cout << Obj;

	return 0;
}
