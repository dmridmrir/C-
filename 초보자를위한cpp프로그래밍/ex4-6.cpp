#include <iostream>

using namespace std;

/*
a,b,c가 15,30,5일 때 조건 연산자를 이용해 최대값을 두하는 코드 작성
*/
int main(void) {
	int a = 15, b = 30, c = 5;
	int biggest;

	biggest = a > b ? (a > c ? a : c) : (b > c ? b : c);

	cout << biggest << endl;

	return 0;
}
