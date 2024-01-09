//(++Po)++가 작동할수 있도록 구현

#include <iostream>
#include<string>

using namespace std;

class CPoint {
private:
	int x, y;
public:
	CPoint(int a=0, int b=0):x(a),y(b) {
		
	}
	void Print() {
		cout << x << "," << y << endl;
	}
	CPoint &operator++() {
		x++;
		y++;
		return *this;
	}
	CPoint operator++(int a) {
		CPoint temp = *this;
		x++;
		y++;
		return temp;
	}
};

int main(void) {
	CPoint P1(1, 1);
	CPoint P2 = ++P1;
	CPoint P3 = ++(++P1);

	CPoint P4(1, 1);
	CPoint P5 = P4++;
	CPoint P6 = (P4++)++;

	CPoint P7(1, 1);
	CPoint P8 = (++P7)++;


	P1.Print();
	P2.Print();
	P3.Print();

	P4.Print();
	P5.Print();
	P6.Print();

	P8.Print();

	return 0;
}
