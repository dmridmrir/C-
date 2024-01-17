//main함수가 실행되도록 클래스 템플릿 만들기
//+와 << 연산자 오버로딩 필요

#include <iostream>
#include <string>

using namespace std;

template <typename T>
class CPoint {
private:
	T x, y;
public:
	CPoint(T a = 0, T b = 0) :x(a), y(b) {}
	CPoint operator+(const CPoint& po) {
		return CPoint(x + po.x, y + po.y);
	}
	template <typename T>
	friend ostream& operator<<(ostream& out, CPoint<T>& po);
};

template <typename T>
ostream& operator<<(ostream& out, CPoint<T>& po) {
	out << po.x << "," << po.y;
	return out;
}

int main(void) {
	CPoint<int> a(1, 2);
	CPoint<int> b(3, 4);
	CPoint<int> c = a + b;
	cout << a << " + " << b << " = " << c << endl;

	CPoint<double> d(1.2, 3.4);
	CPoint<double> e(5.6, 7.8);
	CPoint<double> f = d + e;
	cout << d << " + " << e << " = " << f << endl;

	return 0;
}
