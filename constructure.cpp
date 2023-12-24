#include <iostream>

using namespace std;

class CPoint {
private:
	int x;
	int y;
public:
	CPoint(int a, int b){
		x = a;
		y = b;
	}
	void Print() {
		cout << x << "," << y << endl;
	}
};

int main(void) {
	CPoint P1 = { 3,4 };

	P1.Print();

	return 0;
}
